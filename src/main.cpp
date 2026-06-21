#include <Arduino.h>
#include <TCA6424A.h>

TCA6424A* extender = new TCA6424A();

void setup() {

}

void loop() {
  int Pin2 = extender->readPin(2);


}