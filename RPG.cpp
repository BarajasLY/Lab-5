#include "RPG.h"
#include <iostream>
#include <string>

using namespace std;

RPG::RPG()
{
}

RPG::RPG(string name, int health, int strength, int defense, string type)
{
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;
}

void RPG::printAction(string skill, RPG opponent)
{
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}


void RPG::setSkills()
{
    if (type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";

    } else if (type == "thief"){
        skills[0] = "pilfer";
        skills[1] = "jab";

    } else if (type == "archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";

    } else{
        skills[0] = "Slash";
        skills[1] = "Parry";
    }

}

string RPG::getType() const
{
    return type;
}

string RPG::getName() const
{
    return name;
}

int RPG::getHealth() const
{
    return health;
}
void RPG::updateHealth(int update_health)
{
    health = update_health;
}
bool RPG::isAlive() const
{
    return health > 0;
}

int RPG::getStrength() const
{
    return strength;
}

int RPG::getDefense() const
{
    return defense;
}

