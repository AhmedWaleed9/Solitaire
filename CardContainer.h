//
// Created by Yassin on 12/25/2022.
//

#pragma once
#include"Column.h"
#include"SFML/Graphics.hpp"
#include"Deck.h"


class CardContainer
        {
private:
    vector<Card>cards_vector;
    int index;
public:
        //Constructor
    CardContainer();
        //Methods
    void ShuffleCards();
    void GenerateCards(Column *columns_arr);
    void PutRestInDeck(Deck &);




};



