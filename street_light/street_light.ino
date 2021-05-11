 int led1 = 11;
 int led2 = 10;
 int led3 = 9;
 int ldr = A5;
 int sensorValue;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(ldr,INPUT);
  Serial.begin(9600);
}
void loop(){
  sensorValue = analogRead(ldr);
  Serial.println(sensorValue);
  if(sensorValue>575){
    
   analogWrite(led1,0);
   analogWrite(led2,0);
   analogWrite(led3,0);
  }
  
  
  if(sensorValue<575 && sensorValue >300){
   analogWrite(led1,255);
   analogWrite(led2,255);
   analogWrite(led3,255);
  }
  
  
  if(sensorValue<300 && sensorValue >0){
  
   analogWrite(led1,255);
   analogWrite(led2,0);
   analogWrite(led3,255);
  
  }
  
}
