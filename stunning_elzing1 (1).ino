#define pir 2

void setup()
{
  pinMode(pir, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(pir, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pir, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}