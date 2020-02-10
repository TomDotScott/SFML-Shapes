#pragma once
#include "SFML/Graphics.hpp"

class Circle
{
private:
	sf::Vector2f position;
	sf::Color colour;
	float radius;
	sf::CircleShape circle;
public:
	void Render(sf::RenderWindow& window);
	Circle();
	Circle(sf::Color colourToBe, sf::Vector2f vector, float radius);
};

