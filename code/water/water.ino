const int water=6;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(A1);
  // print out the value you read:
  Serial.print(sensorValue);Serial.print("soil");
  Serial.println();
   if(sensorValue<400)
  {
    Serial.println("motor on");
     digitalWrite(13,LOW);
  }
  else{
    Serial.println("motor off");
     digitalWrite(13,HIGH);
  }
  delay(1000); 
}
