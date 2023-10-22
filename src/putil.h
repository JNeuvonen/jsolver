#pragma once
#include "jrank.h"
#include <map>
#include <string>

using namespace jsolver;

int cardStrToInt(std::string card);
int suitToInt(char suit);
int rankToInt(char rank);

inline const std::map<CardEncoding, std::string> cardToString = {
    {C2, "2c"}, {D2, "2d"}, {H2, "2h"}, {S2, "2s"}, {C3, "3c"}, {D3, "3d"},
    {H3, "3h"}, {S3, "3s"}, {C4, "4c"}, {D4, "4d"}, {H4, "4h"}, {S4, "4s"},
    {C5, "5c"}, {D5, "5d"}, {H5, "5h"}, {S5, "5s"}, {C6, "6c"}, {D6, "6d"},
    {H6, "6h"}, {S6, "6s"}, {C7, "7c"}, {D7, "7d"}, {H7, "7h"}, {S7, "7s"},
    {C8, "8c"}, {D8, "8d"}, {H8, "8h"}, {S8, "8s"}, {C9, "9c"}, {D9, "9d"},
    {H9, "9h"}, {S9, "9s"}, {CT, "Tc"}, {DT, "Td"}, {HT, "Th"}, {ST, "Ts"},
    {CJ, "Jc"}, {DJ, "Jd"}, {HJ, "Jh"}, {SJ, "Js"}, {CQ, "Qc"}, {DQ, "Qd"},
    {HQ, "Qh"}, {SQ, "Qs"}, {CK, "Kc"}, {DK, "Kd"}, {HK, "Kh"}, {SK, "Ks"},
    {CA, "Ac"}, {DA, "Ad"}, {HA, "Ah"}, {SA, "As"}};
