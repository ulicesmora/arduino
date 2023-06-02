//Botónes para el usuario 1
#define btn_linea1 22
#define btn_marca1 23
#define btn_llama1 24
//Botónes para el usuario 2
#define btn_linea2 25
#define btn_marca2 26
#define btn_llama2 27
//Botones para el usuario 3
#define btn_linea3 28
#define btn_marca3 29
#define btn_llama3 30
//Botones para el usuario 4
#define btn_linea4 32
#define btn_marca4 33
#define btn_llama4 34
//Botones para el usuario 5
#define btn_linea5 35
#define btn_marca5 36
#define btn_llama5 37
//Botones para el usuario 6
// #define btn_linea6 38
// #define btn_marca6 39
// #define btn_llama6 40
//LED'S indicadores de cada usuario
const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;
const int LED4 = 10;
const int LED5 = 9;
// const int LED6 = 8;
//Variables para el usuario 1
int contador1 = 0; // contador para el usuario 1
int bandera1 = 0; // nos va a permitir saber si el usuario 1 pide línea
//Variables para el usuario 2
int contador2 = 0; // contador para el usuario 2
int bandera2 = 0; // nos va apermitir saber si el usuario 2 pide línea
//Variables para el usuario 3
int contador3 = 0; // contador para el usuario 3
int bandera3 = 0; // nos va a permitir saber si el usuario 3 pide línea
//Variables para el usuario 4
int contador4 = 0; // contador para el usuario 4
int bandera4 = 0; // nos va a permitir saber si el usuario 4 pide línea
//Variables para el usuario 5
int contador5 = 0; //contador para el usuario 5
int bandera5 = 0; // nos va a permitir saber si el usuario 5 pide línea
//Variables para el usuario 6
// int contador6 = 0; // contador para el usuario 6
// int bandera6 = 0; // nos va a permitir saber si el usuario 6 pide línea
void setup(){
 //Configuracion de los pines de entrada para el usuario 1
 pinMode(btn_linea1, INPUT);
 pinMode(btn_marca1, INPUT);
 pinMode(btn_llama1, INPUT);
 //Configuracion de los pines de entrada para el usuario 2
 pinMode(btn_linea2, INPUT);
 pinMode(btn_marca2, INPUT);
 pinMode(btn_llama2, INPUT);
 //Configuracion de los pines de entrada para el usuario 3
 pinMode(btn_linea3, INPUT);
 pinMode(btn_marca3, INPUT);
 pinMode(btn_llama3, INPUT);
 //Configuracion de los pines de entrada para el usuario 4
pinMode(btn_linea4, INPUT);
pinMode(btn_marca4, INPUT);
 pinMode(btn_llama4, INPUT);
 //Configuracion de los pines de entrada para el usuario 5
 pinMode(btn_linea5, INPUT);
 pinMode(btn_marca5, INPUT);
 pinMode(btn_llama5, INPUT);
//Configuracion de los pines de entrada para el usuario 6
//  pinMode(btn_linea6, INPUT);
//  pinMode(btn_marca6, INPUT);
//  pinMode(btn_llama6, INPUT);
 //Configuracion de los pines de salida
 pinMode(LED1,OUTPUT);
 pinMode(LED2,OUTPUT);
 pinMode(LED3,OUTPUT);
 pinMode(LED4,OUTPUT);
 pinMode(LED5,OUTPUT);
//  pinMode(LED6,OUTPUT);
 //Configuracion del monitor para ver el estado del contador
 Serial.begin(9600);
}
void loop() { 
 //Todas las líneas apagadas 
 digitalWrite(LED1,LOW);
 digitalWrite(LED2,LOW);
 digitalWrite(LED3,LOW);
 digitalWrite(LED4,LOW);
 digitalWrite(LED5,LOW);
//  digitalWrite(LED6,LOW);
 //Verificamos que usuario va a pedir la línea
 int estado_descuelgue1 = digitalRead(btn_linea1);
 int estado_descuelgue2 = digitalRead(btn_linea2);
 int estado_descuelgue3 = digitalRead(btn_linea3);
 int estado_descuelgue4 = digitalRead(btn_linea4);
 int estado_descuelgue5 = digitalRead(btn_linea5);
  // int estado_descuelgue6 = digitalRead(btn_linea6);

if(estado_descuelgue1==LOW){ bandera1 = 1; }

if(estado_descuelgue2==LOW){ bandera2 = 1; }

if(estado_descuelgue3==LOW){ bandera3 = 1; }

if(estado_descuelgue4==LOW){ bandera4 = 1; }

if(estado_descuelgue5==LOW){ bandera5 = 1; }

//if(estado_descuelgue6==LOW){ bandera6 = 1; }
 //PARA DARLE SERVICIO AL USUARIO 1
 while(bandera1 == 1){
digitalWrite(LED1,HIGH);
 int marcacion1 = digitalRead(btn_marca1);
//verificacion del numero a llamar

 if(marcacion1==LOW){
 contador1++;
 Serial.println(contador1);
 delay(300);
 }
 int llamada1 = digitalRead(btn_llama1);
//verificacion del numero
 if(llamada1 == LOW){
 switch(contador1){
 case 1:
 contador1 = -2 ;

digitalWrite(LED1,LOW);
 delay(400);

digitalWrite(LED1,HIGH);
 delay(400);

digitalWrite(LED1,LOW);
 delay(400);

digitalWrite(LED1,HIGH);
 delay(400);

digitalWrite(LED1,LOW);
 delay(400);

digitalWrite(LED1,HIGH);
 delay(400);

digitalWrite(LED1,LOW);
delay(400);

digitalWrite(LED1,HIGH);
 delay(400);

digitalWrite(LED1,LOW);
 delay(400);

digitalWrite(LED1,HIGH);
 bandera1 = 0;
 contador1 = 0;
 break;

 case 2:

digitalWrite(LED2,HIGH);
 contador1 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED2,LOW);
 delay(100);

digitalWrite(LED2,HIGH);
 delay(100);

if(digitalRead(btn_linea2)==LOW){
 contador1 = -2;
 break;
 }else{

digitalWrite(LED2,LOW);

contador1 = 0;
 }
 }
 break;
 case 3:

digitalWrite(LED3,HIGH);
 contador1 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED3,LOW);
 delay(100);

digitalWrite(LED3,HIGH);
 delay(100);

if(digitalRead(btn_linea3)==LOW){
 contador1 = -2;
 break;
 }else{

digitalWrite(LED3,LOW);
 contador1 = 0;
 }
 }
 break;
 case 4:
 digitalWrite(LED4,HIGH);
 contador1 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED4,LOW);
 delay(100);

