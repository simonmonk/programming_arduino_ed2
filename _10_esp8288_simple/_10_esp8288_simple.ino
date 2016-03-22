// sketch 10-

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

const char* ssid = "Linda-and-Simon";
const char* password = "EP8KQG9D";

ESP8266WebServer server(80);

void handleRoot()
{
  String message = "<html><body>\n";
  message += "<h1>Arduino Server</h1>\n";
  message += "<p>A0="; 
  message += analogRead(0); 
  message += "</p>"; 
  message += "<p>millis="; 
  message += millis(); 
  message += "</p>"; 
  message += "</html></body>\n";
  server.send(200, "text/html", message);
}

void setup()
{
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);

  server.begin();
  Serial.println("HTTP server started");
}

void loop()
{
  server.handleClient();
}



