// Entradas de Motores
int M11 = 6; //IN1
int M12 = 7; //IN2
int M21 = 8; //IN3
int M22 = 9; //IN4


void setup() {
  // Configuramos los pines
  pinMode(M11,OUTPUT);
  pinMode(M12,OUTPUT);
  pinMode(M21,OUTPUT);
  pinMode(M22,OUTPUT);

  
}

void loop() {
  
  //motores giran en un sentido,
  for(int i=0;i<3;i++){
  digitalWrite(M11,HIGH);
  digitalWrite(M12,LOW);
  digitalWrite(M21,HIGH);
  digitalWrite(M22,LOW);
  delay(1000);}

//motores giran al otro sentido
    for(int j=0;j<3;j++){
  digitalWrite(M11,LOW);
  digitalWrite(M12,HIGH);
  digitalWrite(M21,LOW);
  digitalWrite(M22,HIGH);
  delay(1000);}

}