digitalWrite(LED4,HIGH);
 delay(100);

if(digitalRead(btn_linea4)==LOW){
 contador1 = -2;
 break;
 }else{

digitalWrite(LED4,LOW);
 contador1 = 0;
 }
 }
 break;
 case 5:

digitalWrite(LED5,HIGH);
 contador1 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED5,LOW);
delay(100);

digitalWrite(LED5,HIGH);
 delay(100);

if(digitalRead(btn_linea5)==LOW){
 contador1 = -2;
 break;
 }else{

digitalWrite(LED5,LOW);
 contador1 = 0;
 }
 }
 break;
//  case 6:

// digitalWrite(LED6,HIGH);
//  contador1 = -2 ;
//  for(int i = 1; i <= 40; i++){

// digitalWrite(LED6,LOW);
//  delay(100);

// digitalWrite(LED6,HIGH);
//  delay(100);

// if(digitalRead(btn_linea6)==LOW){
//   contador1 = -2;
//  break;
//  }else{

// digitalWrite(LED6,LOW);
//  contador1 = 0;
//  }
//  }
//  break;
 case -1:
 bandera1 = 0;
 contador1 = 0;
 bandera2 = 0;
 bandera3 = 0;
 bandera4 = 0;
 bandera5 = 0;
 //bandera6 = 0;
 break;
 default:
 if(contador1 != -2){

digitalWrite(LED1,LOW);
 delay(400);

digitalWrite(LED1,HIGH);
 delay(400);

digitalWrite(LED1,LOW);
delay(400);

digitalWrite(LED1,HIGH);
 delay(400);

digitalWrite(LED1,LOW);
 delay(400);

digitalWrite(LED1,HIGH);
 delay(400);

digitalWrite(LED1,LOW);
 delay(400);

digitalWrite(LED1,HIGH);
 delay(400);

digitalWrite(LED1,LOW);
 delay(400);

digitalWrite(LED1,HIGH);
 bandera1 = 0;
 contador1 = 0;
 }
 break;
 }//Swicht
 }//if
 }//while
 //PARA DARLE SERVICIO AL USUARIO 2
 while(bandera2 == 1){
   digitalWrite(LED2,HIGH);
 int marcacion2 = digitalRead(btn_marca2);
//verificacion del numero a llamar

 if(marcacion2==LOW){
 contador2++;

Serial.println(contador2);
 delay(300);
 }
 int llamada2 =digitalRead(btn_llama2);
//verificacion del numero
 if(llamada2 == LOW){
 switch(contador2){
 case 2:
 contador2 = -2 ;

digitalWrite(LED2,LOW);
 delay(400);

digitalWrite(LED2,HIGH);
 delay(400);

digitalWrite(LED2,LOW);
delay(400);

digitalWrite(LED2,HIGH);
 delay(400);

digitalWrite(LED2,LOW);
 delay(400);

digitalWrite(LED2,HIGH);
 delay(400);

digitalWrite(LED2,LOW);
 delay(400);

digitalWrite(LED2,HIGH);
 delay(400);

digitalWrite(LED2,LOW);
 delay(400);

digitalWrite(LED2,HIGH);
 bandera2 = 0;
 contador2 = 0;
 break;

 case 1:

digitalWrite(LED1,HIGH);
 contador2 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED1,LOW);
delay(100);

digitalWrite(LED1,HIGH);
 delay(100);

if(digitalRead(btn_linea1)==LOW){
 contador2 = -2;
 break;
 }else{

digitalWrite(LED1,LOW);
 contador2 = 0;
 }
 }
 break;
 case 3:

digitalWrite(LED3,HIGH);
 contador2 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED3,LOW);
 delay(100);

