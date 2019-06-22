#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);

const int ph_pin = A0; 
const int ledPin = 13;
const int ldrPin = A1;
const int ch = 4;
const int relay[]={2,3,4,5};
float ecLevel = 1.48; //pre-set value for EC. EC Sensor not working currently.

float PHSensor (){
  int measure = analogRead(ph_pin);
  double voltage = 5 / 1024.0 * measure;
  float Po = 7 + ((2.5 - voltage) / 0.18);
  return Po;
}

void offRelay(){
  for(int i=1;i<ch;i++){
    digitalWrite(relay[i], HIGH);
  }
}

int relayPHEC(float phvalue, float ecvalue){
  if(phvalue < 5.5){
    digitalWrite(relay[1], LOW);
    return 1;
  }
  if(phvalue > 7.2){
    digitalWrite(relay[2], LOW);
    return 2;
  }
  if(ecvalue < 0.8){
    digitalWrite(relay[3], LOW);
    return 3;
  }
  else
    return 0;
}


int lightSensor(){
  int ldrStatus = analogRead(ldrPin);
  if (ldrStatus <= 300) {
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
  return ldrStatus; 
}

void phLCD(float phvalue){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("PH:");
  lcd.print(phvalue);
  lcd.setCursor(8,0);
  lcd.print("EC:");
  lcd.print(ecLevel);
  lcd.setCursor(0,1);
}

int relayLight(int lightvalue){
  if(lightvalue < 300){
    digitalWrite(relay[0], LOW);
    return 1;
  } 
  if(lightvalue > 300){
    digitalWrite(relay[0], HIGH);
    return 2;
  }
}

void relayLCD(float phvalue, int lightvalue){
  int pumpNo = relayPHEC(phvalue, ecLevel);
  int light = relayLight(lightvalue);
  if(pumpNo != 0){
    lcd.print("PUMP");
    lcd.print(pumpNo);
    lcd.print(" turned ON");
    delay(2000);
    offRelay();
    lcd.clear();
    phLCD(phvalue);
    lcd.print("PUMP");
    lcd.print(pumpNo);
    lcd.print(" turned OFF");
    delay(2000);
  }
  if(light == 1){
    lcd.clear();
    phLCD(phvalue);
    lcd.print("Light : ON");
  }
  if(light == 2){
    lcd.clear();
    phLCD(phvalue);
    lcd.print("Light : OFF");
  }
}

void printLCD(float phvalue, int lightvalue){
  phLCD(phvalue);
  relayLCD(phvalue, lightvalue);
}

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();

  for(int i=0;i<ch;i++){
    pinMode(relay[i], OUTPUT);
    digitalWrite(relay[i], HIGH);
  }
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  float phData;
  int lightData;
  String printData;

  phData = PHSensor();
  lightData = lightSensor();
  printLCD(phData, lightData);

  String lightString = (String) lightData;
  String phString = (String) phData;
  String ecString = (String) ecLevel;
  int NData = 3;

  printData += NData;
  printData += " " + lightString;
  printData += " " + phString;
  printData += " " + ecString;
  printData += " ";

  Serial.println(printData);
  delay(2000);
}
