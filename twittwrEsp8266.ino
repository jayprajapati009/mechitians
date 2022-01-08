#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>

String API = "F4KIT93GVH695WVU";
const char* ssid = "speechbee";
const char* password = "speechbee";
String tweet = "The+Sewerhole+at+22.560403525177477,+72.91666033862019+is+overflowing.";
WiFiClient client;

void setup() {

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
    delay(500);

  if (client.connect("184.106.153.149", 80))
  {
    client.print("GET /apps/thingtweet/1/statuses/update?key=" + API + "&status=" + tweet + " HTTP/1.1\r\n");
    client.print("Host: api.thingspeak.com\r\n");
    client.print("Accept: */*\r\n");
    client.print("User-Agent: Mozilla/4.0 (compatible; esp8266 Lua; Windows NT 5.1)\r\n");
    client.print("\r\n");
  }

}


void loop() {
}