digitalWrite(LED3,HIGH);
 delay(100);

if(digitalRead(btn_linea3)==LOW){
 contador2 = -2;
 break;
 }else{

digitalWrite(LED3,LOW);
 contador2 = 0;
 }
 }
 break;
 case 4:

digitalWrite(LED4,HIGH);
 contador2 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED4,LOW);
 delay(100);

digitalWrite(LED4,HIGH);
 delay(100);

if(digitalRead(btn_linea4)==LOW){
 contador2 = -2;
 break;
 }else{

digitalWrite(LED4,LOW);
 contador2 = 0;
 }
 }
 break;
 case 5:

digitalWrite(LED5,HIGH);
 contador2 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED5,LOW);
 delay(100);

digitalWrite(LED5,HIGH);
 delay(100);

if(digitalRead(btn_linea5)==LOW){
 contador2 = -2;
 break;
 }else{

digitalWrite(LED5,LOW);
 contador2 = 0;
 }
 }
 break;
//  case 6:

// digitalWrite(LED6,HIGH);
//  contador2 = -2 ;
//  for(int i = 1; i <= 40; i++){
//   digitalWrite(LED6,LOW);
//  delay(100);

// digitalWrite(LED6,HIGH);
//  delay(100);

// if(digitalRead(btn_linea6)==LOW){
//  contador2 = -2;
//  break;
//  }else{

// digitalWrite(LED6,LOW);
//  contador2 = 0;
//  }
//  }
//  break;
 case -1:
 bandera2 = 0;
 contador2 = 0;
 bandera1 = 0;
 bandera3 = 0;
 bandera4 = 0;
 bandera5 = 0;
 //bandera6 = 0;
 break;

 default:
 if(contador2 != -2){ 
   digitalWrite(LED2,LOW);
 delay(400);

digitalWrite(LED2,HIGH);
 delay(400);

digitalWrite(LED2,LOW);
 delay(400);

digitalWrite(LED2,HIGH);
 delay(400);

digitalWrite(LED2,LOW);
 delay(400);

digitalWrite(LED2,HIGH);
 delay(400);

digitalWrite(LED2,LOW);
 delay(400);

digitalWrite(LED2,HIGH);
 delay(400);

digitalWrite(LED2,LOW);
 delay(400);

digitalWrite(LED2,HIGH);
 bandera2 = 0;
 contador2 = 0;
 } 
 break;
 }//Swicht

 }//if
 }//while
