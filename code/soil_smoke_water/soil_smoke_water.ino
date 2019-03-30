const int soil=A1;
const int smoke=A5;
const int water=6;
const int alert=13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(soil,INPUT);
pinMode(smoke,INPUT);
pinMode(water,OUTPUT);
pinMode(alert,OUTPUT);
digitalWrite(alert,LOW);
digitalWrite(water,LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
  int soil_value=analogRead(soil);
  int smoke_value=analogRead(smoke);
  Serial.print(soil_value);Serial.print("soil");
  Serial.println();
  Serial.print(smoke_value);Serial.print("smoke");
  Serial.println();
  int choice;
  if(soil_value > 400){
   digitalWrite(water,HIGH);
  }
  else
  {
     digitalWrite(water,HIGH);
  }
    
  if(soil_value > 400 && smoke_value > 565)
  {
    choice=1;
  }
  else if(soil_value > 650 && smoke_value < 400 )
  {
    choice=2;
  }
  else if(soil_value < 600 && smoke_value > 600)
  {
    choice=3;
  }
  else{ 
    choice=0;
  }
  switch(choice)
  {
    case 1:
      digitalWrite(alert,HIGH);
      digitalWrite(water,HIGH);
    break;
    case 2:
      digitalWrite(alert,LOW);
      digitalWrite(water,HIGH);
    break;
    case 3:
      digitalWrite(alert,HIGH);
      digitalWrite(water,LOW);
    break;
    case 0:
     digitalWrite(alert,LOW);
      digitalWrite(water,LOW);
    break;
  }
  delay(1000);
}
