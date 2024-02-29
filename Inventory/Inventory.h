#pragma once
#include <vector>
#include "Items/Item.h"
#include "../Drawable.h"

/// <summary>
/// Class that will represent the inventory of the player.
/// It will contain a vector of pointers of all the items the player possesses
/// </summary>
class Inventory : public Drawable
{
private:
	std::vector<Item*> _items;
protected:
public:
	Inventory();
	int AddItem(Item* item);
	std::vector<Item*> GetItems() { return _items; }
	void Draw() override;
};