//PARA DARLE SERVICIO AL USUARIO 3
 while(bandera3 == 1){

digitalWrite(LED3,HIGH);
 int marcacion3 =
digitalRead(btn_marca3);
//verificacion del numero a llamar

 if(marcacion3==LOW){
 contador3++;

Serial.println(contador3);
 delay(300);
 }
 int llamada3 = digitalRead(btn_llama3);
//verificacion del numero
 if(llamada3 == LOW){
 switch(contador3){
 case 3:
 contador3 = -2 ;

digitalWrite(LED3,LOW);
 delay(400);

digitalWrite(LED3,HIGH);
 delay(400);

digitalWrite(LED3,LOW);
 delay(400);

digitalWrite(LED3,HIGH);
 delay(400);

digitalWrite(LED3,LOW);
 delay(400);

digitalWrite(LED3,HIGH);
 delay(400);

digitalWrite(LED3,LOW);
 delay(400);

digitalWrite(LED3,HIGH);
 delay(400);

digitalWrite(LED3,LOW);
 delay(400);

digitalWrite(LED3,HIGH);
 bandera3 = 0;
 contador3 = 0;
 break;

 case 1:

digitalWrite(LED1,HIGH);
 contador3 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED1,LOW);
 delay(100);

digitalWrite(LED1,HIGH);
 delay(100);

if(digitalRead(btn_linea1)==LOW){
 contador3 = -2;
 break;
 }else{

digitalWrite(LED1,LOW);
 contador3 = 0;
 }
 }
 break;
 case 2:

digitalWrite(LED2,HIGH);
 contador3 = -2 ;
 for(int i = 1; i <= 40; i++){
   digitalWrite(LED2,LOW);
 delay(100);

digitalWrite(LED2,HIGH);
 delay(100);

if(digitalRead(btn_linea2)==LOW){
 contador3 = -2;
 break;
 }else{

digitalWrite(LED2,LOW);
 contador3 = 0;
 }
 }
 break;
 case 4:

digitalWrite(LED4,HIGH);
 contador3 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED4,LOW);
 delay(100);

digitalWrite(LED4,HIGH);
 delay(100); 
 if(digitalRead(btn_linea4)==LOW){
 contador3 = -2;
 break;
 }else{

digitalWrite(LED4,LOW);
 contador3 = 0;
 }
 }
 break;
 case 5:

digitalWrite(LED5,HIGH);
 contador3 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED5,LOW);
 delay(100);

digitalWrite(LED5,HIGH);
 delay(100);

if(digitalRead(btn_linea5)==LOW){
 contador3 = -2;
 break;
 }else{

digitalWrite(LED5,LOW);
contador3 = 0;
 }
 }
 break;
//  case 6:

// digitalWrite(LED6,HIGH);
//  contador3 = -2 ;
//  for(int i = 1; i <= 40; i++){

// digitalWrite(LED6,LOW);
//  delay(100);

// digitalWrite(LED6,HIGH);
//  delay(100);

// if(digitalRead(btn_linea6)==LOW){
//  contador3 = -2;
//  break;
//  }else{

// digitalWrite(LED6,LOW);
//  contador3 = 0;
//  }
//  }
//  break;
 case -1:
 bandera3 = 0;
 contador3 = 0;
 bandera1 = 0;
 bandera2 = 0;
 bandera4 = 0;
 bandera5 = 0;
 //bandera6 = 0;
 break;
 default:
 if(contador3 != -2){

digitalWrite(LED3,LOW);
 delay(400);

digitalWrite(LED3,HIGH);
 delay(400);

digitalWrite(LED3,LOW);
 delay(400);

digitalWrite(LED3,HIGH);
 delay(400);

digitalWrite(LED3,LOW);
 delay(400);

digitalWrite(LED3,HIGH);
 delay(400);

digitalWrite(LED3,LOW);
 delay(400); 
 digitalWrite(LED3,HIGH);
 delay(400);

digitalWrite(LED3,LOW);
 delay(400);

digitalWrite(LED3,HIGH);
 bandera3 = 0;
 contador3 = 0;
 }
 break;

 }//Swicht

 }//if
 }//while
