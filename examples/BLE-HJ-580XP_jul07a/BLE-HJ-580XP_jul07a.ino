#include <SoftwareSerial.h>

#define CONFIG 7
#define RX 11
#define TX 10

SoftwareSerial ble(TX, RX); 

void setConfigMode(bool mode) {
    digitalWrite(CONFIG, mode ? LOW : HIGH);
    delay(100);
}


void setup() {

  Serial.begin(19200);
  ble   .begin(19200);
  
  while (!Serial);
  while ( !ble ) ;

  pinMode(CONFIG, OUTPUT);
  Serial.println();
  
  setConfigMode(1); // - [AT   Config.]
  SEND_COMMANDS( ); // - [AT Commands.]
  setConfigMode(0); // - [UART Config.]
  
  //ble.setConfigMode(1);
  delay(2000);

}


String tmp;
void loop() {
  manageBLE_SerialData();

  //hmm.. #0
  while (Serial.available() > 0)  {
    tmp += char(Serial.read());
    delay(2);
  }

  if(tmp.length() > 0) {
    Serial.print((String) "SENT: " + tmp + "\n");
    ble.print(tmp);
    tmp = "";
  }
  
}


const String ATcommands[] = {
  "NAMEIG: @giorgos.xou",
  "MNAME","SVER",
  "HVER","AGAP",
  "MINCGAP",
  "CTIMEOUT",
  "STATE",
  "ROLETYPE",
  "RESET"
};

void SEND_COMMANDS(){
  for(int i; i<10; i++){
    ble.print((String)"<" + ATcommands[i] + ">");  
    delay(777);
    manageBLE_SerialData();
  }  
}

void manageBLE_SerialData()
{
  while (ble.available() > 0)  {
    tmp += char(ble.read());
    delay(2);
  }

  if(tmp.length() > 0) {
    Serial.print("RECEIVED: ");
    Serial.println(tmp);
    tmp = "";
  }
}


/* #0
   if (Serial.available()) {
    
    tmp = Serial.readString();
    Serial.print((String) "SENT: " + tmp + "\n");
    ble.print(tmp);
    tmp = "";
  }
 * /
 */
