/* Coding by  Edgar Vazquez.
 * Este programa muestra los 5 estados de un robot movil
 * se utiliza un puente H L298. Por tanto se utilizan los
 * pines de direccion 2, 3, 4, 5.
 * 
 * Este programa no utiliza el control de velocidad por lo tanto verifcar 
 * si los pines ENB (enable) del punete H estan concetados a 5V.
 */

void setup() {
  /* 
   *  El numero 2 se refiere al pin fisico de la 
   *  tarjeta arduino. Que en este caso se declara como 
   *  salida, aunque tambien podria ser de entrada
   *  con la siguiente instruccion:
   *  pinMode(2, INPUT);
   */

    // Esta configuracion depende de como conectaron su motor
    // La etiqueta es solo representativa.

    //Motor derecho
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);

    //Motor izquierdo
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);

}

// Declaracion de una funcion recibe un parametro que
// sera el tiempo variable de tipo entero llamada "time"
// y no regresa nada.
void avanza(int time)
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);

  delay(time);
}

void reversa(int time)
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

  delay(time);
}


void giraDerecha(int time)
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

  delay(time);
}

void giraIzquierda(int time)
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);

  delay(time);
}

void Stop(int time)
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  delay(time);
}



void loop() {

  //Tiempo en milliseconds
  avanza(100);
  Stop(500);
  
  giraDerecha(500);
  Stop(500);
  
  giraIzquierda(500);
  Stop(500);
}
