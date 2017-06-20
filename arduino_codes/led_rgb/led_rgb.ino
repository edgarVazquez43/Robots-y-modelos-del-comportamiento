/*Coding by Edgar V
 * 
 * Programa que varia la intensidad de un led RGB
 * 
 * Primero varia la intensidad de cada led por separado.
 * y posteriormente todos los colores juntos.
 */


//Establecemos los pines en los cuales estaran conectados cada uno de nuestros LEDs
int pinR = 9;
int pinB = 10;
int pinG = 11;

void setup() {
  
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  // Primero incrementaremos la intensidad de cada led y
  // posteriormente la disminuiremos


  // Incremento de la intensidad del led Rojo
  for(int ciclo_trabajo = 0; ciclo_trabajo < 255; ciclo_trabajo = ciclo_trabajo+10 )
  {
    analogWrite(pinR, ciclo_trabajo);  
    delay(500);
  }

  // Decremento de la intensidad del led Rojo
  // Para el decremento es importante cambiar la condicion inicial,
  // la condición de operacion y el decremeto.
  for(int ciclo_trabajo = 255; ciclo_trabajo > 0; ciclo_trabajo = ciclo_trabajo-10 )
  {
    analogWrite(pinR, ciclo_trabajo);  
    delay(500);
  }


   // Incremento de la intensidad del led Azul
  for(int ciclo_trabajo = 0; ciclo_trabajo < 255; 
        ciclo_trabajo = ciclo_trabajo+10 )
  {
    analogWrite(pinB, ciclo_trabajo);  
    delay(500);
  }

  // Decremento de la intensidad del led Azul
  for(int ciclo_trabajo = 255; ciclo_trabajo > 0; 
        ciclo_trabajo = ciclo_trabajo-10 )
  {
    analogWrite(pinB, ciclo_trabajo);  
    delay(500);
  }
  

  // Incremento de la intensidad del led Verde
  for(int ciclo_trabajo = 0; ciclo_trabajo < 255; 
        ciclo_trabajo = ciclo_trabajo+10 )
  {
    analogWrite(pinG, ciclo_trabajo);  
    delay(500);
  }

  // Decremento de la intensidad del led Verde
  for(int ciclo_trabajo = 255; ciclo_trabajo > 0; 
        ciclo_trabajo = ciclo_trabajo-10 )
  {
    analogWrite(pinB, ciclo_trabajo);  
    delay(500);
  }


    // Incremento de la intensidad de todos los leds
  for(int ciclo_trabajo = 0; ciclo_trabajo < 255; 
        ciclo_trabajo = ciclo_trabajo+10 )
  {
    analogWrite(pinR, ciclo_trabajo);
    analogWrite(pinG, ciclo_trabajo);
    analogWrite(pinB, ciclo_trabajo);
    delay(500);
  }

  // Decremento de la intensidad de todos los leds
  for(int ciclo_trabajo = 255; ciclo_trabajo > 0; 
        ciclo_trabajo = ciclo_trabajo-10 )
  {
    analogWrite(pinR, ciclo_trabajo);
    analogWrite(pinG, ciclo_trabajo);
    analogWrite(pinB, ciclo_trabajo);  
    delay(500);
  }

  
  
}
