#pragma once
#include <string>

namespace jsolver {

enum CardEncoding {
  C2 = 0,
  D2 = 1,
  H2 = 2,
  S2 = 3,
  C3 = 4,
  D3 = 5,
  H3 = 6,
  S3 = 7,
  C4 = 8,
  D4 = 9,
  H4 = 10,
  S4 = 11,
  C5 = 12,
  D5 = 13,
  H5 = 14,
  S5 = 15,
  C6 = 16,
  D6 = 17,
  H6 = 18,
  S6 = 19,
  C7 = 20,
  D7 = 21,
  H7 = 22,
  S7 = 23,
  C8 = 24,
  D8 = 25,
  H8 = 26,
  S8 = 27,
  C9 = 28,
  D9 = 29,
  H9 = 30,
  S9 = 31,
  CT = 32,
  DT = 33,
  HT = 34,
  ST = 35,
  CJ = 36,
  DJ = 37,
  HJ = 38,
  SJ = 39,
  CQ = 40,
  DQ = 41,
  HQ = 42,
  SQ = 43,
  CK = 44,
  DK = 45,
  HK = 46,
  SK = 47,
  CA = 48,
  DA = 49,
  HA = 50,
  SA = 51
};

class Card {

public:
  Card(std::string card);
  Card(int card);

  int toInt();
  std::string toString();
  void print();

private:
  CardEncoding value;
};

} // namespace jsolver
