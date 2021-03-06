#pragma once
#include "SFML/Graphics.hpp"
#include "const.h"

class SplashScreen {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	SplashScreen(std::string file_name, float scale_x, float scale_y) {
		texture.loadFromFile(file_name);
		sprite.setTexture(texture);
		sprite.setScale(scale_x, scale_y);
		sprite.setColor(sf::Color(255, 228, 181));
	}
	
	sf::Sprite getSprite() { return sprite; }
};