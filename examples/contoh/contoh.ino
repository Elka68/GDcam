//menggunakan Board ESP32 Wrover Module (ESP32-Cam)

#include <GDcam.h>

String token = "/macros/s/ISI TOKEN URL GOOGLE SCRIPT/exec";

void setup()
{
  koneksiWifi("SSID","PSWD");
}

void loop() {
  simpanGambar(token);
  delay(10000);
}
