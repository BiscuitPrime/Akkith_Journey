#pragma once
#include "Actor.h"
#include "../Inventory/Inventory.h"

/// <summary>
/// Class of the player
/// </summary>
class Player : public Actor
{
private:
	Inventory* _inventory;
protected:
public:
	Player(int nid, std::string name);
	~Player() { delete _inventory; }
	Inventory* GetInventory() const { return _inventory; }
};