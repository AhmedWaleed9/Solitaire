//
// Created by Yassin on 12/23/2022.
//
#include "Column.h"


//ColumnCardContainer//delete this line in case it works


//Column
//Constructors
Column::Column()
{
    num_elements = 0;
    head = NULL;
    tail = NULL;
}

//setters
void Column::setNumberOfElements()//sets the num_elements automatically
{
    int new_number_of_elements = 0;
    Card* iterator = head;
    while (iterator != NULL)
    {
        new_number_of_elements++;
        iterator = iterator->getBelow();
    }
    num_elements = new_number_of_elements;

    return;
}

void Column::setTail(Card* new_tail)
{
    tail = new_tail;
    return;
}


//Getters
int Column::getNumberOfElements() const
{
    return num_elements;
}

Card* Column::getTail()
{
    return tail;
}

Card* Column::getHead()
{
    return head;
}


//Methods
bool Column::isMoveValid(Card& card)
{
    //If the card is flipped it can always be added to the column
    if(card.isFlipped() == false){return true;}
    if (isEmpty() )//if column is empty (set the head and tail to it)
    {
        if (card.getNumber() == 13 )//if the card is a King
        {
            return true;
        }
        return false;//if the card is not a king
    }

    //tail to it and it's above to the last element before it, the card above's below pointer to it.
    Card* before_last = getTail();
    if (card.getColor() != before_last->getColor() && (before_last->getNumber() == card.getNumber() + 1) &&(getNumberOfElements() <= 19))
    {
        return true;
    }
    return false;
}


bool Column::addCard(Card& cards_to_add)
{
    if (isMoveValid(cards_to_add))
    {
        Card* iterator;
        if (isEmpty())//Checks if it's empty to set the head to the first element
        {
            head = &cards_to_add;
            cards_to_add.setAbove(NULL);
            iterator = head;
        }
        else//if the column is not  empty it connects the new cards to the cards already found in the column
        {
            tail->setBelow(&cards_to_add);
            cards_to_add.setAbove(tail);
            iterator = tail;
        }
        while (iterator !=NULL)//iterates on the list of cards till it reaches the end and set the tail to it
        {
            num_elements++;
            if(iterator->getBelow() == NULL){setTail(iterator);}
            iterator = iterator->getBelow();
        }
        return true;
    }
    return false;
}

void Column::removeCard(Card& cards_to_remove)
{
    Card* iterator_up = cards_to_remove.getAbove(); //Iterator that points to the card above the one wanted

    setTail(cards_to_remove.getAbove());//set the tail to it's new position above the cards removed

    if (iterator_up != NULL)//This checks if the card removed is the first element in the row
    {
        iterator_up->setBelow(NULL);//now that this card is the last card in the column, We set it's below ptr to NULL
    }
    cards_to_remove.setAbove(NULL);

    setNumberOfElements();

}


bool Column::isEmpty()
{
    return num_elements == 0;
}
