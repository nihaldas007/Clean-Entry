// ---------------------------------------------------------------------------
// Example NewPing library sketch that does a ping about 20 times per second.
// ---------------------------------------------------------------------------

#include <NewPing.h>
#include <SD.h>
#include <TMRpcm.h>
#include <SPI.h>

TMRpcm tmrpcm;
NewPing sonar(8, 8, 100);
NewPing sonar1(6, 6, 100);

#define SD_ChipSelectPin 10
int l = 0, r = 0;
int pump = 7;

void setup() {
  tmrpcm.speakerPin = 9;
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  if (!SD.begin(SD_ChipSelectPin))
  {
    Serial.println("SD fail");
    return;
  }

}

void loop() {
  if (sl() || sr()) {
    digitalWrite(pump, 1);
    tmrpcm.setVolume(6);
    tmrpcm.play("test.wav");
  }
  else{
    digitalWrite(pump, 0);
  }

}
int sl() {
  delay(20);
  l = sonar.ping_cm();
  if (l > 0 && l < 50)return 1;
  else return 0;
}
int sr() {
  delay(20);
  r = sonar1.ping_cm();
  if (r > 0 && r < 50)return 1;
  else return 0;
}
