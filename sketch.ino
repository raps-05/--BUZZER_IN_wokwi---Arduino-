int speaker=10;
int freq=15;
void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  freq+=100;
  if(freq>8000)
  {
    noTone(10);
    freq=50;
  }
  tone(10,freq);
  delay(1000);

}
