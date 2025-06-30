//This script was written by Zayne Anashe Matanhire on 4 June 2025 at 20:32

#include <Servo.h>
bool isEnabled = false;//enbled state
Servo thumb;//finger servo instance
Servo index; //finger servo instance
Servo middle; //finger servo instance
Servo ring; //finger servo instance
Servo little;//finger servo instance 
int full = 179;
String Commands[15] = {"grip","fist","hold","thumbs up","peace","pinch","empty control","one","two","three","four","five","release","enable","disable"};//command list
void setup() {
  Serial.begin(9600); //starting serial communication
  Serial.println("The hand is connected");//debugging
  thumb.attach(9);
  index.attach(8);
  middle.attach(7);
  ring.attach(6);
  little.attach(5);
  Release();
}

void loop() {
  if(Serial.available()){
    String Voice = Serial.readString();
    Recognise(Voice);// voice recognition function
     Serial.println(Voice);//for debugging
    }
    
}
void Recognise(String voice){
  if(voice.indexOf(Commands[13]) > -1){
          isEnabled = true;//enable arm movement
          Grip();
          delay(2000);
          Release();
          Serial.println("Enabled");//for debugging
        }
        else if(voice.indexOf(Commands[14]) > -1){
          isEnabled = false;//falsify enabled state to stop random movement
          Serial.println("Disabled ");//for debugging
          Release();
        }
 if(isEnabled){
  if(voice.indexOf(Commands[0]) > -1 || voice.indexOf(Commands[1]) > -1 || voice.indexOf(Commands[2]) > -1 && voice.indexOf(Commands[12]) < 0 ){
        Grip();// calling grip function
      }
      else if(voice.indexOf(Commands[12]) > -1){
          Release();//calling release function
        }
        else if(voice.indexOf(Commands[3]) > -1){
          Thumb();//calling thumbs up function
        }
        else if(voice.indexOf(Commands[4]) > -1){
          Two();//calling Peace sign function
        }
        else if(voice.indexOf(Commands[5]) > -1){
          Rock();//calling rock sign function
        }
        else if(voice.indexOf(Commands[6]) > -1){
          Shaka();//calling shaka function
        }
        else if(voice.indexOf(Commands[7]) > -1){
          One();//calling 1 function
        }
        else if(voice.indexOf(Commands[8]) > -1){
          Two();//calling 2 function
        }
        else if(voice.indexOf(Commands[9]) > -1){
          Three();//calling 3 function
        }
        else if(voice.indexOf(Commands[10]) > -1){
          Four();//calling 4 function
        }
        else if(voice.indexOf(Commands[11]) > -1){
          Release();//calling 5 function
        }
 }
      
  }
void Thumb(){
  Fingers(0,full,full,full,full);
  }
  
void Rock(){
  Fingers(full,full,0,0,0);
  }
  
void Shaka(){
  Fingers(0,full,full,full,0);
  }
  
void One(){
  Fingers(full,0,full,full,full);
  }
  
void Two(){
  Fingers(full,0,0,full,full);
  }
  
void Three(){
  Fingers(0,0,0,full,full);
  }
  
void Four(){
  Fingers(full,0,0,0,0);
  }
  
  
void Grip(){
  Fingers(full,full,full,full,full);
  Serial.println("Gripping");//for debugging
  }
  
void Release(){
  Fingers(0,0,0,0,0);
  Serial.println("Releasing");//for debugging
  }
  
void Fingers(int pos,int pos1,int pos2,int pos3,int pos4){
  middle.write(pos2); 
  delay(15);
  thumb.write(pos);
  delay(15);
  ring.write(pos3);
  delay(15);  
  little.write(pos4);
  delay(20);
  
  index.write(pos1);
  delay(15);     
  }
