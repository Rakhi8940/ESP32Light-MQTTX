#include <WiFi.h>
#include <PubSubClient.h>

// WiFi credentials
const char* ssid = "Airtel_Hack-n-Surf";
const char* password = "73540Rakhi$@";

// MQTT Broker
const char* mqtt_server = "broker.emqx.io";

WiFiClient espClient;
PubSubClient client(espClient);

const int ledPin = 2;  // Built-in LED pin for ESP32

void setup_wifi() {
  Serial.print("Connecting to WiFi: ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived on topic ");
  Serial.print(topic);
  Serial.print(": ");

  String message;
  for (unsigned int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
    message += (char)payload[i];
  }
  Serial.println();

  if (message == "1") {
    digitalWrite(ledPin, HIGH);
    Serial.println("LED turned ON");
  } else if (message == "0") {
    digitalWrite(ledPin, LOW);
    Serial.println("LED turned OFF");
  } else {
    Serial.println("Unknown command");
  }
}

void reconnect() {
  // Generate a random client ID to avoid conflicts
  String clientId = "ESP32Client-" + String(random(0xffff), HEX);

  while (!client.connected()) {
    Serial.print("Attempting MQTT connection with client ID: ");
    Serial.println(clientId);

    if (client.connect(clientId.c_str())) {
      Serial.println("Connected to MQTT broker");
      client.subscribe("inTopic0107");
      Serial.println("Subscribed to topic: inTopic0107");
    } else {
      Serial.print("Failed to connect, rc=");
      Serial.print(client.state());
      Serial.println(" - retrying in 5 seconds");
      delay(5000);
    }
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);  // Start LED off

  Serial.begin(115200);
  randomSeed(analogRead(0));  // Initialize random seed for clientId

  setup_wifi();

  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
}

void loop() {
  // Check WiFi connection and reconnect if needed
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("WiFi disconnected, reconnecting...");
    setup_wifi();
  }

  // Reconnect to MQTT broker if disconnected
  if (!client.connected()) {
    reconnect();
  }

  client.loop();

  delay(10); // Small delay to avoid CPU hogging
}
