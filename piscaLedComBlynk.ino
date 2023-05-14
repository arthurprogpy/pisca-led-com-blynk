
int led = 13; // Numero do pino do LED
// E executado cada vez que o Arduino inicia
void setup() {
// Configura a variável como uma saída
pinMode(led, OUTPUT);
}
// A função loop() continua executando enquanto o Arduino estiver ligado

void loop() {
digitalWrite(led, HIGH); // Acende o LED
delay(1000); // Aguarda um segundo (1s = 1000ms)
digitalWrite(led, LOW); // Apaga o LED
delay(1000); // Aguarda um segundo (1s = 1000ms)
}
