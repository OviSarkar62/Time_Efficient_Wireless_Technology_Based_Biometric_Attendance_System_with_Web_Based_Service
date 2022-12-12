#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

#include <Adafruit_Fingerprint.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3);

Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);
int fingerprintID = 0;
String IDname;
#include <SoftwareSerial.h>
SoftwareSerial BTserial(10,11); // RX | TX
// Connect the HC-05 TX to Arduino pin 10 RX. 
// Connect the HC-05 RX to Arduino pin 11 TX through a voltage divider.
// MASTER
 
int c ;



void setup() {

  Serial.begin(56000);
  Serial.println("CLEARDATA");
  Serial.println("F ID:");
  Serial.println("LABEL,Time,Started Time,Register value");
  Serial.println("RESETTIMER");
 //  Serial.begin(57600);
  
    
    Serial.println("Arduino is ready");
    Serial.println("Remember to select Both NL & CR in the serial monitor");
 
    // HC-05 default serial speed for AT mode is 38400
    BTserial.begin(57600);  


    
 // Serial.begin(9600);
  // set the data rate for the sensor serial port
  finger.begin(56000);
  
  if (finger.verifyPassword()) {
    Serial.println("Found fingerprint sensor!");
  } 
  else {
    Serial.println("Did not find fingerprint sensor :(");
    while (1) { delay(1); }
  }
  

  //OLED display setup
  Wire.begin();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  //displays main screen
  displayMainScreen();
  
}


void loop() {
   displayMainScreen();
  fingerprintID = getFingerprintIDez();
  delay(50);
  if(fingerprintID == 3 ){
    IDname = "Sara";
    displayUserGreeting(IDname);             
  }
     if( fingerprintID == 2 ){
    IDname = "Ali";
    displayUserGreeting1(IDname);
     }  
  else if(fingerprintID == 4){
    IDname = "Khan";  
    displayUserGreeting2(IDname); 
              
  }
}


// returns -1 if failed, otherwise returns ID #
int getFingerprintIDez() {
  uint8_t p = finger.getImage();
  if (p != FINGERPRINT_OK)  return -1;

  p = finger.image2Tz();
  if (p != FINGERPRINT_OK)  return -1;

  p = finger.fingerFastSearch();
  if (p != FINGERPRINT_OK)  return -1;
  
  // found a match!
  Serial.print("Found ID #"); 
  Serial.print(finger.fingerID); 
  Serial.print(" with confidence of "); 
  Serial.println(finger.confidence);
  return finger.fingerID; 
}
void displayMainScreen(){
  
  delay(2000);
     
}

void displayUserGreeting(String Name){
 delay(1000);
  fingerprintID = 0;
  int sensorValue=finger.fingerID;

  if (Serial.available())
    {
        sensorValue =  Serial.read();
        BTserial.write(sensorValue);  
    }

    
   Serial.print("DATA,TIME,TIMER,");
  Serial.print("F ID:");
  Serial.println(sensorValue );
  
   
   
 
}
//////////////////////////////
void displayUserGreeting1(String Name){
  
  delay(1000);
  fingerprintID = 0; 
  int sensorValue=finger.fingerID;

   if (Serial.available())
    {
        sensorValue =  Serial.read();
        BTserial.write(sensorValue);  
    }

    
   Serial.print("DATA,TIME,TIMER,");
  Serial.print("F ID:");
  Serial.println(sensorValue );

 
}
void displayUserGreeting2(String Name){
  
  delay(1000);
  fingerprintID = 0;
  int sensorValue=finger.fingerID;

  if (Serial.available())
    {
        sensorValue =  Serial.read();
        BTserial.write(sensorValue);
        Serial.print("DATA,TIME,TIMER,");
  Serial.print("F ID:");
  Serial.println(sensorValue );  
    }

    
   
}
