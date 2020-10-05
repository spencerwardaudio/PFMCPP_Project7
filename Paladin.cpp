#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(std::string n, int hp, int armor) : Character(hp, armor, 10), name(n)
{
    helpfulItems = makeHelpfulItems(3);
    defensiveItems = makeDefensiveItems(7);
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}

