int buzzer = D2;
int smokemq2 = A0;
int thres = 600;

void setup() {
 pinMode(buzzer, OUTPUT);
 pinMode(smokemq2, INPUT);
 Serial.begin(9600);
}

void loop() {
 int sensorData = analogRead(smokemq2);

 Serial.print("Pin A0: ");
 Serial.println(sensorData);
 
 delay(100);
}