//------------------------------------------------------------------
//PARA DARLE SERVICIO AL USUARIO 4
 while(bandera4 == 1){

digitalWrite(LED4,HIGH);
 int marcacion4 =
digitalRead(btn_marca4);
//verificacion del numero a llamar
if(marcacion4==LOW){
 contador4++;

Serial.println(contador4);
 delay(300);
 }
 int llamada4 =
digitalRead(btn_llama4);
//verificacion del numero
 if(llamada4 == LOW){
 switch(contador4){
 case 4:
 contador4 = -2 ;

digitalWrite(LED4,LOW);
 delay(400);

digitalWrite(LED4,HIGH);
 delay(400);

digitalWrite(LED4,LOW);
 delay(400);

digitalWrite(LED4,HIGH);
 delay(400);

digitalWrite(LED4,LOW);
 delay(400); 
digitalWrite(LED4,HIGH);
 delay(400);

digitalWrite(LED4,LOW);
 delay(400);

digitalWrite(LED4,HIGH);
 delay(400);

digitalWrite(LED4,LOW);
 delay(400);

digitalWrite(LED4,HIGH);
 bandera4 = 0;
 contador4 = 0;
 break;

 case 1:

digitalWrite(LED1,HIGH);
 contador4 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED1,LOW);
 delay(100);

digitalWrite(LED1,HIGH);
 delay(100);

if(digitalRead(btn_linea1)==LOW){
  contador4 = -2;
 break;
 }else{

digitalWrite(LED1,LOW);
 contador4 = 0;
 }
 }
 break;
 case 2:

digitalWrite(LED2,HIGH);
 contador4 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED2,LOW);
 delay(100);

digitalWrite(LED2,HIGH);
 delay(100);

if(digitalRead(btn_linea2)==LOW){
 contador4 = -2;
 break;
 }else{

digitalWrite(LED2,LOW);
 contador4 = 0;
 }
 }
 break;
 case 3:

digitalWrite(LED3,HIGH);
 contador4 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED3,LOW);
 delay(100);

digitalWrite(LED3,HIGH);
 delay(100);

if(digitalRead(btn_linea3)==LOW){
 contador4 = -2;
 break;
 }else{

digitalWrite(LED3,LOW);
 contador4 = 0;
 }
 }
 break;
 case 5:

digitalWrite(LED5,HIGH);
 contador4 = -2 ;
for(int i = 1; i <= 40; i++){

digitalWrite(LED5,LOW);
 delay(100);

digitalWrite(LED5,HIGH);
 delay(100);

if(digitalRead(btn_linea5)==LOW){
 contador4 = -2;
 break;
 }else{

digitalWrite(LED5,LOW);
 contador4 = 0;
 }
 }
 break;
//  case 6:

// digitalWrite(LED6,HIGH);
//  contador4 = -2 ;
//  for(int i = 1; i <= 40; i++){

// digitalWrite(LED6,LOW);
//  delay(100);

// digitalWrite(LED6,HIGH);
//  delay(100); 
//  if(digitalRead(btn_linea6)==LOW){
//  contador4 = -2;
//  break;
//  }else{

// digitalWrite(LED6,LOW);
//  contador4 = 0;
//  }
//  }
//  break;
 case -1:
 bandera4 = 0;
 contador4 = 0;
 bandera1 = 0;
 bandera2 = 0;
 bandera3 = 0;
 bandera5 = 0;
 //bandera6 = 0;
 break;
 default:
 if(contador4 != -2){

digitalWrite(LED4,LOW);
 delay(400);

digitalWrite(LED4,HIGH);
 delay(400);
 digitalWrite(LED4,LOW);
 delay(400);

digitalWrite(LED4,HIGH);
 delay(400);

digitalWrite(LED4,LOW);
 delay(400);

digitalWrite(LED4,HIGH);
 delay(400);

digitalWrite(LED4,LOW);
 delay(400);

digitalWrite(LED4,HIGH);
 delay(400);

digitalWrite(LED4,LOW);
 delay(400);

digitalWrite(LED4,HIGH);
 bandera4 = 0;
 contador4 = 0;
 }
 break;

 }//Swicht
 }//if
 }//while
 // //--------------------------------------------------------------------
