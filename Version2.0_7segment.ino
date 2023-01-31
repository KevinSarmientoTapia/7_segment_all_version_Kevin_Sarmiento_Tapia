/*
 * Display numbers from 0 to 9 in 7-segment.
 * 
 * Version 2.0 (use of "for loop" in "void setup()")
 * 
 * Kevin Sarmiento Tapia
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
void setup() {
// "for loop" to set pins as outputs:
for (int i=2; i<9; i++) {
  pinMode(i, OUTPUT);
}
}
void loop() {
// Display number 0:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 0);
delay(Speed);
// Display number 1:
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
delay(Speed);
// Display number 2:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 0);
digitalWrite(g, 1);
delay(Speed);
// Display number 3:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 1);
delay(Speed);
// Display number 4:
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
delay(Speed);
// Display number 5:
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
delay(Speed);
// Display number 6:
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
delay(Speed);
// Display number 7:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
delay(Speed);
// Display number 8:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
delay(Speed);
// Display number 9:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
delay(Speed);
}
