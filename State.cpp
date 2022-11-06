#include "State.h"

State::State(sf::RenderWindow* window)
{
	this->window = window;
	this-> quit = false;
}

State::~State()
{

}

const bool& State::getQuit() const
{
	return this->quit;
}

void State::checkForQuit()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		this->quit = true;
	}
}

void State::updateMousePositions()
{
	this->mousePosScreen = sf::Mouse::getPosition();
	this->mousePosWindow = sf::Mouse::getPosition(*this->window);
	this->mousePosView = this ->window->mapPixelToCoords(sf::Mouse::getPosition(*this->window));
}
