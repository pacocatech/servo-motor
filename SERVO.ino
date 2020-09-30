/**
   Criado por Paçoca Tech

   Youtube: https://www.youtube.com/channel/UCW6OP5j28zFsnKxpQ2v9CsA
   Instagram: http://instagram.com/pacocatech
   Github: http://github.com/pacocatech
   E-mail: pacocatech@gmail.com


   Manipulando SERVO motor.
*/

#include <Servo.h>

#define pinoMotor 4

//objeto para controlar o motor
Servo motor;

void setup() {
  //iniciando o monitor serial
  Serial.begin(9600);

  //iniciando o objeto que irá controlar o motor
  motor.attach(pinoMotor);

}

void loop() {

  Serial.println("MOTOR NO ANGULO 0");
  //enviamos a posição de 0 para o motor
  motor.write(0);

  //aguardamos 2 segundos
  delay(2000);

  Serial.println("MOTOR NO ANGULO 45");

  //enviamos a posição de 45 para o motor
  motor.write(45);

  //aguardamos 2 segundos
  delay(2000);

  Serial.println("MOTOR NO ANGULO 90");

  //enviamos a posição de 90 para o motor
  motor.write(90);

  //aguardamos 2 segundos
  delay(2000);
}
