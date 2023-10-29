#include "jcard.h"
#include "jsolver.h"
#include "phevaluator/phevaluator.h"
#include "putil.h"
#include <iostream>

using namespace jsolver;

int main() {

    Actions ip_f_actions{false, {0.75, 1.5}, {0.75}, {}};
    Actions oop_f_actions{true, {}, {0.75}, {}};

    Actions ip_t_actions{false, {0.75, 1.5}, {-1.75}, {}};
    Actions oop_t_actions{true, {}, {0.75}, {}};

    Actions ip_r_actions{false, {0.75}, {1.5}, {}};
    Actions oop_r_actions{true, {}, {0.75}, {}};

    PlayerActions ip_actions{ip_f_actions, ip_t_actions, ip_r_actions};
    PlayerActions oop_actions{oop_f_actions, oop_t_actions, oop_r_actions};

    GameTree game_tree{Card{2}, Card{3}, Card{4}, oop_actions, ip_actions};
    // int evaluated_value_1 = evaluate_7cards(33, 37, 41, 45, 49, 1, 2);
    // int evaluated_value_2 = evaluate_7cards(43, 49, 37, 10, 5, 7, 8);
    // std::cout << evaluated_value_1 << " " << evaluated_value_2 << std::endl;

    jsolver::Card card{"Ac"};

    std::cout << card.toString() << std::endl;
}
