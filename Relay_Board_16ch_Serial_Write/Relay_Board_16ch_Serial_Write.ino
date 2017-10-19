/*
  Physical Pixel

  An example of using the Arduino board to receive data from the computer. In
  this case, the Arduino boards turns on an LED when it receives the character
  'H', and turns off the LED when it receives the character 'L'.

  The data can be sent from the Arduino Serial Monitor, or another program like
  Processing (see code below), Flash (via a serial-net proxy), PD, or Max/MSP.

  The circuit:
  - LED connected from digital pin 13 to ground
*/

const int RelayPin01 = A1; // Relay JD1 "Q"
const int RelayPin02 = A2; // Relay JD2 "W"
const int RelayPin03 = A3; // Relay JD3 "E"
const int RelayPin04 = A4; // Relay JD4 "R"
const int RelayPin05 = A5; // Relay JD5 "T"
const int RelayPin06 = 3; // Relay JD6 "Y"
const int RelayPin07 = 4; // Relay JD7 "U"
const int RelayPin08 = 5; // Relay JD8 "I"
const int RelayPin09 = 6; // Relay JD9 "O"
const int RelayPin10 = 7; // Relay JD10 "P"
const int RelayPin11 = 8; // Relay JD11 "A"
const int RelayPin12 = 9; // Relay JD12 "S"
const int RelayPin13 = 10; // Relay JD13 "D"
const int RelayPin14 = 11; // Relay JD14 "F"
const int RelayPin15 = 12; // Relay JD15 "G"
const int RelayPin16 = 13; // Relay JD16 "H"

int PinState01 = HIGH;
int PinState02 = HIGH;
int PinState03 = HIGH;
int PinState04 = HIGH;
int PinState05 = HIGH;
int PinState06 = HIGH;
int PinState07 = HIGH;
int PinState08 = HIGH;
int PinState09 = HIGH;
int PinState10 = HIGH;
int PinState11 = HIGH;
int PinState12 = HIGH;
int PinState13 = HIGH;
int PinState14 = HIGH;
int PinState15 = HIGH;
int PinState16 = HIGH;

