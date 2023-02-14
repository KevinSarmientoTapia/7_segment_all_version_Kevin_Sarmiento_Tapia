int clearPin = 5; //Arduino pin 5 connected to Pin 10, SRCLR(Clear/Reset) of 74HC595
int serialData = 6;  //Arduino pin 6 connected to Pin 14, SER(serial input) of 74HC595
int shiftClock = 7;  //Arduino pin 7 connected to Pin 11, SRCLK(shift clock) of 74HC595
int latchClock = 8;  //Arduino pin 8 connected to Pin 12, RCLK(storage/latch clock) of 74HC595 ]
int D1=13; //Digit 1 to pin 13
int D2=12; //Digit 2 to pin 12
int D3=11; //Digit 3 to pin 11
int D4=10; //Digit 4 to pin 10

int zero=63;
int one=6;
int two=91;
int three=79;
int four=102;
int five=109;
int six=125;
int seven=7;
int eight=127;
int nine=111;

int zerodp=63+128;
int onedp=6+128;
int twodp=91+128;
int threedp=79+128;
int fourdp=102+128;
int fivedp=109+128;
int sixdp=125+128;
int sevendp=7+128;
int eightdp=127+128;
int ninedp=111+128;

int none=0;

void setup() {   //runs once at startup
   //set pins to output so you can control the shift register
  pinMode(clearPin, OUTPUT);
  pinMode(shiftClock, OUTPUT);
  pinMode(latchClock, OUTPUT);
  pinMode(serialData, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);

  digitalWrite(clearPin, LOW); //Pin is active-low, this clears the shift register
  digitalWrite(clearPin, HIGH); //Clear pin is inactive
}

void loop() {    //runs and loops continuously
  
  Number_to_display(nine, two, three, four);

}
void Number_to_display(int c, int b, int d, int a) {
 First_digit(c);
 delay(5);
 Second_digit(b);
 delay(5);
 Third_digit(d);
 delay(5);
 Fourth_digit(a);
 delay(5);
}
void First_digit(int x) {
  digitalWrite(latchClock, LOW);    
     digitalWrite(D1, 0); 
     digitalWrite(D2, 1); 
     digitalWrite(D3, 1); 
     digitalWrite(D4, 1); 
          // take the latchClock low so 
          // the LEDs don't change while you're sending in bits:
   shiftOut(serialData, shiftClock, MSBFIRST, x);      // shift out the bits
   digitalWrite(latchClock, HIGH); 
}
void Second_digit(int x) {
  digitalWrite(latchClock, LOW);    
     digitalWrite(D1, 1); 
     digitalWrite(D2, 0); 
     digitalWrite(D3, 1); 
     digitalWrite(D4, 1); 
          // take the latchClock low so 
          // the LEDs don't change while you're sending in bits:
   shiftOut(serialData, shiftClock, MSBFIRST, x);      // shift out the bits
   digitalWrite(latchClock, HIGH);    
}
void Third_digit(int x) {
  digitalWrite(latchClock, LOW);    
     digitalWrite(D1, 1); 
     digitalWrite(D2, 1); 
     digitalWrite(D3, 0); 
     digitalWrite(D4, 1); 
          // take the latchClock low so 
          // the LEDs don't change while you're sending in bits:
   shiftOut(serialData, shiftClock, MSBFIRST, x);      // shift out the bits
   digitalWrite(latchClock, HIGH); 
}
void Fourth_digit(int x) {
  digitalWrite(latchClock, LOW);    
     digitalWrite(D1, 1); 
     digitalWrite(D2, 1); 
     digitalWrite(D3, 1); 
     digitalWrite(D4, 0); 
          // take the latchClock low so 
          // the LEDs don't change while you're sending in bits:
   shiftOut(serialData, shiftClock, MSBFIRST, x);      // shift out the bits
   digitalWrite(latchClock, HIGH);    
}
