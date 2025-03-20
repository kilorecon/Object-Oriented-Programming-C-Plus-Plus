#include "RPG.h"
#include <iostream>


void displayStats(RPG, RPG);
void displayEnd(RPG, RPG);
void gameLoop(RPG*, RPG*);

int main() {
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    gameLoop(&p1, &p2);
    displayEnd(p1, p2);

    return 0;
}

void displayStats(RPG player1, RPG player2) {
    printf("\n%s health: %i\tNPC health: %i\n", player1.getName().c_str(), player1.getHealth(), player2.getHealth());
}

void displayEnd(RPG player1, RPG player2) {
    if (player2.isAlive() == false) {
        printf("\n%s defeated %s! Good game!\n", player1.getName().c_str(), player2.getName().c_str());
    }
    else if (player1.isAlive() == false) {
        printf("\n%s defeated %s! Good game!\n", player2.getName().c_str(), player1.getName().c_str());
    }
}

void gameLoop(RPG* player1, RPG* player2) {
    while(((*player1).isAlive() == true) && ((*player2).isAlive() == true)) {
        displayStats((*player1), (*player2));
        printf("%s's turn\n", (*player1).getName().c_str());
        (*player1).useSkill(player2);
        printf("------------------------------");
        displayStats((*player1), (*player2));
        printf("%s's turn\n", (*player2).getName().c_str());
        (*player2).useSkill(player1);
        printf("------------------------------");
    }
}
