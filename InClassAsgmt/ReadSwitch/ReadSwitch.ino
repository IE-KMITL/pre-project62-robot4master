
int led1 = 2 ; 

int buttonPin = 4;

int buttonState = 0;

void setup() 

{

  pinMode(led1, OUTPUT); 

  pinMode(buttonPin, INPUT);

}

 
void loop() 

{

  buttonState = digitalRead(buttonPin); 

  if (buttonState == HIGH) 

{ 

  digitalWrite(led1, LOW);

}

else 

{ 

digitalWrite(led1, HIGH);

}

}
