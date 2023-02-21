
class segment{
  private :
  int _pins;

  public:
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
  int Pins[7]={a, b, c, d, e, f, g}; // to set the pins
  int Zero[7]={1, 1, 1, 1, 1, 1, 0}; // To make the number 0.
  int One[7]={0, 1, 1, 0, 0, 0, 0}; // To make the number 1.
  int Two[7]={1, 1, 0, 1, 1, 0, 1}; // To make the number 2.
  int Three[7]={1, 1, 1, 1, 0, 0, 1}; // To make the number 3.
  int Four[7]={0, 1, 1, 0, 0, 1, 1}; // To make the number 4.
  int Five[7]={1, 0, 1, 1, 0, 1, 1}; // To make the number 5.
  int Six[7]={1, 0, 1, 1, 1, 1, 1}; // To make the number 6.
  int Seven[7]={1, 1, 1, 0, 0, 0, 0}; // To make the number 7.
  int Eight[7]={1, 1, 1, 1, 1, 1, 1}; // To make the number 8.
  int Nine[7]={1, 1, 1, 0, 0, 1, 1}; // To make the number 9.
  segment(){};
  segment(int pins){
    this->_pins=pins;
    }
   void Npin(){
    for (int i=_pins; i<9; i++) {
    pinMode(i, OUTPUT);
  } 
   }
  void zero(){
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Zero[x]);
  }
}

void one(){
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], One[x]);
  }
}

void two(){
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Two[x]);
  }
}

void three(){
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Three[x]);
  }
}

void four(){
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Four[x]);
  }
}

void five(){
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Five[x]);
  }
}

void six(){
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Six[x]);
  }
}

void seven(){
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Seven[x]);
  }
}

void eight(){
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Eight[x]);
  }
}

void nine(){
  for (int x=0; x<7; x++) {
  digitalWrite(Pins[x], Nine[x]);
  }
}

};
segment Segment(2);
void setup() {
  // put your setup code here, to run once:
Segment.Npin();
}

void loop() {
  // put your main code here, to run repeatedly:
Segment.zero();
delay(500);
Segment.one();
delay(500);
}