// //------------------------------------------------------------------
//PARA DARLE SERVICIO AL USUARIO 5
 while(bandera5 == 1){

digitalWrite(LED5,HIGH);
 int marcacion5 = digitalRead(btn_marca5);
//verificacion del numero a llamar

 if(marcacion5==LOW){
 contador5++;

Serial.println(contador5);
 delay(300);
 }
 int llamada5 = digitalRead(btn_llama5);
//verificacion del numero
 if(llamada5 == LOW){
 switch(contador5){
   case 5:
 contador5 = -2 ;

digitalWrite(LED5,LOW);
 delay(400);

digitalWrite(LED5,HIGH);
 delay(400);

digitalWrite(LED5,LOW);
 delay(400);

digitalWrite(LED5,HIGH);
 delay(400);

digitalWrite(LED5,LOW);
 delay(400);

digitalWrite(LED5,HIGH);
 delay(400);

digitalWrite(LED5,LOW);
 delay(400);

digitalWrite(LED5,HIGH);
 delay(400);

digitalWrite(LED5,LOW);
 delay(400);

digitalWrite(LED5,HIGH);
 bandera5 = 0;
 contador5 = 0;
 break;

 case 1:

digitalWrite(LED1,HIGH);
 contador5 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED1,LOW);
 delay(100);

digitalWrite(LED1,HIGH);
 delay(100);

if(digitalRead(btn_linea1)==LOW){
 contador5 = -2;
 break;
 }else{

digitalWrite(LED1,LOW);
 contador5 = 0;
 }
 }
 break;
 case 2:

digitalWrite(LED2,HIGH);
 contador5 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED2,LOW);
 delay(100);

digitalWrite(LED2,HIGH);
 delay(100);

if(digitalRead(btn_linea2)==LOW){
 contador5 = -2;
 break;
 }else{

digitalWrite(LED2,LOW);
 contador5 = 0;
 }
 }
 break;
 case 3:

digitalWrite(LED3,HIGH);
 contador5 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED3,LOW);
 delay(100);

digitalWrite(LED3,HIGH);
 delay(100);

if(digitalRead(btn_linea3)==LOW){
 contador5 = -2;
 break;
 }else{

digitalWrite(LED3,LOW);
 contador5 = 0;
 }
 }
 break;
 case 4:

digitalWrite(LED4,HIGH);
 contador5 = -2 ;
 for(int i = 1; i <= 40; i++){

digitalWrite(LED4,LOW);
 delay(100);

digitalWrite(LED4,HIGH);
 delay(100);

if(digitalRead(btn_linea4)==LOW){
 contador5 = -2;
 break;
 }else{

digitalWrite(LED4,LOW);
 contador5 = 0;
 }
 }
 break;
//  case 6:

// digitalWrite(LED6,HIGH);
//  contador5 = -2 ;
//  for(int i = 1; i <= 40; i++){

// digitalWrite(LED6,LOW);
//  delay(100);

// digitalWrite(LED6,HIGH);
//  delay(100);

// if(digitalRead(btn_linea6)==LOW){
//  contador5 = -2;
//  break;
//  }else{

// digitalWrite(LED6,LOW);
//  contador5 = 0;
//  }
//  }
//  break;
 case -1:
 bandera4 = 0;
 contador4 = 0;
 bandera1 = 0;
 bandera2 = 0;
 bandera3 = 0;
 bandera5 = 0;
 //bandera6 = 0;
 break;
 default:
 if(contador5 != -2){

digitalWrite(LED5,LOW);
 delay(400);

digitalWrite(LED5,HIGH);
 delay(400);

digitalWrite(LED5,LOW);
 delay(400);

digitalWrite(LED5,HIGH);
 delay(400);

digitalWrite(LED5,LOW);
 delay(400);

digitalWrite(LED5,HIGH);
 delay(400);

digitalWrite(LED5,LOW);
 delay(400);

digitalWrite(LED5,HIGH);
 delay(400);

digitalWrite(LED5,LOW);
 delay(400);

digitalWrite(LED5,HIGH);
 bandera5 = 0;
 contador5= 0;
 }
 break;

 }//Swicht
 }//if
 }//while
// //-----------------------------------------------------------
// //------------------------------------------------------------------
// //PARA DARLE SERVICIOAL USUARIO 6
//  while(bandera6 == 1){

// digitalWrite(LED6,HIGH);
//  int marcacion6 = digitalRead(btn_marca6);
// //verificacion del numero a llamar

//  if(marcacion6==LOW){
//  contador6++;

