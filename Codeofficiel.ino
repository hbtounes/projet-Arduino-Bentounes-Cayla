//entrées pour le pont-H
int ena = 13;
int in1 = 12;
int in2 =11;

int enb = 8;
int in3 = 9;
int in4 = 10;



//on inclut et définit le bluetooth
#include<SoftwareSerial.h>
SoftwareSerial BT(2,4);
char DATA;

//Pin pour servo guideur
#include <Servo.h>
Servo myservo;
int PWM = 90;
int pos = 90;

//Pin pour pince
Servo pince;
Servo rotation;
int PWM1 = 90;
int PWM2 = 90;
int pos1 = PWM1;
int pos2 = PWM2;




void setup() {
  //PONT-H aka moteur arrière
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);

  //servo moteur aka système de direction
  Serial.begin(9600);
  BT.begin(9600);
  myservo.attach(6);
  myservo.write(90);

  // système de pince
  pince.attach(3);
  pince.write(PWM1);
  rotation.attach(5);
  rotation.write(PWM2);
}

void tourneHoraire(int pos,int droite, int gauche){
  digitalWrite(droite,LOW);
  digitalWrite(gauche, HIGH);
  analogWrite(pos,200);
}
void tourneAntiHoraire(int pos,int droite, int gauche){
  digitalWrite(droite,HIGH);
  digitalWrite(gauche, LOW);
  analogWrite(pos,200);
}
void STOP(int pos,int droite, int gauche){
  digitalWrite(droite,HIGH);
  digitalWrite(gauche, LOW);
  analogWrite(pos,0);
}

void loop() {
  Serial.print("toto&)");
  Serial.println(BT.available());
  if (BT.available()){
    Serial.println("totoÉ");
    DATA = BT.read();
    Serial.println(myservo.read());
    if (DATA=='H'){
      PWM=BT.parseInt();
      myservo.write(110);
      delay(100);
      myservo.write(120);
      delay(30);
    }

    if (DATA=='T'){
      PWM=BT.parseInt();
      myservo.write(80);
      delay(100);
      myservo.write(70);
      delay(30);
    }


    if (DATA=='U'){
      PWM=BT.parseInt();
        myservo.write(100);
        delay(30);
      }

    if (DATA=='D'){
         tourneHoraire(ena,in1,in2);
         tourneHoraire(enb,in3,in4);
        delay(20);
      }
    if (DATA=='R'){
        tourneAntiHoraire(ena,in1,in2);
        tourneAntiHoraire(enb,in3,in4);
        delay(20);
      }
    if (DATA=='S'){
         STOP(ena,in1,in2);
         STOP(enb,in3,in4);
        delay(20);
      }

    if (DATA == 'A'){
        PWM1 =BT.parseInt();
      if((pos1 != PWM1)&&(PWM1 !=0)){
        pince.write(PWM1);
        delay(100);
        pos1 = PWM1;}
      else{
        pince.write(pos1);
      }
    }
    
    if (DATA == 'B'){
        PWM2 =BT.parseInt();
      if((pos2 != PWM2)&&(PWM2 !=0)){
        rotation.write(PWM2);
        delay(100);
        pos2 = PWM2;}
      else{
        rotation.write(pos2);
      }
    }

      
      
      
  } 
  }
  
