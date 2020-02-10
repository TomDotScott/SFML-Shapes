#pragma once
#include "SFML/Graphics.hpp"

class circle
{
private:
	sf::Vector2f position;
	sf::Color colour;
	float radius;
public:
	void Render(sf::RenderWindow& window);
};

