#define Debug_Statement(statement) (#ifdef DEBUG statement ; #endif)

/* include fastled &&/|| matrix*/
#include "letters.h"


void setup(){
    Serial.begin(9600);
    Serial.println("We are alive.")
}

