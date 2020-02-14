#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

class Circle : Shape
{
private:
	float radius = 1;
	sf::CircleShape circle;
public:
	void Render(sf::RenderWindow& window);
	Circle();
	Circle(sf::Color colourToBe, sf::Vector2f vector, float radius);
};

