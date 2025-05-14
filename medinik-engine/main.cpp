#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode({512, 512}), "Medinik Engine", sf::Style::Close | sf::Style::Titlebar);

	while (window.isOpen()) 
	{
        while (const std::optional event = window.pollEvent())
        {
			if (event->is<sf::Event::Closed>()) {
				window.close();
			}
        }
	}

	return 0;
}