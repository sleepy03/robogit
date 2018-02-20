#define REDPIN 9
#define GREENPIN 10
#define BLUEPIN 11

#define FADESPEED 8

// int r,g,b;

void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
  analogWrite(REDPIN, 146);
  analogWrite(GREENPIN, 66);
  analogWrite(BLUEPIN, 244);
}

void loop() {
}
