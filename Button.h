#ifndef BUTTON_H
#define BUTTON_H

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include<sstream>
#include<vector>
#include<stack>
#include<map>

#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>

enum button_states{BTN_IDLE = 0,BTN_HOVER,BTN_ACTIVE};

class Button
{
private:
	short unsigned buttonState;

	sf::RectangleShape shape;
	sf::Font* font;
	sf::Text text;


	sf::Color idleColor;
	sf::Color hoverColor;
	sf::Color activeColor;

public:
	Button(float x,float y, float width, float height,
		sf::Font*font,std :: string text,
		sf::Color idleColor,sf::Color hoverColor, sf::Color activeColor);
	~Button();

	//Accessors
	const bool isPressed() const;

	//Function
	void update(const sf::Vector2f mousePos);
	void render(sf::RenderTarget* target);
};

#endif
