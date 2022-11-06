#ifndef MAINMENUSTATE_H
#define MANIMENUSTATE_H

#include"GameState.h"
#include"Button.h"
class MainMenuState :
    public State
{

private:
    sf::RectangleShape background;
    sf::Font font;
    
    std::map<std::string, Button*> buttons;

    //functions
    void initFonts();
    void initButtons();

public:
    MainMenuState(sf::RenderWindow* window);
    virtual ~MainMenuState();

    //Functions
    void endState();

    void updateKeybinds(const float& dt);
    void updateButtons();
    void update(const float& dt);
    void renderButtons(sf::RenderTarget* target = NULL);
    void render(sf::RenderTarget* target = NULL);
};

#endif