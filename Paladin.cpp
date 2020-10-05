#include "Paladin.h"

Paladin::Paladin(std::string name_, int hp, int armor) : Character(hp, armor, 10), name(name_)
{

}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}