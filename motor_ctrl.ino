/*
#define IN1 4
#define IN2 5
#define IN3 7
#define IN4 8
#define ENA 6
#define ENB 9
#define MTR_L 0
#define MTR_R 1
*/
// motor one
int enA = 6;
int in1 = 4;
int in2 = 5;
// motor two
int enB = 9;
int in3 = 7;
int in4 = 8;

void setup()
{
  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}
void move_motor(boolean motor, int motor_speed, int motor_direction) 
{
 
}

void init_white_line_snsr(boolean motor, int motor_speed, int motor_direction) 
{
  // comment of white line sensor code
}


void demoOne()
{
  // this function will run the motors in both directions at a fixed speed
  // turn on motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 200);
  // turn on motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enB, 200);
  delay(2000);
  // now change motor directions
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 
  delay(2000);
  // now turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  demoOne();
  delay(1000);
}
