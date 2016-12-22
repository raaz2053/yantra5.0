
//
#define motor1ENA 3 //PWM
#define motor1ENB 4
#define motor2ENA 5
#define motor2ENB 6
#define motor3ENA 7
#define motor3ENB 8

#define motor1IN1 24
#define motor1IN2 22
#define motor1IN3 28
#define motor1IN4 26

#define motor2IN1 30
#define motor2IN2 32
#define motor2IN3 36 
#define motor2IN4 34

#define motor3IN1 40
#define motor3IN2 38
#define motor3IN3 44
#define motor3IN4 42

#include<SoftwareSerial.h>
SoftwareSerial BT(11,10); // 10 rx and 11 tx
char c;
int sspeed;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
BT.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(BT.available())
{
  delay(10);
  c=BT.read();
  
  Serial.println(c);
  speedcontrol();
  switch(c)
  {
    case 'F':
      forward();
      break;
    case 'B':
      backward();
      break;
    case 'R':
     right();
     break;
    case 'L':
     left();
      break;

  case 'G':
      hardleft();
      break;
    case 'I':
      hardright();
      break;
    case 'J':
      backright();
      break;
   case 'H':
      backleft();
      break;
    case 'S':
      brake();
      break;
  }
}
}
void brake()
{
     analogWrite(motor1ENA,sspeed);
      analogWrite(motor1ENB,sspeed);
      analogWrite(motor2ENA,sspeed);
      analogWrite(motor2ENB,sspeed);
      analogWrite(motor3ENA,sspeed);
      analogWrite(motor3ENB,sspeed);
      digitalWrite(motor1IN1,LOW);
      digitalWrite(motor1IN2,LOW);
      digitalWrite(motor1IN3,LOW);
      digitalWrite(motor1IN4,LOW);
      digitalWrite(motor2IN1,LOW);
      digitalWrite(motor2IN2,LOW);
      digitalWrite(motor2IN3,LOW);
      digitalWrite(motor2IN4,LOW);
      digitalWrite(motor3IN1,LOW);
      digitalWrite(motor3IN2,LOW);
      digitalWrite(motor3IN3,LOW);
      digitalWrite(motor3I0N4,LOW);
      BT.println("/n Brake");

}

void backward()
{
   analogWrite(motor1ENA,sspeed);
    analogWrite(motor1ENB,sspeed);
    analogWrite(motor2ENA,sspeed);
    analogWrite(motor2ENB,sspeed);
    analogWrite(motor3ENA,sspeed);
    analogWrite(motor3ENB,sspeed);
    digitalWrite(motor1IN1,LOW);
    digitalWrite(motor1IN2,HIGH);
    digitalWrite(motor1IN3,LOW);
    digitalWrite(motor1IN4,HIGH);
    digitalWrite(motor2IN1,LOW);
    digitalWrite(motor2IN2,HIGH);
    digitalWrite(motor2IN3,LOW);
    digitalWrite(motor2IN4,HIGH);
    digitalWrite(motor3IN1,LOW);
    digitalWrite(motor3IN2,HIGH);
    digitalWrite(motor3IN3,LOW);
    digitalWrite(motor3IN4,HIGH);
    BT.println("/n backward");
}


void forward()
{
    analogWrite(motor1ENA,sspeed);
    analogWrite(motor1ENB,sspeed);
    analogWrite(motor2ENA,sspeed);
    analogWrite(motor2ENB,sspeed);
    analogWrite(motor3ENA,sspeed);
    analogWrite(motor3ENB,sspeed);
    digitalWrite(motor1IN1,HIGH);
    digitalWrite(motor1IN2,LOW);
    digitalWrite(motor1IN3,HIGH);
    digitalWrite(motor1IN4,LOW);
    digitalWrite(motor2IN1,HIGH);
    digitalWrite(motor2IN2,LOW);
    digitalWrite(motor2IN3,HIGH);
    digitalWrite(motor2IN4,LOW);
    digitalWrite(motor3IN1,HIGH);
    digitalWrite(motor3IN2,LOW);
    digitalWrite(motor3IN3,HIGH);
    digitalWrite(motor3IN4,LOW);
    BT.println("/n forward");
}




void right()//forward right
{
    analogWrite(motor1ENA,sspeed);
      analogWrite(motor1ENB,sspeed);
      analogWrite(motor2ENA,sspeed);
      analogWrite(motor2ENB,sspeed);
      analogWrite(motor3ENA,sspeed);
      analogWrite(motor3ENB,sspeed);
    digitalWrite(motor1IN1,HIGH);
    digitalWrite(motor1IN2,LOW);
    digitalWrite(motor1IN3,LOW);
    digitalWrite(motor1IN4,HIGH);
    digitalWrite(motor2IN1,HIGH);
    digitalWrite(motor2IN2,LOW);
    digitalWrite(motor2IN3,LOW);
    digitalWrite(motor2IN4,HIGH);
    digitalWrite(motor3IN1,HIGH);
    digitalWrite(motor3IN2,LOW);
    digitalWrite(motor3IN3,LOW);
    digitalWrite(motor3IN4,HIGH);
    BT.println("/n hardright");
}





