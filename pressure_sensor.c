/*
   Project name: ESP32 Pressure Sensor
   Modified Date: 24-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-pressure-sensor
*/

const int pressurePin = 34; // Analog pin connected to the pressure sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the pressure sensor
  int pressureValue = analogRead(pressurePin);

  // Print the analog value to the Serial Monitor
  Serial.print("Pressure Sensor Value: ");
  Serial.println(pressureValue);

  delay(500); // Add a small delay before the next reading
}
