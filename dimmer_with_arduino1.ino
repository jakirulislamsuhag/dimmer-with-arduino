int led = 9;
int motor = 6;
int pot_led = A0;
int pot_motor = A1;
int pot_led_value, led_pwm;
int pot_motor_value, motor_pwm;


void setup()
{
  pinMode(led, OUTPUT);
  pinMode(motor, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  
  digitalWrite(led, HIGH);
  digitalWrite(motor, HIGH);
  
  pot_led_value = analogRead(pot_led);
  led_pwm = map(pot_led_value, 0, 1023, 0, 255);
  analogWrite(led, led_pwm);
  
  pot_motor_value = analogRead(pot_motor);
  motor_pwm = map(pot_motor_value, 0, 1023, 0, 255);    
  analogWrite(motor, motor_pwm);
  
  Serial.print("pwm value for led: ");
  Serial.println(led_pwm);
  Serial.println();
  Serial.print("pwm value for motor: ");
  Serial.println(motor_pwm);
  
}