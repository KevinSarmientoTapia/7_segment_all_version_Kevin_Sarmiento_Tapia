/*
 * Display numbers from 0 to 9 in 7-segment.
 * 
 * Version 4.0 (use of "for loop", arrays and function).
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
   zero();
   delay(Speed);
// Display number 1:
   one();
   delay(Speed);
// Display number 2:
   two();
   delay(Speed);
// Display number 3:
   three();
   delay(Speed);
// Display number 4:
   four();
   delay(Speed);
// Display number 5:
   five();
   delay(Speed);
// Display number 6:
   six();
   delay(Speed);
// Display number 7:
   seven();
   delay(Speed);
// Display number 8:
   eight();
   delay(Speed);
// Display number 9:
   nine();
   delay(Speed);
}

void zero(){
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Zero[a]);
  }
}

void one(){
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], One[a]);
  }
}

void two(){
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Two[a]);
  }
}

void three(){
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Three[a]);
  }
}

void four(){
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Four[a]);
  }
}

void five(){
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Five[a]);
  }
}

void six(){
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Six[a]);
  }
}

void seven(){
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Seven[a]);
  }
}

void eight(){
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Eight[a]);
  }
}

void nine(){
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Nine[a]);
  }
}
