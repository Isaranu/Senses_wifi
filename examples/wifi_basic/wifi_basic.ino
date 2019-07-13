#include "Senses_wifi.h"

const char *ssid = "wlan-secure";
const char *passw = "4502160000";
const char *userid = "1";
const char *key = "2ns041o87zkz";

String response;
int slot_number = 1;
float data;

Senses_wifi myiot;

void setup(){
  Serial.begin(9600);
  response = myiot.connect(ssid, passw, userid, key);
  Serial.println(response);
}

void loop(){

  response = "";

  data = random(10,50);
  response = myiot.send(slot_number, data);
  Serial.println(response);

  delay(5000);
}
