#pragma once

#include "jcard.h"
#include <map>
#include <optional>
#include <vector>

namespace jsolver {

    enum Street {
        FLOP = 0, TURN = 1, RIVER = 2
    };

    class Actions {
    public:
        Actions(bool is_oop, std::vector<float> bets, std::vector<float> raises,
                std::vector<float> donk_bets);

        std::vector<float> bets;
        std::vector<float> donk_bets;
        std::vector<float> raises;
        bool is_oop;
    };

    class PlayerActions {
    public:
        PlayerActions(Actions f_act, Actions t_act, Actions r_act);

        Actions f_act;
        Actions t_act;
        Actions r_act;
    };

    class Hand {
    public:
        Hand(Card card_1, Card card_2);

        std::string to_string();

    private:
        Card card_1;
        Card card_2;
        float freq;
    };

    using HandRangeMap = std::map<std::string, std::optional<Hand>>;

    class HandRange {
    public:
        HandRange(HandRangeMap &starting_range);

    private:
        HandRangeMap range;
    };

    class Node {
    public:
        Node(HandRange range_oop, HandRange range_ip);
    };


    class GameTree {
    public:
        GameTree(Card flop_1, Card flop_2, Card flop_3, PlayerActions oop_actions,
                 PlayerActions ip_actions);

    private:
        PlayerActions oop_actions;
        PlayerActions ip_actions;

        HandRangeMap oop_starting_range;
        HandRangeMap ip_starting_range;

        Card flop_1;
        Card flop_2;
        Card flop_3;

        void init_game_tree();

        void init_starting_range(HandRangeMap &ip_or_oop);
    };

} // namespace jsolver
