
void setup()
{
  Serial.begin(9600);
  while(!Serial);
  delay(500);
  Serial.println("Starting...");
}

void loop()
{
  Serial.println("am alive");
  delay(10);
}