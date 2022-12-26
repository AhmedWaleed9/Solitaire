#include <iostream>
#include <SFML/Graphics.hpp>
#include "Card.h"
#include "Deck.h"
#include "Display.h"
#include"CardContainer.h"
#include <unistd.h>
using namespace sf;

int main()
{
    //All Piles [In game class]
    Column columns_array[7];
    Column c1,c2,c3,c4,c5,c6,c7;
    columns_array[0] = c1;
    columns_array[1] = c2;
    columns_array[2] = c3;
    columns_array[3] = c4;
    columns_array[4] = c5;
    columns_array[5] = c6;
    columns_array[6] = c7;
    Deck deck;
    CardContainer card_container;
    card_container.ShuffleCards();
    card_container.GenerateCards(columns_array);
    card_container.PutRestInDeck(deck);
    FoundationPiles hearts("Hearts");
    FoundationPiles spades("Spades");
    FoundationPiles clubs("Clubs");
    FoundationPiles diamonds("Diamonds");
    //////////////////////////////////////////
    Display game(1920 , 1080);
    game.Loop(deck,spades,hearts,diamonds,clubs,columns_array);
    return 0;
};
