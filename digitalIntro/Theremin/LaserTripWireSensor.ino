void setup() {
 Serial.begin(9600);
}

void loop() {
  int sensorReading = analogRead(A0);
  int midPoint = 250;
  if (sensorReading > 250)
  { 
   Serial.println("Everything's chill; Party on!");
   }
  else
  {
  Serial.println("Alert -- release the drones! Alert -- release the drones! This is a code red emergency level 10.");
  
  }
  
  Serial.println(sensorReading);
  delay(1);        
}
