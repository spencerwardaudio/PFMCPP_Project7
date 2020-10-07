#pragma once
#include <iostream>
#include "Character.h"

struct Paladin : Character
{
    Paladin(std::string n, int hp, int armor);

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};

