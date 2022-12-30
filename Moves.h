//
// Created by Ahmed Waleed on 12/30/2022.
//
#include <bits/stdc++.h>

using namespace std;

#ifndef MAIN_CPP_MOVES_H
#define MAIN_CPP_MOVES_H


class Moves {
    int ctr;
    int limit;
    stack<string> moves;
public:
    Moves();

    // Setters
    void setLimit(int l);

    // Methods
    void addMove(string s);

    string undoMove();
};


#endif //MAIN_CPP_MOVES_H
