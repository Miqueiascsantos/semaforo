void setup() {

  pinMode(10,OUTPUT); //vermelho
  pinMode(11,OUTPUT); //verde
  pinMode(12,OUTPUT); //amarelo
  Serial.begin(9600);
}

 
void loop() 
{
  char v = Serial.read();
  
  if (v == 'a')
  {
    digitalWrite(10, HIGH);
    delay(2000);
    digitalWrite(10, LOW);
  }
  
  
  else if (v == 's')
  {
    digitalWrite(11, HIGH);
    delay(3000);
    digitalWrite(11, LOW);
  }

  
  else if (v == 'd')
  {
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);
  }
   
}

