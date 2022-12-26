// Created by Yassin on 12/23/2022.
#pragma once

#include<bits/stdc++.h>
#include "Card.h"

using namespace std;


//This will be kinda doubly linked list
class Column
{
private:
    Card* head;
    Card* tail;
    int num_elements;
public:
    //Constructor
    Column();

    //setters
    void setNumberOfElements();

    void setTail(Card*);

    //getters
    int getNumberOfElements() const;
    Card * getTail();
    Card* getHead();

    //Methods
    bool addCard(Card&);//returns true if card added successfully
    void removeCard(Card&);

    bool isMoveValid(Card&);

    bool isEmpty();

};