void left()//forward left
{analogWrite(motor1ENA,sspeed);
      analogWrite(motor1ENB,sspeed);
      analogWrite(motor2ENA,sspeed);
      analogWrite(motor2ENB,sspeed);
      analogWrite(motor3ENA,sspeed);
      analogWrite(motor3ENB,sspeed);
    digitalWrite(motor1IN1,LOW);
    digitalWrite(motor1IN2,HIGH);
    digitalWrite(motor1IN3,HIGH);
    digitalWrite(motor1IN4,LOW);
    digitalWrite(motor2IN1,LOW);
    digitalWrite(motor2IN2,HIGH);
    digitalWrite(motor2IN3,HIGH);
    digitalWrite(motor2IN4,LOW);
    digitalWrite(motor3IN1,LOW);
    digitalWrite(motor3IN2,HIGH);
    digitalWrite(motor3IN3,HIGH);
    digitalWrite(motor3IN4,LOW);
     BT.println("/n hardleft");
    
}


void hardleft()
{     analogWrite(motor1ENA,sspeed);
      analogWrite(motor1ENB,sspeed);
      analogWrite(motor2ENA,sspeed);
      analogWrite(motor2ENB,sspeed);
      analogWrite(motor3ENA,sspeed);
      analogWrite(motor3ENB,sspeed);
    digitalWrite(motor1IN1,LOW);
    digitalWrite(motor1IN2,LOW);
    digitalWrite(motor1IN3,HIGH);
    digitalWrite(motor1IN4,LOW);
    digitalWrite(motor2IN1,LOW);
    digitalWrite(motor2IN2,LOW);
    digitalWrite(motor2IN3,HIGH);
    digitalWrite(motor2IN4,LOW);
    digitalWrite(motor3IN1,LOW);
    digitalWrite(motor3IN2,LOW);
    digitalWrite(motor3IN3,HIGH);
    digitalWrite(motor3IN4,LOW);
    BT.println("/n left");
    }


void hardright()
{
    analogWrite(motor1ENA,sspeed);
      analogWrite(motor1ENB,sspeed);
      analogWrite(motor2ENA,sspeed);
      analogWrite(motor2ENB,sspeed);
      analogWrite(motor3ENA,sspeed);
      analogWrite(motor3ENB,sspeed);
    digitalWrite(motor1IN1,HIGH);
    digitalWrite(motor1IN2,LOW);
    digitalWrite(motor1IN3,LOW);
    digitalWrite(motor1IN4,LOW);
    digitalWrite(motor2IN1,HIGH);
    digitalWrite(motor2IN2,LOW);
    digitalWrite(motor2IN3,LOW);
    digitalWrite(motor2IN4,LOW);
    digitalWrite(motor3IN1,HIGH);
    digitalWrite(motor3IN2,LOW);
    digitalWrite(motor3IN3,LOW);
    digitalWrite(motor3IN4,LOW);
    }

    
void backright()
{
    analogWrite(motor1ENA,sspeed);
      analogWrite(motor1ENB,sspeed);
      analogWrite(motor2ENA,sspeed);
      analogWrite(motor2ENB,sspeed);
      analogWrite(motor3ENA,sspeed);
      analogWrite(motor3ENB,sspeed);
    digitalWrite(motor1IN1,LOW);
    digitalWrite(motor1IN2,HIGH);
    digitalWrite(motor1IN3,LOW);
    digitalWrite(motor1IN4,LOW);
    digitalWrite(motor2IN1,LOW);
    digitalWrite(motor2IN2,HIGH);
    digitalWrite(motor2IN3,LOW);
    digitalWrite(motor2IN4,LOW);
    digitalWrite(motor3IN1,LOW);
    digitalWrite(motor3IN2,HIGH);
    digitalWrite(motor3IN3,LOW);
    digitalWrite(motor3IN4,LOW);
    }

    
void backleft()
{
    analogWrite(motor1ENA,sspeed);
      analogWrite(motor1ENB,sspeed);
      analogWrite(motor2ENA,sspeed);
      analogWrite(motor2ENB,sspeed);
      analogWrite(motor3ENA,sspeed);
      analogWrite(motor3ENB,sspeed);
    digitalWrite(motor1IN1,LOW);
    digitalWrite(motor1IN2,LOW);
    digitalWrite(motor1IN3,LOW);
    digitalWrite(motor1IN4,HIGH);
    digitalWrite(motor2IN1,LOW);
    digitalWrite(motor2IN2,LOW);
    digitalWrite(motor2IN3,LOW);
    digitalWrite(motor2IN4,HIGH);
    digitalWrite(motor3IN1,LOW);
    digitalWrite(motor3IN2,LOW);
    digitalWrite(motor3IN3,LOW);
    digitalWrite(motor3IN4,HIGH);
    }

void speedcontrol()
{
  while(BT.available())
  {
    delay(10);
    c=BT.read();
    switch(c)
    {
      case '0':
      sspeed=80;
      BT.println("50");
      break;
      
      case '1':
      sspeed=80;
      break;
      
      case '2':
      sspeed=80;
      break;
      
      case '3':
      sspeed=80;
      break;
      
      case '4':
      sspeed=150;
      break;
      case '5':
      sspeed=150;
      break;
      
      case '6':
      sspeed=150;
      break;
      
      case '7':
      sspeed=150;
      break;
      
      case '8':
      sspeed=225;
      break;
      case '9':      
      sspeed=225;
      break;
      
      case 'q':
      sspeed=225;
      BT.println("255");
      break;
      }
  }
}






