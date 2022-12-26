//
// Created by Yassin on 12/25/2022.
//

#include "CardContainer.h"
//Constructors
CardContainer::CardContainer()
{
    index = 51;
    string suits[4] = {"Spades","Hearts","Clubs", "Diamonds"};
    string numbers[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
    for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 4; j++) {
			Card card_obj(suits[j], numbers[i]);
			cards_vector.push_back(card_obj);
		}
	}

}

void swap(Card &card1, Card &card2)
{
    Card temp_card = card1;
    card1 = card2;
    card2 = temp_card;
}

void CardContainer::ShuffleCards()
{
    srand(time(0));
    for(int i = 51 ;i > 0;i--)
    {
        int index = rand()%52;
        swap(cards_vector[i],cards_vector[index]);
    }
}

void CardContainer::GenerateCards(Column *columns_arr)
{
    for(int i = 1; i <= 7; i++)
    {
        for(int j = 0; j < i; j++)
        {
            columns_arr[i-1].addCard(cards_vector[index]);
            index--;
        }
        columns_arr[i-1].getTail()->flipCard();
    }
}

void CardContainer::PutRestInDeck(Deck &deck)
{
    while(index>=0)
    {
        deck.add(cards_vector[index]);
        index--;
    }
}



