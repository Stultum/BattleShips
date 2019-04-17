#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	const int n = 11;
	const int m = 11;
	int  i, j;
	char a[n][n] = { {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'},
				   {'1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
				   {'2', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
				   {'3', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
				   {'4', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
				   {'5', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
				   {'6', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
				   {'7', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
				   {'8', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
				   {'9', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
				   {'10', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'}, };
	

	sf::RenderWindow window(sf::VideoMode(200, 200), "SFMLworks");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		for (i = 0; i < n; i++) {
			for (j = 0;j < m;j++) {
				printf("%2c", a[i][j]);
			}
			printf("\n");
		}
		window.draw(shape);
		window.display();
	}
	system("PAUSE");
	return 0;
}