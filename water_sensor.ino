int val = 0 ;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int sensorData = analogRead(A0);
  Serial.println(sensorData);
  delay(100);

  if sensorData >= 1000 {
    Serial.println("Tweet");
  }
  else {
    Serial.println("All Okay!");
  }
  
}
