#define trigPin 9
#define echoPin 12
#define led 11
#define vibra 10

void setup()

{ Serial.begin (9600);

pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led, OUTPUT);
pinMode(vibra, OUTPUT);

}

void loop()

{ long duration, distance;
  bool exibir;

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;

if (distance < 80 && distance > 10)

{digitalWrite(led,HIGH);
digitalWrite(vibra,HIGH);
delay(distance*4);
digitalWrite(led,LOW);
digitalWrite(vibra,LOW);
delay(distance*6) ; 
exibir = true;
}

if(distance >= 80) {

digitalWrite(led,LOW);
digitalWrite(vibra,LOW);
exibir = false;


}
if(distance <= 10){
digitalWrite(led,HIGH);
digitalWrite(vibra,HIGH);
exibir = true;
}
if(exibir == true){
  Serial.print(distance);
  Serial.println(" cm");
}

}
