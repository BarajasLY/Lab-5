#include <iostream>
#include "RPG.h"

using namespace std;

int main()
{
    RPG npc = RPG("NPC", 100, 10, 10, "warrior"); // Using overloaded constructor
    
    cout << "Name: " << npc.getName() << ", Health: " << npc.getHealth() << endl;

    // Testing isAlive and updateHealth functions
    cout << "Is npc alive? " << (npc.isAlive() ? "Yes" : "No") << endl;

    // Update health of npc_default
    npc.updateHealth(-20);

    cout << "After taking damage, health of npc_default: " << npc.getHealth() << endl;
    cout << "Is npc alive after taking damage? " << (npc.isAlive() ? "Yes" : "No") << endl;
    
    return 0;
}

