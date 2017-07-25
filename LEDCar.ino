int led1 = 2;
int led2 = 3;
int led3 = 5;
int button = 6;

void setup() {
  pinMode(button,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
    }

void loop() {
int ButtonStatus = digitalRead(button);
if (ButtonStatus == HIGH)
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
} else {
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}
    }
