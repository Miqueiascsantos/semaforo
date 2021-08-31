void setup() 
{
  
  pinMode(10,OUTPUT); //vermelho
  pinMode(11,OUTPUT); //verde
  pinMode(12,OUTPUT); //amarelo
  Serial.begin(9600);

}

void loop() 
{

  char v = Serial.read();

  switch(v)
  {
    case 'a': 
    digitalWrite(10, HIGH);
    delay(2000);
    digitalWrite(10, LOW);

    case 's':
    digitalWrite(11, HIGH);
    delay(3000);
    digitalWrite(11, LOW);

    case 'd':
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);
  }
  
}
