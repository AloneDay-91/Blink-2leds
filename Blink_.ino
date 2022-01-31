/*
 Titre : blink+ elouan bruzek 119
 faire clignoter les LEDS branchées sur les pattes 12 et 13 de la carte L'ARDUINO à une fréquence de 0,5Hz
 */

// Déclaration de variables globales

int led1=12; // numéro de la pin ou est connectée la led 12
int led2=13; // numéro de la pin ou est connectée la led 13

// déclaration des constantes

// setup

void setup() 
{
  pinMode(led1,OUTPUT); // configure la pin 12 en sortie
  pinMode(led2,OUTPUT); // configure la pin 13 en sortie
}

// programme

void loop() 
{
  digitalWrite(led1,HIGH); // allume la led
  delay(1000); // attendre 1s
  digitalWrite(led1,LOW); // allume la led
  delay(1000); // attendre 1s
  digitalWrite(led2,HIGH); // allume la led
  delay(1000); // attendre 1s
  digitalWrite(led2,LOW); // allume la led
  delay(1000); // attendre 1s
}
