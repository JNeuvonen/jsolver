#include "putil.h"
#include "jcard.h"
#include <iostream>

int cardStrToInt(std::string card) {

  if (card.size() != 2) {
    return -1;
  }

  std::string rank = card.substr(0, 1);
  std::string suit = card.substr(1, 2);

  int rankInt = rankToInt(rank[0]);
  int suitInt = suitToInt(suit[0]);

  return (rankInt - 2) * 4 + suitInt;
};

std::string threeCardsToFlop(CardEncoding flop_1, CardEncoding flop_2,
                             CardEncoding flop_3) {

  return cardEncodingToString(flop_1) + cardEncodingToString(flop_2) +
         cardEncodingToString(flop_3);
}

std::string cardEncodingToString(CardEncoding card) {
  auto it = cardToString.find(card);

  if (it != cardToString.end()) {
    return it->second;
  } else {
    return "";
  }
}

int suitToInt(char suit) {
  switch (suit) {
  case 'c':
    return 0;
  case 'd':
    return 1;
  case 'h':
    return 2;
  case 's':
    return 3;
  default:
    return -1;
  }
}

int rankToInt(char rank) {
  switch (rank) {
  case '2':
    return 2;
  case '3':
    return 3;
  case '4':
    return 4;
  case '5':
    return 5;
  case '6':
    return 6;
  case '7':
    return 7;
  case '8':
    return 8;
  case '9':
    return 9;
  case 'T':
    return 10;
  case 'J':
    return 11;
  case 'Q':
    return 12;
  case 'K':
    return 13;
  case 'A':
    return 14;
  default:
    return -1; // Return -1 or any other suitable value for invalid inputs.
  }
}
