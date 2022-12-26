#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Card.h"
#include <stack>
using namespace std;
using namespace sf;
class Deck
{
    stack<Card> deck;
    stack<Card> draws;
public:
    //Constructor
    Deck();
    //Methods
    void refill();
    void shuffle();
    bool isDeckEmpty();
    bool isDrawsEmpty();
    void draw();
    Card top();
    Card pick();
    void place(Card c);
    void add(Card c);
};