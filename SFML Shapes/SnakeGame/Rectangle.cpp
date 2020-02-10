#include "Rectangle.h"
#include "SFML/Graphics.hpp"

void Rectangle::Render(sf::RenderWindow& window) {
	window.draw(rectangle);
}

Rectangle::Rectangle() {

}

Rectangle::Rectangle(sf::Color colourToBe, const sf::Vector2f vector, float heightToBe, float widthToBe) {
	colour = colourToBe;
	position = vector;
	height = heightToBe;
	width = widthToBe;
	rectangle = sf::RectangleShape(sf::Vector2f(height, width));
	rectangle.setFillColor(colourToBe);
	rectangle.setPosition(vector);
}