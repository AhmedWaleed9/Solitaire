//
// Created by Ahmed Waleed on 12/30/2022.
//

#include "Moves.h"

Moves::Moves() {
    ctr = 0;
    limit = INT_MAX;
}

void Moves::setLimit(int l) {
    limit = l;
}


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

// You'll make an if condition and make an action according to the returned value
string Moves::undoMove() {
    if (ctr == limit) return "error";
    string copy = moves.top();
    moves.pop();
    ctr++;
    return copy;
}
