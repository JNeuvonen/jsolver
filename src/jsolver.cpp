#include "jsolver.h"
#include <iostream>

namespace jsolver {

    Actions::Actions(bool is_oop, std::vector<float> bets,
                     std::vector<float> raises, std::vector<float> donk_bets)
            : is_oop(is_oop), bets(bets), raises(raises), donk_bets(donk_bets) {};

    PlayerActions::PlayerActions(Actions f_act, Actions t_act, Actions r_act)
            : f_act(f_act), t_act(t_act), r_act(r_act) {};

    Hand::Hand(Card card_1, Card card_2)
            : card_1(card_1), card_2(card_2), freq(1.0) {};



    HandRange::HandRange(jsolver::HandRangeMap &starting_range) : range(starting_range) {
    };

    GameTree::GameTree(Card flop_1, Card flop_2, Card flop_3,
                       PlayerActions oop_actions, PlayerActions ip_actions)
            : flop_1(flop_1), flop_2(flop_2), flop_3(flop_3), oop_actions(oop_actions),
              ip_actions(ip_actions) {
        this->init_game_tree();
    }

    void GameTree::init_game_tree() {
        this->init_starting_range(this->ip_starting_range);
        this->init_starting_range(this->oop_starting_range);
    };

    void GameTree::init_starting_range(HandRangeMap &ip_or_oop) {
        for (int i = 0; i < 52; i++) {
            Card card_1{i};

            for (int j = 0; j < 52; j++) {
                if (i == j) {
                    continue;
                }

                Card card_2{j};
                Hand hand{card_1, card_2};
                ip_or_oop.emplace(hand.to_string(), hand);
            }
        }
    };

    std::string Hand::to_string() {
        return this->card_1.toString() + this->card_2.toString();
    }

} // namespace jsolver
