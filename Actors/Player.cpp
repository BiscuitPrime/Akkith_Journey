#include "Player.h"

Player::Player(int nid, std::string name) : Actor(nid,name)
{
	_inventory = new Inventory();
}