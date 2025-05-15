#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode({512, 512}), "Medinik Engine", sf::Style::Close | sf::Style::Resize);

	while (window.isOpen())  {
		// Events related to the window itself
		while (const std::optional event = window.pollEvent()) {
			if (event->is<sf::Event::Closed>()) {
				window.close();
			}
			else if (event->is<sf::Event::Resized>()) {
				std::cout << "The window has been resized!\n";
			}
		}
	}
	return 0;
}