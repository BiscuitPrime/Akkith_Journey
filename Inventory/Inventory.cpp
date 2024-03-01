#include "Inventory.h"

Inventory::Inventory() 
{

}

/// <summary>
/// function used to add an item to the player's inventory
/// </summary>
/// <returns>0 if item was correctly added, -1 otherwise</returns>
int Inventory::AddItem(Item* item)
{
	_items.push_back(item);
	return 0;
}

/// <summary>
/// Function used to draw the inventory
/// </summary>
void Inventory::Draw()
{
	PrintLine(BIG_LINE);
	PrintLine(INVENTORY_TITLE);
	PrintLine();
	for (Item* item : _items) 
	{
		PrintLine(SMALL_LINE);
		string words[] = { ITEM_INVENTORY_NAME_TITLE, item->GetName() };
		PrintLine(words,2);
		string words2[] = { ITEM_INVENTORY_DESCRIPTION_TITLE, item->GetName() };
		PrintLine(words2, 2);
		PrintLine(SMALL_LINE);
		PrintLine();
	}
	PrintLine(BIG_LINE);
}