int incomingByte;      // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the Relay pins as an output:
  pinMode(RelayPin01, OUTPUT);
  pinMode(RelayPin02, OUTPUT);
  pinMode(RelayPin03, OUTPUT);
  pinMode(RelayPin04, OUTPUT);
  pinMode(RelayPin05, OUTPUT);
  pinMode(RelayPin06, OUTPUT);
  pinMode(RelayPin07, OUTPUT);
  pinMode(RelayPin08, OUTPUT);
  pinMode(RelayPin09, OUTPUT);
  pinMode(RelayPin10, OUTPUT);
  pinMode(RelayPin11, OUTPUT);
  pinMode(RelayPin12, OUTPUT);
  pinMode(RelayPin13, OUTPUT);
  pinMode(RelayPin14, OUTPUT);
  pinMode(RelayPin15, OUTPUT);
  pinMode(RelayPin16, OUTPUT);
  // Switch all relays off
  digitalWrite(RelayPin01, PinState01);
  digitalWrite(RelayPin02, PinState02);
  digitalWrite(RelayPin03, PinState03);
  digitalWrite(RelayPin04, PinState04);
  digitalWrite(RelayPin05, PinState05);
  digitalWrite(RelayPin06, PinState06);
  digitalWrite(RelayPin07, PinState07);
  digitalWrite(RelayPin08, PinState08);
  digitalWrite(RelayPin09, PinState09);
  digitalWrite(RelayPin10, PinState10);
  digitalWrite(RelayPin11, PinState11);
  digitalWrite(RelayPin12, PinState12);
  digitalWrite(RelayPin13, PinState13);
  digitalWrite(RelayPin14, PinState14);
  digitalWrite(RelayPin15, PinState15);
  digitalWrite(RelayPin16, PinState16);
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) 
  {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    
    // if it's a capital Q (ASCII 72), turn on the LED:
    if (incomingByte == 'Q') 
    {     if (PinState01 == HIGH)
              { digitalWrite(RelayPin01, LOW);
                PinState01 = LOW; }
          else 
              { digitalWrite(RelayPin01, HIGH);
                PinState01 = HIGH;}
    }
    //if it's an W:
    if (incomingByte == 'W') 
    {     if (PinState02 == HIGH)
              { digitalWrite(RelayPin02, LOW);
                PinState01 = LOW; }
          else
              { digitalWrite(RelayPin02, HIGH);
                PinState02 = HIGH;}
    }
    
    // if it's a capital E (ASCII 72), turn on the LED:
    if (incomingByte == 'E') 
    {     if (PinState03 == HIGH)
              { digitalWrite(RelayPin03, LOW);
                PinState03 = LOW; }
          else
              { digitalWrite(RelayPin03, HIGH);
                PinState03 = HIGH;}
    }
    
    // if it's a capital R (ASCII 72), turn on the LED:
    if (incomingByte == 'R') 
    {     if (PinState04 == HIGH)
              { digitalWrite(RelayPin04, LOW);
                PinState04 = LOW; }
          else
              { digitalWrite(RelayPin01, HIGH);
                PinState04 = HIGH;}
    }
    
    // if it's a T
    if (incomingByte == 'T') 
    {     if (PinState05 == HIGH)
              { digitalWrite(RelayPin05, LOW);
                PinState05 = LOW; }
          else
              { digitalWrite(RelayPin05, HIGH);
                PinState05 = HIGH;}
    }
    
    //if it's a Y
    if (incomingByte == 'Y') 
    {     if (PinState06 == HIGH)
              { digitalWrite(RelayPin06, LOW);
                PinState06 = LOW; }
      else
              { digitalWrite(RelayPin06, HIGH);
                PinState06 = HIGH;}
    }
    
    //if it's a U
    if (incomingByte == 'U') 
    {     if (PinState07 == HIGH)
              { digitalWrite(RelayPin07, LOW);
                PinState07 = LOW; }
      else
              { digitalWrite(RelayPin07, HIGH);
                PinState07 = HIGH;}
    }

    //if it's a I
    if (incomingByte == 'I') 
    {     if (PinState06 == HIGH)
              { digitalWrite(RelayPin08, LOW);
                PinState08 = LOW; }
          else
              { digitalWrite(RelayPin08, HIGH);
                PinState08 = HIGH;}
    }

    //if it's a O
    if (incomingByte == 'O') 
    {     if (PinState09 == HIGH)
              { digitalWrite(RelayPin09, LOW);
                PinState09 = LOW; }
          else
              { digitalWrite(RelayPin09, HIGH);
                PinState09 = HIGH;}
    }
    
    //if it's a P
    if (incomingByte == 'P') 
    {     if (PinState10 == HIGH)
              { digitalWrite(RelayPin10, LOW);
                PinState10 = LOW;}
          else
              { digitalWrite(RelayPin10, HIGH);
                PinState10 = HIGH;}
    }
  
    //if it's a A
    if (incomingByte == 'A') 
    {     if (PinState11 == HIGH)
              { digitalWrite(RelayPin11, LOW);
                PinState11 = LOW;}
          else
              { digitalWrite(RelayPin11, HIGH);
                PinState11 = HIGH;}
    }
    
    //if it's a S
    if (incomingByte == 'S') 
    {     if (PinState12 == HIGH)
              { digitalWrite(RelayPin12, LOW);
                PinState12 = LOW;}
          else
              { digitalWrite(RelayPin12, HIGH);
                PinState12 = HIGH;}
    }
    
    //if it's a D
    if (incomingByte == 'D') 
    {     if (PinState13 == HIGH)
              { digitalWrite(RelayPin13, LOW);
                PinState13 = LOW;}
          else
              { digitalWrite(RelayPin13, HIGH);
                PinState13 = HIGH;}
    }
    
    //if it's a F
    if (incomingByte == 'F') 
    {     if (PinState14 == HIGH)
              { digitalWrite(RelayPin14, LOW);
                PinState14 = LOW;}
          else
              { digitalWrite(RelayPin14, HIGH);
                PinState14 = HIGH;}
    }
    
    //if it's a G
    if (incomingByte == 'G') 
    {     if (PinState15 == HIGH)
              { digitalWrite(RelayPin15, LOW);
                PinState15 = LOW;}
          else
              { digitalWrite(RelayPin15, HIGH);
                PinState15 = HIGH;}
    }
    
    //if it's a H
    if (incomingByte == 'H') 
    {     if (PinState16 == HIGH)
              { digitalWrite(RelayPin16, LOW);
                PinState16 = LOW;}
          else
              { digitalWrite(RelayPin16, HIGH);
                PinState16 = HIGH;}
    }
    
    //if it's a 0
    if (incomingByte == '0') 
    { PinState01 = HIGH;
      PinState02 = HIGH;
      PinState03 = HIGH;
      PinState04 = HIGH;
      PinState05 = HIGH;
      PinState06 = HIGH;
      PinState07 = HIGH;
      PinState08 = HIGH;
      PinState09 = HIGH;
      PinState10 = HIGH;
      PinState11 = HIGH;
      PinState12 = HIGH;
      PinState13 = HIGH;
      PinState14 = HIGH;
      PinState15 = HIGH;
      PinState16 = HIGH;
    
      digitalWrite(RelayPin01, PinState01);
      digitalWrite(RelayPin02, PinState02);
      digitalWrite(RelayPin03, PinState03);
      digitalWrite(RelayPin04, PinState04);
      digitalWrite(RelayPin05, PinState05);
      digitalWrite(RelayPin06, PinState06);
      digitalWrite(RelayPin07, PinState07);
      digitalWrite(RelayPin08, PinState08);
      digitalWrite(RelayPin09, PinState09);
      digitalWrite(RelayPin10, PinState10);
      digitalWrite(RelayPin11, PinState11);
      digitalWrite(RelayPin12, PinState12);
      digitalWrite(RelayPin13, PinState13);
      digitalWrite(RelayPin14, PinState14);
      digitalWrite(RelayPin15, PinState15);
      digitalWrite(RelayPin16, PinState16);
    }
  }
 } 