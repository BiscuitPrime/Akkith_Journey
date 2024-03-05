#pragma once
#include "../Actors/Player.h"
#include "../Events/Event.h"

/// <summary>
/// The game manager class is the class that will control the overall workings of the game, using data created in main
/// </summary>
class GameManager {
private:
	Player* _player;
	EventNode* _curEventNode;
	Event* _curEvent;
private:
	void StartEvent();
public:
	GameManager(Player* player, EventNode* startingNode);
	~GameManager() {};
	void LoadNewEvent();
};
