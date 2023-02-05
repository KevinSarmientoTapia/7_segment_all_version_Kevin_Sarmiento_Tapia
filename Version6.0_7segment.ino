/*
 * Display numbers from 0 to 9 in 7-segment using serial monitor.
 * 
 * Version 6.0 (use of "for loop", arrays, functions and writing in serial monitor).
 * 
 * Kevin Sarmiento Tapia.
 */
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
char option = ' '; // Stores values written in serial monitor
void setup() {
// "for loop" to set pins as outputs:
for (int i=2; i<9; i++) {
  pinMode(i, OUTPUT);
}
Serial.begin(9600); // Starts the serial monitor
}
void loop() {

if(Serial.available() != 0){ //If the serial monitor is available (1) we will be able to write in it.
    option = Serial.read(); // Option will read what we type in serial monitor
    if(option == '0'){ // 7-segment displays number 0 if we type "0" in serial monitor.
      zero();
    }
    else if(option == '1'){  // 7-segment displays number 1 if we type "1" in serial monitor.
      one();
    }
    else if(option == '2'){  // 7-segment displays number 2 if we type "2" in serial monitor.
      two();
    }
    else if(option == '3'){  // 7-segment displays number 3 if we type "3" in serial monitor.
      three();
    }
    else if(option == '4'){  // 7-segment displays number 4 if we type "4" in serial monitor.
      four();
    }
    else if(option == '5'){  // 7-segment displays number 5 if we type "5" in serial monitor.
      five();
    }
    else if(option == '6'){  // 7-segment displays number 6 if we type "6" in serial monitor.
      six();
    }
    else if(option == '7'){  // 7-segment displays number 7 if we type "7" in serial monitor.
      seven();
    }
    else if(option == '8'){  // 7-segment displays number 8 if we type "8" in serial monitor.
      eight();
    }
    else if(option == '9'){  // 7-segment displays number 9 if we type "9" in serial monitor.
      nine();
    }
  }

}
// Functions for every number:
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