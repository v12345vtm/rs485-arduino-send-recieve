//   https://github.com/v12345vtm
// https://www.youtube.com/user/v12345vtm 

//#include<SoftwareSerial.h>
#define DirectionControl 3
#define Pin13LED 13
int RX;

//SoftwareSerial RS485(8,9);

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(115200);
  //Serial.println("configuring hardware    //Serial:\n");
  Serial.begin(115200 , SERIAL_8N2);
  //Serial.println("configuring RS485 sender com8" );
  //Serial.println("set up done!!");


  //Serial.println("SCHEMATIC RS485 SENDER ");
  //Serial.println("use arduino nano");
  //Serial.println("and rs485 arduino module");
  //Serial.println(" ");
  //Serial.println("connect arduino:D3 to rs485-module:RE and DE ");
  //Serial.println("connect arduino:RX to rs485-module:RO");
  //Serial.println("connect arduino:TX to rs485-module: DI ");

  //Serial.println("connect arduino:+5Volt to rs485-module:VCC");
  //Serial.println("connect arduino:GND to rs485-module:GND");

  //Serial.println(" rs485-module:A to the rs485-device:A");
  //Serial.println(" rs485-module:B to the rs485-device:B");

  pinMode(Pin13LED, OUTPUT);   
  pinMode(DirectionControl, OUTPUT); 
 
  digitalWrite(DirectionControl, LOW); //preparing for receiption
}

void loop() { //com8
  digitalWrite(DirectionControl, HIGH); //preparing for send
  Serial.println(millis());
  //Serial.println(millis());
  delay(1000);

  digitalWrite(DirectionControl, LOW); //preparing for receiption
}
