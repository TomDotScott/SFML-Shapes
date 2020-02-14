#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

class Rectangle : Shape
{
private:
	float height = 1;
	float width = 2;
	sf::RectangleShape rectangle;
public:
	void Render(sf::RenderWindow& window);
	Rectangle(sf::Color colourToBe, sf::Vector2f vector, float heightToBe, float widthToBe);
};
