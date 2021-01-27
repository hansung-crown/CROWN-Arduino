#include <SoftwareSerial.h>
 
#define BT_RXD 3
#define BT_TXD 2
#define DR_OPEN 9
#define DR_CLOSE 10
SoftwareSerial bluetooth(BT_RXD, BT_TXD);
 
void setup(){
  bluetooth.begin(9600);
  pinMode(DR_OPEN, OUTPUT);
  pinMode(DR_CLOSE, OUTPUT);
}
 
void loop(){
  char val = bluetooth.read();

  if (val == '0') {  // close
    digitalWrite(DR_CLOSE, HIGH);
    delay(1000);
    digitalWrite(DR_CLOSE, LOW);
  }

  if (val == '1') {  // open
    digitalWrite(DR_OPEN, HIGH);
    delay(1000);
    digitalWrite(DR_OPEN, LOW);
  }
}
