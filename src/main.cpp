#include <Arduino.h>
#include <TCA6424A.h>

TCA6424A* extender = new TCA6424A();

void setup() {

}

double FindOutputPin(int outPin, int in1, int in2) {
  pinMode(outPin, INPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  Serial.print("Test vystupu ");
  Serial.println(outPin);

  for (int a = 0; a < 2; a++) {
    for (int b = 0; b < 2; b++) {
      digitalWrite(in1, a);
      digitalWrite(in2, b);
      delay(10);

      Serial.print(a);
      Serial.print(b);
      Serial.print(" -> ");
      Serial.println(digitalRead(outPin));
    }
  }
}

void loop() {
  int Pin2 = extender->readPin(2);


}