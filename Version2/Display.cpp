//
// Created by us on 12/25/2022.
//
#include "Display.h"
//Constructors
Display::Display() {

}
Display::Display(int width, int height)
{
    window.create(VideoMode(width,height) , "We Solitaire");
    window.setFramerateLimit(60);
}
//Display the deck
void Display::displayDeck(Deck deck) {
    Texture texture;
    Sprite sprite;
    if(deck.isDeckEmpty())
    {
        texture.loadFromFile("C:/Users/Public/Documents/HelloSFML/Card Images/no_card.bmp");
        sprite.setTexture(texture);
        sprite.setPosition(deck_position);
        window.draw(sprite );
    }
    else
    {
        texture.loadFromFile("C:/Users/Public/Documents/HelloSFML/Card Images/card_back.bmp");
        sprite.setTexture(texture);
        sprite.setPosition(deck_position);
        window.draw(sprite );
    }
}
///Display the draws
void Display::displayDraws(Deck deck) {
    Texture texture;
    Sprite sprite;
    if(deck.isDrawsEmpty())
    {
        texture.loadFromFile("C:/Users/Public/Documents/HelloSFML/Card Images/no_card.bmp");
        sprite.setTexture(texture);
        sprite.setPosition(draws_position);
        window.draw(sprite );
    }
    else
    {
        texture.loadFromFile("C:/Users/Public/Documents/HelloSFML/Card Images/card_back.bmp");
        sprite.setTexture(texture);
        sprite.setPosition(draws_position);
        window.draw(sprite );
    }
}
void Display::displayFoundationPiles(FoundationPiles &foundationPiles)
{
    Texture texture;
    Sprite sprite;
    if(foundationPiles.isEmpty())
    {
        texture.loadFromFile("C:/Users/Public/Documents/HelloSFML/Card Images/"+foundationPiles.getName());
    }
    else{texture.loadFromFile("C:/Users/Public/Documents/HelloSFML/Card Images/"+foundationPiles.getTop().getName());}
    sprite.setTexture(texture);
    sprite.setPosition(found_distance,20);
    found_distance+=160;
    window.draw(sprite);
    if(found_distance >= 1840){found_distance = 1200;}
}
void Display::displayColumn(Column *column_array)
{
    int dx = 35, dy = 350;
    Texture texture;
    Sprite sprite;
    for (int i = 0; i < 7; i++)
    {
        Card* iterator = column_array[i].getHead();
        if (iterator == NULL)
        {
            texture.loadFromFile("C:/Users/Public/Documents/HelloSFML/Card Images/card_back.bmp");
            sprite.setTexture(texture);
            sprite.setPosition(dx, dy);
            window.draw(sprite);
        }
        else
        {
            while (iterator != NULL)
            {
                if(iterator->isFlipped())
                {
                    texture.loadFromFile(
                            "C:/Users/Public/Documents/HelloSFML/Card Images/" + iterator->getName());
                }
                else{texture.loadFromFile("C:/Users/Public/Documents/HelloSFML/Card Images/card_back.bmp");}
                sprite.setTexture(texture);
                sprite.setPosition(dx, dy);
                dy += 40;
                window.draw(sprite);
                iterator = iterator->getBelow();
            }
        }
        dy = 350;
        dx += 200;
    }
}

void Display::windowDisplay() {
    window.display();
}

void Display::clear() {
    window.clear();
}

bool Display::isWindowOpen()
{
    return window.isOpen();
}

bool Display::pollEvent(Event event) {
    return window.pollEvent(event);
}
void Display::Loop(Deck deck, FoundationPiles Spades, FoundationPiles Hearts, FoundationPiles Diamonds,
                   FoundationPiles Clubs, Column *column_array)
{
    Texture texture;
    Sprite background;
    texture.loadFromFile("C:/Users/Public/Documents/HelloSFML/background.jpeg");
    background.setTexture(texture);
    background.setScale(1920/background.getLocalBounds().width , 1080/background.getLocalBounds().height);
    while(window.isOpen())
    {
        Event event;
        while(window.pollEvent(event)) {
            window.clear();
            window.draw(background);
            displayDeck(deck);
            displayDraws(deck);
            displayColumn(column_array);
            displayFoundationPiles(Spades);
            displayFoundationPiles(Hearts);
            displayFoundationPiles(Diamonds);
            displayFoundationPiles(Clubs);
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        windowDisplay();
    }
}