// Serial.println(contador6);
//  delay(300);
//  }
//  int llamada6 =
// digitalRead(btn_llama6);
// //verificacion del numero
//  if(llamada6 == LOW){
//  switch(contador6){
//  case 6:
//  contador6 = -2 ;

// digitalWrite(LED6,LOW);
//  delay(400);

// digitalWrite(LED6,HIGH);
//  delay(400);

// digitalWrite(LED6,LOW);
//  delay(400);

// digitalWrite(LED6,HIGH);
//  delay(400);

// digitalWrite(LED6,LOW);
//  delay(400); 
//  digitalWrite(LED6,HIGH) ;
//  delay(400);

// digitalWrite(LED6,LOW);
//  delay(400);

// digitalWrite(LED6,HIGH);
//  delay(400);

// digitalWrite(LED6,LOW);
//  delay(400);

// digitalWrite(LED6,HIGH);
//  bandera6 = 0;
//  contador6 = 0;
//  break;

//  case 1:

// digitalWrite(LED1,HIGH);
//  contador6 = -2 ;
//  for(int i = 1; i <= 40; i++){

// digitalWrite(LED1,LOW);
//  delay(100);

// digitalWrite(LED1,HIGH);
//  delay(100);

// if(digitalRead(btn_linea1)==LOW){
//  contador6 = -2;
//  break;
//  }else{

// digitalWrite(LED1,LOW);
//  contador6 = 0;
//  }
//  }
//  break;
//  case 2:

// digitalWrite(LED2,HIGH);
//  contador6 = -2 ;
//  for(int i = 1; i <= 40; i++){

// digitalWrite(LED2,LOW);
//  delay(100);

// digitalWrite(LED2,HIGH);
//  delay(100);

// if(digitalRead(btn_linea2)==LOW){
//  contador6 = -2;
//  break;
//  }else{

// digitalWrite(LED2,LOW);
//  contador6 = 0;
//  }
//  }
//  break;
//  case 3:

// digitalWrite(LED3,HIGH);
//  contador6 = -2 ;
//  for(int i = 1; i <= 40; i++){

// digitalWrite(LED3,LOW);
//  delay(100);

// digitalWrite(LED3,HIGH);
//  delay(100);

// if(digitalRead(btn_linea3)==LOW){
//  contador6 = -2;
//  break;
//  }else{

// digitalWrite(LED3,LOW);
//  contador6 = 0;
//  }
//  }
//  break;
//  case 5:

// digitalWrite(LED5,HIGH);
//  contador6 = -2 ;
//  for(int i = 1; i <= 40; i++){

// digitalWrite(LED5,LOW);
//  delay(100);

// digitalWrite(LED5,HIGH);
//  delay(100);

// if(digitalRead(btn_linea5)==LOW){
//  contador6 = -2;
//  break;
//  }else{

// digitalWrite(LED5,LOW);
//  contador6 = 0;
//  }
//  }
//  break;
//  case 4:

// digitalWrite(LED4,HIGH);
//  contador6 = -2 ;
//  for(int i = 1; i <= 40; i++){

// digitalWrite(LED4,LOW);
//  delay(100);

// digitalWrite(LED4,HIGH);
//  delay(100);

// if(digitalRead(btn_linea4)==LOW){
//  contador6 = -2;
//  break;
//  }else{

// digitalWrite(LED4,LOW);
//  contador6 = 0;
//  }
//  }
//  break;
//  case -1:
//  bandera4 = 0;
//  contador4 = 0;
//  bandera1 = 0;
//  bandera2 = 0;
//  bandera3 = 0;
//  bandera5 = 0;
//  bandera6 = 0;
//  break;
//  default:
//  if(contador6 != -2){

// digitalWrite(LED6,LOW);
//  delay(400);

// digitalWrite(LED6,HIGH);
// delay(400);
// digitalWrite(LED6,LOW);
// delay(400);
// digitalWrite(LED6,HIGH);
// delay(400);
// digitalWrite(LED6,LOW);
// delay(400);
// digitalWrite(LED6,HIGH);
// delay(400);
// digitalWrite(LED6,LOW);
// delay(400);
// digitalWrite(LED6,HIGH);
// delay(400);
// digitalWrite(LED6,LOW);
// delay(400);
// digitalWrite(LED6,HIGH);
// bandera6 = 0;
// contador6 = 0;
// }
// break;
// }//Swicht
// }//if
// }//while
 }
