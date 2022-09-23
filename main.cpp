#include <SFML/Graphics.hpp>

class tree {
private:
	int xpos;
	int ypos;
	int size;
	sf::CircleShape circle;
	sf::RectangleShape rect;
public:
	tree(int x, int y, int s); //constructor
	void draw(sf::RenderWindow& window);
};

tree::tree(int x, int y, int s) {
	xpos = x;
	ypos = y;
	size = s;
}

void tree::draw(sf::RenderWindow& window) {
	circle.setRadius(size);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(xpos, ypos);
	rect.setSize(sf::Vector2f(45, 120));
	rect.setFillColor((sf::Color(180, 118, 82)));
	rect.setPosition(xpos+25, ypos+25);
	window.draw(rect);
	window.draw(circle);
}

class shrub {
private:
	int xpos;
	int ypos;
	int size;
	int size2;
	sf::CircleShape circle;
	sf::CircleShape circle2;
	sf::CircleShape circle3;
public:
	shrub(int x, int y, int s, int s2); //constructor
	void draw(sf::RenderWindow& window);
};

shrub::shrub(int x, int y, int s, int s2) {
	xpos = x;
	ypos = y;
	size = s;
	size2 = s2;
}

void shrub::draw(sf::RenderWindow& window) {
	circle.setRadius(size);
	circle.setFillColor((sf::Color(74, 182, 15)));
	circle.setPosition(xpos, ypos);
	circle2.setRadius(size2);
	circle2.setFillColor((sf::Color(74, 182, 15)));
	circle2.setPosition(xpos-10, ypos+25);
	circle3.setRadius(size2);
	circle3.setFillColor((sf::Color(74, 182, 15)));
	circle3.setPosition(xpos + 30, ypos + 25);
	window.draw(circle);
	window.draw(circle2);
	window.draw(circle3);
}
tree t1(100, 100, 50);
tree t2(300, 300, 50);
tree t3(250, 450, 50);
tree t4(450, 50, 50);

shrub s1(175, 500, 40, 30);
shrub s2(400, 600, 40, 30);
shrub s3(100, 50, 40, 30);
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Trees"); //set up screen
	sf::CircleShape circle;
	sf::RectangleShape rect;



	while (window.isOpen())//GAME LOOP--------------------------------
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}

		//render section-------------------------------
		window.clear();
		t1.draw(window);
		t2.draw(window);
		t3.draw(window);
		t4.draw(window);

		s1.draw(window);
		s2.draw(window);
		s3.draw(window);

		window.display(); //flip the buffer

	}//end game loop-------------------------------------------------

	return 0;
} //end main
