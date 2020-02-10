#pragma once
#include "SFML/Graphics.hpp"

class Rectangle
{
private:
	sf::Vector2f position;
	sf::Color colour;
	float height;
	float width;
	sf::RectangleShape rectangle;
public:
	void Render(sf::RenderWindow& window);
	Rectangle();
	Rectangle(sf::Color colourToBe, sf::Vector2f vector, float heightToBe, float widthToBe);
};
