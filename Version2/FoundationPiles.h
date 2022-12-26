//
// Created by Ahmed Waleed on 12/23/2022.
//

#pragma once

#include <bits/stdc++.h>
#include"Card.h"

using namespace std;

class FoundationPiles
{
private:
    string suit;
    stack<Card> pile;
public:
    // Constructors
    FoundationPiles();

    FoundationPiles(string s);

    //Getters

    // Get the picture name to display it
    string getName();
    Card getTop();

    //Methods
    bool isEmpty();//returns true if it's empty

    //returns true if the stack size is 13 (Full)
    bool isFull();

    // Check if you can put the card on the pile
    bool isValid(Card card);

    // Put the card
    void put(Card card);
};


