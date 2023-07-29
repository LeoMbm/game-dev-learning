#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
// #ifndef GAME_H
// #define GAME_H
class Game {
/* 
    Class that acts as the game engine.
*/

private:
    // Variables
    sf::RenderWindow* window;
    sf::Event ev;
    sf::VideoMode videoMode;
    sf::Clock dtClock;
    float dt;

    void initVariables();
    void initWindow();

public:
    // Constructor / Destructor
    Game();
    virtual ~Game();

    // Functions
    void update();
    void render();
    const bool running() const;
    void pollEvents();
    
};
// #endif // GAME_H
