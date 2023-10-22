#include "jrank.h"
#include "putil.h"

namespace jsolver {

Card::Card(int card) : value(static_cast<CardEncoding>(card)) {}
Card::Card(std::string card)
    : value(static_cast<CardEncoding>(cardStrToInt(card))) {}

int Card::toInt() { return static_cast<int>(value); }
std::string Card::toString() { return cardToString[value]; }

} // namespace jsolver
