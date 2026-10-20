```cpp
// ==========================================
// AUTOMATED SOIL MOISTURE & IRRIGATION SYSTEM
// Capacitive Sensor & Relay Pump Control
// Developer: Aditya Kumar Gupta (aditya.geninfo.in)
// ==========================================

#define MOISTURE_PIN A0   // Analog soil moisture sensor
#define RELAY_PIN    13   // D7 connected to pump relay

const int DRY_THRESHOLD = 650;  // Calibration point for dry soil
const int WET_THRESHOLD = 300;  // Calibration point for saturated soil

void setup() {
  Serial.begin(115200);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // Ensure pump is off initially
  Serial.println("Smart Irrigation System Initialized.");
}

void loop() {
  int moistureVal = analogRead(MOISTURE_PIN);
  Serial.print("Soil Moisture ADC Value: ");
  Serial.println(moistureVal);

  if (moistureVal > DRY_THRESHOLD) {
    Serial.println("Status: Soil is DRY. Activating irrigation pump...");
    digitalWrite(RELAY_PIN, HIGH); // Turn Pump ON
    delay(5000);                   // Water for 5 seconds
    digitalWrite(RELAY_PIN, LOW);  // Turn Pump OFF
    Serial.println("Irrigation cycle completed. Pausing...");
  } else {
    Serial.println("Status: Soil moisture level is optimal.");
    digitalWrite(RELAY_PIN, LOW);  // Keep Pump OFF
  }

  delay(10000); // Check every 10 seconds
}
