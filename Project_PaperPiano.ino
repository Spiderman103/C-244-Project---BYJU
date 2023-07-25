#define pushButton 12
#define ledPin 26

int button = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin, OUTPUT);
  pinMode(pushButton, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  button = digitalRead(pushButton);
  if(button == LOW){
    digitalWrite(ledPin, HIGH);
    delay(100);
  }
  else{
    digitalWrite(ledPin, LOW);
  }

}