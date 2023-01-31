/*
 * Display numbers from 0 to 9 in 7-segment.
 * 
 * Version 3.0 (use of "for loop" and arrays).
 * 
 * Kevin Sarmiento Tapia.
 */
int Speed=500; // Delay speed.
// Pins connected to the 7-segment:
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
// Arrays for the program:
int Pins[]={a, b, c, d, e, f, g}; // to set the pins
int Zero[]={1, 1, 1, 1, 1, 1, 0}; // To make the number 0.
int One[]={0, 1, 1, 0, 0, 0, 0}; // To make the number 1.
int Two[]={1, 1, 0, 1, 1, 0, 1}; // To make the number 2.
int Three[]={1, 1, 1, 1, 0, 0, 1}; // To make the number 3.
int Four[]={0, 1, 1, 0, 0, 1, 1}; // To make the number 4.
int Five[]={1, 0, 1, 1, 0, 1, 1}; // To make the number 5.
int Six[]={1, 0, 1, 1, 1, 1, 1}; // To make the number 6.
int Seven[]={1, 1, 1, 0, 0, 0, 0}; // To make the number 7.
int Eight[]={1, 1, 1, 1, 1, 1, 1}; // To make the number 8.
int Nine[]={1, 1, 1, 0, 0, 1, 1}; // To make the number 9.
void setup() {
// "for loop" to set pins as outputs:
for (int i=2; i<9; i++) {
  pinMode(i, OUTPUT);
}
}
void loop() {
// Display number 0:
for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Zero[a]);
}
delay(Speed);
// Display number 1:
for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], One[a]);
}
delay(Speed);
// Display number 2:
for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Two[a]);
}
delay(Speed);
// Display number 3:
for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Three[a]);
}
delay(Speed);
// Display number 4:
for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Four[a]);
}
delay(Speed);
// Display number 5:
for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Five[a]);
}
delay(Speed);
// Display number 6:
for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Six[a]);
}
delay(Speed);
// Display number 7:
for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Seven[a]);
}
delay(Speed);
// Display number 8:
for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Eight[a]);
}
delay(Speed);
// Display number 9:
for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Nine[a]);
}
delay(Speed);
}
