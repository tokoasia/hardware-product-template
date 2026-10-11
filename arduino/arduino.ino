/*
 * Tokoasia Hardware Playground
 * Project: [Nama Produk / Sensor Demo]
 * License: MIT
 * 
 * Make. Build. Play.
 */

// Konfigurasi pin
const int PIN_STATUS_LED = 2; // LED bawaan board

void setup() {
  // Inisialisasi komunikasi serial
  Serial.begin(115200);
  delay(1000);
  
  pinMode(PIN_STATUS_LED, OUTPUT);
  
  Serial.println("=========================================");
  Serial.println("  Tokoasia Hardware Demo Initialized     ");
  Serial.println("  Make • Build • Play                    ");
  Serial.println("=========================================");
}

void loop() {
  // Indikator baca data
  digitalWrite(PIN_STATUS_LED, HIGH);
  delay(100);
  digitalWrite(PIN_STATUS_LED, LOW);
  
  // Contoh pembacaan data sederhana
  int sensorValue = analogRead(A0); // ganti sesuai sensor
  
  Serial.print("[DATA] Nilai Sensor: ");
  Serial.println(sensorValue);
  
  delay(1000); // jeda 1 detik per pembacaan
}
