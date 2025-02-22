#include "RPG.h"
#include <iostream>

int main() {
    RPG NPC = RPG();
    RPG Wiz = RPG("Wiz", 70, 100, 100, "mage");
    
    Wiz.updateHealth(50);
    printf("New Health: %i\nAlive: %i", Wiz.getHealth(), Wiz.isAlive());

    Wiz.updateHealth(0);
    printf("\nNew Health: %i\nAlive: %i", Wiz.getHealth(), Wiz.isAlive());



    return 0;
}
