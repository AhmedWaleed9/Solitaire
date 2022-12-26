//
// Created by Cm on 12/25/2022.
//
#pragma once
#include<bits/stdc++.h>
#include <SFML/Graphics.hpp>
#include "Card.h"
#include "Column.h"
#include "Deck.h"
#include "FoundationPiles.h"
#include"CardContainer.h"

using namespace std;
using namespace sf;

class Display
{
private:

    //Window Information

    //Position Shifts
    double up_spacing =160;
    double found_distance = 1200;
    //Positions saved
    Vector2f deck_position = Vector2f(20 , 20);
    Vector2f draws_position = Vector2f(20+up_spacing , 20);
public:
    RenderWindow window;
    Display();
    Display(int width , int height);
    void displayDeck(Deck deck);
    void displayDraws(Deck deck);
    void displayColumn(Column *column_array);
    void displayFoundationPiles(FoundationPiles &);
    void Loop(Deck deck,FoundationPiles Spades,FoundationPiles Hearts,FoundationPiles Diamonds,FoundationPiles Clubs ,Column *column_array);
    void clear();
    void windowDisplay();
    bool isWindowOpen();
    bool pollEvent(Event e);
};

