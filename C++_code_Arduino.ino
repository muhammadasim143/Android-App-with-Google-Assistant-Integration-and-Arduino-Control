char Incoming_value = 0;
#include <Servo.h>
int room1=13;
int room2=12;
int room3=11; 
int room4=10;
int sound=7;
int time=500;
int btime=250;
int i=0;
Servo myservo;                 
void setup() 
{
  Serial.begin(9600);         
  pinMode(room1, OUTPUT);
  pinMode(room2, OUTPUT);
  pinMode(room3, OUTPUT);
  pinMode(sound, OUTPUT);  
  pinMode(room4, OUTPUT);
  myservo.attach(9);      
}

void loop()
{ i=0;
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == '1'){             
      digitalWrite(room1, HIGH);
      digitalWrite(sound, HIGH);
      delay(time);
      digitalWrite(sound, LOW);}  
    else if (Incoming_value == '2') {      
      digitalWrite(room1, LOW);
      digitalWrite(sound, HIGH);
      delay(time);
      digitalWrite(sound, LOW);
      }
      if(Incoming_value == '3'){             
      digitalWrite(room2, HIGH);
      digitalWrite(sound, HIGH);
      delay(time);
      digitalWrite(sound, LOW);}  
    else if (Incoming_value == '4') {      
      digitalWrite(room2, LOW);
      digitalWrite(sound, HIGH);
      delay(time);
      digitalWrite(sound, LOW);
      }
      if(Incoming_value == '5'){             
      digitalWrite(room3, HIGH);
      digitalWrite(sound, HIGH);
      delay(time);
      digitalWrite(sound, LOW);}  
    else if (Incoming_value == '6') {      
      digitalWrite(room3, LOW);
      digitalWrite(sound, HIGH);
      delay(time);
      digitalWrite(sound, LOW);
      }
      if(Incoming_value == '7'){             
      digitalWrite(room4, HIGH);
      digitalWrite(sound, HIGH);
      delay(time);
      digitalWrite(sound, LOW);}  
    else if (Incoming_value == '8') {      
      digitalWrite(room4, LOW);
      digitalWrite(sound, HIGH);
      delay(time);
      digitalWrite(sound, LOW);
      }
      if(Incoming_value == '9'){             
      myservo.write(90);
      digitalWrite(sound, HIGH);
      delay(time);
      digitalWrite(sound, LOW);}  
    else if (Incoming_value == 'A') {      
      myservo.write(0);
      digitalWrite(sound, HIGH);
      delay(time);
      digitalWrite(sound, LOW);
      }
      if(Incoming_value == 'B'){             
      while (i<30) {
          digitalWrite(room1, HIGH);
          delay(btime);
          digitalWrite(room1, LOW);
          digitalWrite(room2, HIGH);
          delay(btime);
          digitalWrite(room2, LOW);
          digitalWrite(room3, HIGH);
          delay(btime);
          digitalWrite(room3, LOW);
          digitalWrite(room4, HIGH);
          delay(btime);
          digitalWrite(room4, LOW);
          i++;}
      }     
  }                            
} 
