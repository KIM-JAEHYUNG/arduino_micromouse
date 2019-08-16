#define sensorL 11
#define sensorM 12
#define sensorR 13
#define motordirL 8
#define motordirR 9
#define motorspdL 5
#define motorspdR 6

void setup()
{
  Serial.begin(9600); 
  pinMode(sensorL,INPUT_PULLUP);
  pinMode(sensorM,INPUT_PULLUP);
  pinMode(sensorR,INPUT_PULLUP);
  pinMode(motordirL,OUTPUT);
  pinMode(motordirR,OUTPUT);
  pinMode(motorspdL,OUTPUT);
  pinMode(motorspdR,OUTPUT);
}

void loop()
{
  if((digitalRead(sensorL) == LOW)&& (digitalRead(sensorR) == LOW))
  {
    if(digitalRead(sensorM) == LOW)
    {
    digitalWrite(motordirL,LOW);
    analogWrite(motorspdL,0);
    digitalWrite(motordirR,LOW);
    analogWrite(motorspdR,0);
    }
    else
    {
    digitalWrite(motordirL,LOW);
    analogWrite(motorspdL,40);
    digitalWrite(motordirR,LOW);
    analogWrite(motorspdR,40);
    }
  }

  else if(digitalRead(sensorL) == LOW)
  {
    if(digitalRead(sensorM) == LOW)
    {
    digitalWrite(motordirL,LOW);
    analogWrite(motorspdL,150);
    digitalWrite(motordirR,HIGH);
    analogWrite(motorspdR,150);
    }
    else
    {
    digitalWrite(motordirL,LOW);
    analogWrite(motorspdL,60);
    digitalWrite(motordirR,LOW);
    analogWrite(motorspdR,40);
    }
  }

  else if(digitalRead(sensorR) == LOW)
  {
    if(digitalRead(sensorM) == LOW)
    {
    digitalWrite(motordirL,HIGH);
    analogWrite(motorspdL,150);
    digitalWrite(motordirR,LOW);
    analogWrite(motorspdR,150);
    }
    else
    {
    digitalWrite(motordirL,LOW);
    analogWrite(motorspdL,40);
    digitalWrite(motordirR,LOW);
    analogWrite(motorspdR,60);
    }
  }
  
  else
  {
    digitalWrite(motordirL,LOW);
    analogWrite(motorspdL,40);
    digitalWrite(motordirR,LOW);
    analogWrite(motorspdR,40);
  }
}
