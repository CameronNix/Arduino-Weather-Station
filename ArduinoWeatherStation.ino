#include <DHT.h>

#define DHTPIN 2        // Data pin connected to DHT22
#define DHTTYPE DHT22   // Sensor type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT22 Starting...");
  dht.begin();
}

void loop() {
  // Read Temperature & Humidity
  float temp = dht.readTemperature();     // Celsius by default
  float hum  = dht.readHumidity();

  // Check for reading errors
  if (isnan(temp) || isnan(hum)) {
    Serial.println("Sensor Error");
    return;
  }

  // Print values
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" °C   |   Humidity: ");
  Serial.print(hum);
  Serial.println(" %");

  delay(2000);   // Basic version uses delay every 2 seconds
}
