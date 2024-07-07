#include <WiFi.h>

const char* ssid = "wifi_adiniz";   // WiFi ağ adı
const char* password = "wifi_sifreniz"; // WiFi şifresi

void setup() {
  Serial.begin(115200);
  delay(1000);

  // WiFi bağlantısını başlat
  Serial.print("WiFi bağlantısı kuruluyor...");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi bağlandı!");

  pinMode(LED_BUILTIN, OUTPUT); // Dahili LED çıkış olarak ayarlanır
}

void loop() {
  // Trafik lambasının durumu için basit bir simülasyon
  digitalWrite(LED_BUILTIN, HIGH);   // Yeşil yanar (örneğin)
  delay(5000);  // 5 saniye bekler

  digitalWrite(LED_BUILTIN, LOW);    // Kırmızı yanar (örneğin)
  delay(3000);  // 3 saniye bekler
}
