int Sinput = A1;    // criando ou atribuindo uma variavel do tipo int para o sinal de entrada do sensor
int Buz=3;            // criando ou atribuindo uma variavel do tipo int para buzz 


void setup()      
{
pinMode(Sinput, INPUT);  // aqui e o pino do sensor (entrada)
pinMode(Buz, OUTPUT); // aqui e o pino usado pelo transistor para controla-lo (saida)
}
void loop()
{

if(digitalRead(Sinput)==LOW)
{
delay (2000);    //aguardando dois segundos apos o pulso de entrada do sensor. se o pulso durar mais de 2 segundos, a campainha sera acionada

digitalWrite(Buz, HIGH);
}
else
{

if(digitalRead(Sinput)== HIGH)
{

digitalWrite(Buz, LOW);
}

}
}
