  int led = 13;
  float sensor = A0;
  
 void setup() {
  // put your setup code here, to run once:
  
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int value;
  value = analogRead(sensor);
  Serial.println(value);
  int setpoint = 100;

  if (value < setpoint){
    digitalWrite(led, 0);
  }else{
    digitalWrite(led,1);
  }
}
