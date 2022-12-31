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
string
 s.size() == 2
 s[0]: The last position
 s[1]: The current position
 Positions: 1, 2, 3, 4, 5, 6, 7 for the 7 columns
            d for deck, r for draw
            S, H, C, D for the four foundation piles "Spades", "Hearts", "Clubs", "Diamonds"

 Pointer for the card
*/

void Moves::addMove(pair<string, Card *> p) {
    moves.push(p);
}

// You'll make an if condition and make an action according to the returned value
pair<string, Card *> Moves::undoMove() {
    if (ctr == limit) return make_pair("", nullptr);
    pair copy = moves.top();
    moves.pop();
    ctr++;
    return copy;
}
