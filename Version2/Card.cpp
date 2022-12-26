//
// Created by Yassin on 12/23/2022.
//
#include "Card.h"

//Constructors

Card::Card() = default;

Card::Card(string const& Suit, string const& Number)
{
	suit = Suit;
	number = Number;
	flipped = false;
//	used = false;
	above = NULL;
	below = NULL;
	if (Suit == "Clubs" || Suit == "Spades")
		color = false; // black
	else
		color = true; // red
}

// Setters
void Card::setAbove(Card* card_above)
{
	above = card_above;
}

void Card::setBelow(Card* card_below)
{
	below = card_below;
}


// Getters
string Card::getName()
{
	return "card" + suit + number + ".bmp";
}

bool Card::getColor()
{
	return color;
}

int Card::getNumber()
{
	if (number == "J")
	{ return 11; }
	else if (number == "Q")
	{ return 12; }
	else if (number == "K")
	{ return 13; }
	return stoi(number);//Converts from string to int
}

string Card::getSuit()
{
	return suit;
}

Card* Card::getAbove()
{
	return above;
}

Card* Card::getBelow()
{
	return below;
}

// Methods
void Card::flipCard()
{
	flipped = !flipped;//switches the flags
}

bool Card::isFlipped()
{
	if (flipped)
		return true;

	return false;
}

//void Card::useCard()
//{
//	used = true;
//}

//bool Card::isUsed()
//{
//	if (used)
//		return true;
//	return false;
//}
