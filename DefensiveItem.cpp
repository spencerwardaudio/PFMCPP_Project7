#include "DefensiveItem.h"
#include "Utility.h"

void DefensiveItem::use(Character* character)
{
    useDefensiveItem(character, *this);
    //make your defensive item use the appropriate Utility helper functions
}