#pragma once
#include "const.h"
#include "SFML/Graphics.hpp"
#include "player.h"
#include "fruit.h"
#include "bomb.h"
#include "text.h"
#include <vector>
#include <list>

class Game {
public:
	enum GameState { INTRO, PLAY, PAUSE, GAME_OVER };
	Game();
	void play();
private:
	void check_events();
	void update();
	void draw();
	void check_collisions();

	sf::RenderWindow window;
	Player player;
	GameState game_state = PLAY;
	std::vector<Fruit*> fruit_sprites;
	TextObj hp_text;
	std::list<Bomb*> bomb_sprites;
};
