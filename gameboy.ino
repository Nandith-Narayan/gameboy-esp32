#include "main.cpp"
#include "Logger.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //Logger::log("Amongus :D");
  Serial.println(getCpuFrequencyMhz());
}
