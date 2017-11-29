void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    int incoming = Serial.read();
    
    if ((char)incoming == '1')
    {
      digitalWrite(13, HIGH);
      Serial.println("Led blanco encendido");
    }
    else if ((char)incoming == '2')
    {
      digitalWrite(13, LOW);
      Serial.println("Led blando apagado");
    }
    if ((char)incoming == '3')
    {
      digitalWrite(12, HIGH);
      Serial.println("Led rojo encendido");
    }
    else if ((char)incoming == '4')
    {
      digitalWrite(12, LOW);
      Serial.println("Led rojo apagado");
    }
    if ((char)incoming == '5')
    {
      digitalWrite(11, HIGH);
      Serial.println("Led verde encendido");
    }
    else if ((char)incoming == '6')
    {
      digitalWrite(11, LOW);
      Serial.println("Led verde apagado");
    }
  }
}
