#include "jcard.h"
#include "putil.h"

namespace jsolver {

Card::Card(int card) : value(static_cast<CardEncoding>(card)) {}
Card::Card(std::string card)
    : value(static_cast<CardEncoding>(cardStrToInt(card))) {}

int Card::toInt() { return static_cast<int>(value); }
std::string Card::toString() {
  auto it = cardToString.find(this->value);
  if (it != cardToString.end()) {
    return it->second;
  } else {
    return "";
  }
}

} // namespace jsolver
