#include "circle.h"
#include "SFML/Graphics.hpp"


void Circle::Render(sf::RenderWindow& window)
{
	window.draw(circle);
}

Circle::Circle(sf::Color colourToBe, const sf::Vector2f vector, float radiusToBe) {
	colour = colourToBe;
	position = vector;
	radius = radiusToBe;
	circle = sf::CircleShape(radiusToBe);
	circle.setFillColor(colourToBe);
	circle.setPosition(vector);
}