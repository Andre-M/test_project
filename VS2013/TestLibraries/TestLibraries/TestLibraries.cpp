// TestLibraries.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <boost/lambda/lambda.hpp>


int _tmain(int argc, _TCHAR* argv[])
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		std::cout << "window.isOpen()" << std::endl;
		sf::Event event;
		while (window.pollEvent(event))
		{
			std::cout << "window.pollEvent(event)" << std::endl;
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}


	return 0;
}