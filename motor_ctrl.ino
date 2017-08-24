// Motor Control using constant PIN NAME
// motor one
#define ENA 6
#define IN1 4
#define IN2 5
// motor two
#define ENB 9
#define IN3 7
#define IN4 8
// motor names
#define MTR_L 0
#define MTR_R 1

void setup()
{
  // set all the motor control pins to outputs
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}
void move_motor(boolean motor, int motor_speed, int motor_direction) 
{
 
}

void demoOne()
{
  // this function will run the motors in both directions at a fixed speed
  // turn on motor A
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(ENA, 200);
  // turn on motor B
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(ENB, 200);
  delay(2000);
  // now change motor directions
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);  
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH); 
  delay(2000);
  // now turn off motors
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);  
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  demoOne();
  delay(1000);
}
