//
// Created by Cm on 12/25/2022.
//
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Card.h"
#include "Deck.h"
#include <unistd.h>
using namespace sf;
//This is the function showcolumns
/*void showColumns(Column* col_arr)
{

    int dx = 35, dy = 350;
    Texture texture;
    Sprite sprite;
    for (int i = 0; i < 7; i++)
    {
        Card* iterator = col_arr[i].getHead();
        if (iterator == NULL)
        {
            texture.loadFromFile("C:/Users/Yassin/Desktop/WeSolitaire/Resources/Images/cards/no_card.bmp");
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
                            "C:/Users/Yassin/Desktop/WeSolitaire/Resources/Images/cards/" + iterator->getName());
                }
                else{texture.loadFromFile("C:/Users/Yassin/Desktop/WeSolitaire/Resources/Images/cards/card_back.bmp");}
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
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void foo (){

    Texture texture;
    texture.loadFromFile("D:/Video Material/Well.jpg");

    Sprite sprite;
    sprite.setTexture(texture);
    sprite.setScale(1280/sprite.getLocalBounds().width , 720/sprite.getLocalBounds().height);

// Code to scale a sprite with a texture of a certain size to window size.

}
int test()

{
    RenderWindow window(VideoMode(1920, 1080), "We Solitaire");
    window.setFramerateLimit(60);
    /*
    RectangleShape card;
    card.setSize(Vector2f(300 , 200));
    card.setFillColor(Color::Red);*/
    float x = 0.0 , y = 30.0;
    Sprite card;
    Texture texture;
    texture.loadFromFile("C:/Users/Public/Documents/HelloSFML/Card Images/card_back.bmp");
    card.setTexture(texture);
    card.setPosition(x,y);
    window.clear(Color::Green);
    for(int i = 0; i < 28; i++) {
        window.clear(Color::Green);
        x = 0.0, y = 30.0;
        card.setPosition(x, y);
        for (int j = 0; j < i; j++) {
            window.draw(card);
            x += 0.5;
            y -= 0.25;
            card.setPosition(x, y);
        }
    }
    window.display();
    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Mouse::setPosition(sf::Vector2i(640, 360), window);
            }
            if (event.type == sf::Event::Closed) {
                window.close();
            }

        }

        sleep(1);
    }
    return 0;
}
