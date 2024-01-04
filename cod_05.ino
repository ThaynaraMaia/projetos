#define LED_PIN 3 //atribuindo uma variavel para o LED
#define VENT_PIN 4 //atribuindo uma variavel para o ventilador

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT); //pino do LED (saida)
  pinMode(VENT_PIN, OUTPUT); // pino do ventilador (saida)
}

void loop() {
  if (Serial.available()) { // se houver dados chegando
    String command = Serial.readStringUntil('\n'); // le a string até encontrar o caractere de nova linha

    if (command == "OFF") {
      digitalWrite(LED_PIN, LOW);  // desliga o LED
      Serial.println("LED esta apagado"); //relata a acao para o app do smartphone
    } else if (command == "ON") {
      digitalWrite(LED_PIN, HIGH); // liga o led
      Serial.println("LED esta ligado"); //relata a acao para o app do smartphone
    }
    else if (command == "OFFV") { // desliga o ventilador
      digitalWrite(VENT_PIN, LOW); 
      Serial.println("Ventilador desligado"); //relata a acao para o app do smartphone
    }
    else if (command == "ONV") {
      digitalWrite(VENT_PIN, HIGH); // liga o ventilador
      Serial.println("Ventilador ligado"); //relata a acao para o app do smartphone
    }
  }
}
