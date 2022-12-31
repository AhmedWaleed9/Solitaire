//
// Created by Ahmed Waleed on 12/30/2022.
//
#include <bits/stdc++.h>
#include "Card.h"

using namespace std;

#ifndef MAIN_CPP_MOVES_H
#define MAIN_CPP_MOVES_H


class Moves {
    int ctr;
    int limit;
    stack<pair<string, Card *>> moves;
public:
    Moves();

    // Setters
    void setLimit(int l);

    // Methods
    void addMove(pair<string, Card *> p);

    pair<string, Card *> undoMove();
};


#endif //MAIN_CPP_MOVES_H
