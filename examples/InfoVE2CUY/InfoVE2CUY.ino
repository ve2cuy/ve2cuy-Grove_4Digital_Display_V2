/*
   Auteur:  Alain Boudreault, AKA VE2CUY
   Date:    2021.10.19
   Description: Exemple d'utilisation de la méthode info()
*/

#include "TM1637V2.h"

// Pins definitions for TM1637V2 and can be changed to other ports
const int CLK = 6;
const int DIO = 7;
TM1637V2 TM1637V2(CLK, DIO);

void setup() {
    TM1637V2.begin();  // Effacer l'écran. Méthode disponible seulement dans cette version.
    TM1637V2.info();
}

void loop() {
    // Rien à faire ici ...
    // ;-)
}