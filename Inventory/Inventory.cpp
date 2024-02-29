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
void Inventory::Draw() //TODO : all the cout<< [...] <<endl could be replaced by a function/define to avoid unending repetition
{
	std::string lineStr = std::string(BIG_LINE_LENGTH, BIG_LINE_SYMBOL);
	std::string smlLineStr = std::string(SMALL_LINE_LENGTH, SMALL_LINE_SYMBOL);
	cout << lineStr << endl;
	cout << "Player Inventory : " << endl;
	cout << "" << endl;
	for (Item* item : _items) 
	{
		cout << smlLineStr << endl;
		cout << "Item : " << item->GetName() << endl;
		cout << "Description : " << item->GetDescription() << endl;
		cout << smlLineStr << endl;
		cout << "" << endl;
	}
	cout << lineStr << endl;
}
