//
// Created by Yassin on 12/23/2022.
//
#include<bits/stdc++.h>

using namespace std;
#pragma once


class Card
{
private:
	string suit;
	string number;
	bool color;   // black = 0, red = 1
	bool flipped; // flipped means that you can see it.
//	bool used;
	//pointers that point to the above and below cards
	Card* above;
	Card* below;

public:
	// Constructor
	Card();

	Card(string const&, string const&);

	//Setters
	void setAbove(Card*);
	void setBelow(Card*);

	// Getters
	string getName();

	bool getColor();

	int getNumber();

	string getSuit();

	Card* getAbove();

	Card* getBelow();

	// Methods (I think we should put them in the setters and getters)
	void flipCard();//switches the flags

	bool isFlipped();//if it faces you then it is flipped

//	void useCard();

//	bool isUsed();
};

