#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2,3);

void setup() {
 Serial.begin(9600);
 BTSerial.begin(9600);

 pinMode(13,OUTPUT);
 digitalWrite(13,LOW);
 }

void loop() {
  if(BTSerial.available()){//블루투스를 이용하여 램프 on, off
    char bread = BTSerial.read();
    if (bread =='0')  digitalWrite(13, LOW);
      else if(bread=='1') digitalWrite(13, HIGH);
    }
}
