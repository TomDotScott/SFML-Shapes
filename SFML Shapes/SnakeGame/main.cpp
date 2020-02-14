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
#include "Shape.h";

int main()
{
	//seed the random number generator
	std::srand(time(NULL));

    // All SFML types and functions are contained in the sf namespace

    // Create an instance of the SFML RenderWindow type which represents the display
    // and initialise its size and title text
    sf::RenderWindow window(sf::VideoMode(800, 600), "C++ Snake ICA : U0018197");

	std::vector<Shape*> shapes;

	//add 100 shapes to the shapes vector
	for (size_t i = 0; i < 1000; i++)
	{
		if (rand() % 2 == 0) {
			Circle* circle = new Circle(sf::Color(rand() % 255, rand() % 255, rand() % 255), sf::Vector2f(rand() % 800, rand() % 600), rand() % 10);
			shapes.push_back(circle);
			std::cout << "CIRCLE: " << sizeof(circle) << std::endl;
		}
		else {
			Rectangle* rectangle = new Rectangle(sf::Color(rand() % 255, rand() % 255, rand() % 255), sf::Vector2f(rand() % 800, rand() % 600), rand() % 200, rand() % 50);
			shapes.push_back(rectangle);
			std::cout << "RECTANGLE: " << sizeof(rectangle) << std::endl;
		}
	}

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

		for (Shape* shape : shapes) {
			shape->Render(window);
		}

        // Get the window to display its contents
        window.display();
    }

    std::cout << "SnakeGame: Finished" << std::endl;

    return 0;
}
