//
// Created by Ahmed Waleed on 12/23/2022.
//

#include "FoundationPiles.h"

//Constructors
FoundationPiles::FoundationPiles() = default;

FoundationPiles::FoundationPiles(string s)
{
    suit = s;
}

//Getters
string FoundationPiles::getName()
{
    if (pile.empty())
    {
        return "goal" + suit + ".bmp";
    }
    return (pile.top()).getName();
}

Card FoundationPiles::getTop()
{
    return pile.top();
}

//Methods
bool FoundationPiles::isEmpty()
{
    return pile.empty();
}

bool FoundationPiles::isFull()
{
    return pile.size() == 13;
}


bool FoundationPiles::isValid(Card card)
{
    if (card.getSuit() == suit)
    {
        if (pile.empty())
        {
            if (card.getNumber() == 1) return true;
        }
        else if (card.getNumber() == ((pile.top()).getNumber() + 1)) return true;
    }
    return false;
}

void FoundationPiles::put(Card card)
{
    if (isValid(card))
    {
        pile.push(card);
    }
}