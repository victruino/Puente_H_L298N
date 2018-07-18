// Entradas de Motores
int M11 = 6; //IN1
int M12 = 7; //IN2
int M21 = 8; //IN3
int M22 = 9; //IN4

//PWM para variar la velocidad de los motores
int ENA = 3; //ENA
int ENB = 11; //ENB

// Variable de velocidad
int spm;


void setup() {
  // Configuramos los pines
  pinMode(M11,OUTPUT);
  pinMode(M12,OUTPUT);
  pinMode(M21,OUTPUT);
  pinMode(M22,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  
}

void loop() {
  //Variando la velocidad

  digitalWrite(M11,HIGH);
  digitalWrite(M12,LOW);
  digitalWrite(M21,HIGH);
  digitalWrite(M22,LOW);
  delay(500);
  
for(spm=5;spm<255;spm+=10){
  analogWrite(ENA,spm);
  analogWrite(ENB,spm);
  delay(100);}
for(spm=255;spm>5;spm-=10){
  analogWrite(ENA,spm);
  analogWrite(ENB,spm);
  delay(500);}

}
