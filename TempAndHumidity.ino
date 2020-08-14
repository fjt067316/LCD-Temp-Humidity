#include <LiquidCrystal.h>
#include <dht.h>

#define dht_apin A0 
dht DHT;

LiquidCrystal lcd(11,12,5,4,3,2);

  

void setup() {
  
  lcd.begin(16,2);
  Serial.begin(9600);
  delay(500);
  delay(1000);
}

void loop() {
  
  DHT.read11(dht_apin);
  Serial.print(DHT.temperature);
  lcd.print(DHT.temperature);
  lcd.setCursor(0,1);
  lcd.print(DHT.humidity);
  lcd.setCursor(0,0);
  delay(1000);
  
}
