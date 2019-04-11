//   https://github.com/v12345vtm
// https://www.youtube.com/user/v12345vtm 


#include<SoftwareSerial.h>
#define DirectionControl 3
#define Pin13LED 13
int RX;

SoftwareSerial RS485(8, 9);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("configuring serial:\n");
  RS485.begin(115200);
  Serial.println("configuring RS485 reciever com5" );
  Serial.println("while loop set up done!!");
  
 Serial.println("SCHEMATIC RS485 RECIEVER");
  Serial.println("use arduino nano");
  Serial.println("and rs485 arduino module");
  Serial.println(" ");
  Serial.println("connect arduino:D3 to rs485-module:RE and DE ");
  Serial.println("connect arduino:D8 to rs485-module:RO");
  Serial.println("connect arduino:D9 to rs485-module:RE and DI ");

  Serial.println("connect arduino:+5Volt to rs485-module:VCC");
  Serial.println("connect arduino:GND to rs485-module:GND");

  Serial.println(" rs485-module:A to the rs485-device:A");
  Serial.println(" rs485-module:B to the rs485-device:B");



Serial.println("if rs485-data is recieved on Pin A and B then");
Serial.println("the data is printed is the serial port");
Serial.println("de data is shown in HEX values , separated by a dot .");
Serial.println("e.g. :  35.35.32.37.30.D.A");


  Serial.println("while loop set up done!!");



  pinMode(Pin13LED, OUTPUT);
  pinMode(DirectionControl, OUTPUT);

  digitalWrite(DirectionControl, LOW); //preparing for receiption
}

void loop() { //ontv com5

  digitalWrite(DirectionControl, LOW); //preparing for receiption

  // if there's any serial available, read it:
  while (RS485.available() > 0) {
    RX = RS485.read();   // Read the byte  http://www.asciitable.com/  D=Carage return A=Linefeed
    Serial.print(RX, HEX);// http://www.asciitable.com/  D=Carage return A=Linefeed
    Serial.print(".");
    // look for the newline. That's the end of your sentence:
    if (RX == '\n') {
      Serial.println("");
    }
  }











}
