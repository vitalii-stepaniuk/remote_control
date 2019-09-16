#include <Arduino.h>
#include <WiFiClient.h>
#include <ESP8266WiFi.h>
#include <config.h>

void setup_wifi() {
  WiFi.begin(SSID, PASSWORD);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(SSID);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

}

void setup() {
  Serial.begin(115200);
  setup_wifi();
}

void loop() {
  // put your main code here, to run repeatedly:
}