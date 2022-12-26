#include "Deck.h"
using namespace sf;
//Shuffle the draws pile into deck pile back randomly.
void Deck::shuffle() {
    /*list<Card> cards; //Place cards in vector.
    while(!draws.empty())
    {
        cards.push_back(draws.top());
        draws.pop();
    }

     *Seed randomly generated from time , equation to get card from list depending on list.size().
     */
}
//Constructors
Deck::Deck() {
    //Could generate the deck here.
}
//Draw a card from the deck pile to draws pile.
void Deck::draw() {
    Card card = deck.top();;
    card.flipCard();
    draws.push(card);
}
//Pick a card from the draws pile.
Card Deck::pick() {
    Card card = draws.top();
    draws.pop();
    return card;
}
//Place a card back on the draws pile.
void Deck::place(Card c) {
    draws.push(c);
}
//Place a card in the deck pile
void Deck::add(Card c) {
    deck.push(c);
}
//Refill deck from draws pile;
void Deck::refill() {
    if(deck.empty())
    {
        while(!draws.empty())
        {
            Card card = draws.top();
            card.flipCard();
            deck.push(card);
            draws.pop();
        }
    }
}
bool Deck::isDeckEmpty() {
    return deck.empty();
}
//Return top card of draws for display.
Card Deck::top() {
    if(draws.empty())
    {
        return Card();
    }
    else {
        return draws.top();
    }
}

bool Deck::isDrawsEmpty() {
    return draws.empty();
}





