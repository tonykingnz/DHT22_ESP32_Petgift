#include <Arduino.h>
#include <DHT.h>
#include <Wire.h>
#include <SPI.h>
//#define DHTTYPE DHT22

DHT my_sensor(5, DHT22);

float temperature, humidity;

void setup() {
 Serial.begin(9600);
 my_sensor.begin();
}

void loop() {
 humidity = my_sensor.readHumidity();
 temperature = my_sensor.readTemperature();

 Serial.print("Temperature: ");
 Serial.print(temperature);
 Serial.print("°C / Humidity: ");
 Serial.print(humidity);
 Serial.println("%");

 delay(2000);
}
