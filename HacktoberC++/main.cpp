// Frameworks
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <time.h>

// Header Classes
#include "util.hpp"
#include "Object.hpp"
#include "player.hpp"
#include "game.hpp"

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800,600), "Test Window");
    
    Game game = Game();
    
    while (window.isOpen())
    {
        // Updates
        
        game.update(0.1, window);
        
        // Rendering
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        
        window.clear(sf::Color(0,0,0));
        
        game.draw(window);
        
        window.display();
    }
    
    return 0;
}
