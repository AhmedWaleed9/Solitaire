//
// Created by Ahmed Waleed on 12/30/2022.
//
#include <bits/stdc++.h>
using namespace std;

#ifndef MAIN_CPP_MOVES_H
#define MAIN_CPP_MOVES_H


class Moves {
    int ctr;
    stack<string> moves;
public:
    Moves();
    void addMove(string s);
    string undoMove();
};


#endif //MAIN_CPP_MOVES_H
