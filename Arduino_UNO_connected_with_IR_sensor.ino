const int ir = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ir, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sig = digitalRead(ir);
  Serial.println(sig);
}
