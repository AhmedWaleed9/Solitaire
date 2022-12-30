//
// Created by Ahmed Waleed on 12/30/2022.
//

#include "Moves.h"

Moves::Moves() = default;

/*
For string s
 s.size() == 4
 s[0]: The last position
 s[1]: The current position
 Positions: 1, 2, 3, 4, 5, 6, 7 for the 7 columns
            d for deck, r for draw
            S, H, C, D for the four foundation piles "Spades", "Hearts", "Clubs", "Diamonds"
 s[2]+s[3]: The card
*/

void Moves::addMove(string s) {
    moves.push(s);
}

string Moves::undoMove() {
    string copy = moves.top();
    moves.pop();
    return copy;
}