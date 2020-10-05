#include "AttackItem.h"
#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"
// #include <assert>

void AttackItem::use(Character* character)
{
    useAttackItem(character, this);
}