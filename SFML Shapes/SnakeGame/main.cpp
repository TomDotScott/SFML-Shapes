/*
  Games Development with C++ GAV1031-N
  Snake ICA start project 
  
  Set up to use the SFML 2.5.1 64-bit API
    SFML documentation: https://www.sfml-dev.org/learn.php
*/

#include <iostream>

// SFML header file for graphics, there are also ones for Audio, Window, System and Network
#include <SFML/Graphics.hpp>
#include "circle.h"
#include "Rectangle.h"

int main()
{
    // All SFML types and functions are contained in the sf namespace

    // Create an instance of the SFML RenderWindow type which represents the display
    // and initialise its size and title text
    sf::RenderWindow window(sf::VideoMode(800, 600), "C++ Snake ICA : U0018197");

	Circle circle = Circle(sf::Color(255, 0, 124), sf::Vector2f(400, 300), 50);
	Rectangle rectangle = Rectangle(sf::Color(255, 0, 0), sf::Vector2f(100, 150), 200, 50);

    // We can still output to the console window
    std::cout << "SnakeGame: Starting" << std::endl;

    // Main loop that continues until we call window.close()
    while (window.isOpen())
    {
        // Handle any pending SFML events
        // These cover keyboard, mouse,joystick etc.
        sf::Event event;
        while (window.pollEvent(event))
        {
          switch(event.type)
          {
            case sf::Event::Closed:
              window.close();
            break;
            default:
              break;
          }
        }


        // We must clear the window each time around the loop
        window.clear();

		circle.Render(window);
		rectangle.Render(window);

        // Get the window to display its contents
        window.display();
    }

    std::cout << "SnakeGame: Finished" << std::endl;

    return 0;
}
