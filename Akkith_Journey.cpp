#include "Akkith_Journey.h"
using namespace std;
#include "Actors/Actor.h"
#include "Actors/Player.h"
#include "Inventory/Items/Item.h"
#include "Data/Data.h"

//Main game sequence :
int main()
{
	cout << GAME_NAME <<" Game Beginning" << endl; //TODO : REMOVE
	
	Player player = Player(0, "Player");
	cout << "Created "<<PLAYER_GENERIC_NAME<< " with parameters : ID= " << player.GetId() << ", Name= " << player.GetName() << endl; //TODO : Move to Player class with Drawable
	
	Item new_item = Item(0,"sword","lorem ipsum");
	player.GetInventory()->AddItem(&new_item);
	cout << "Added to "<<PLAYER_GENERIC_NAME<<" "<<INVENTORY_NAME << " item : " << player.GetInventory()->GetItems()[0]->GetName() << endl; //TODO : Move to Item class with Drawable
	Item new_item2 = Item(1, "Hammer", "ubqdyuqzbuhdqzbdhzqbdh qzuidhqizjdbq izhdzqdu iqh dzbq bq bqzd"); 
	player.GetInventory()->AddItem(&new_item2);

	player.GetInventory()->Draw(); //in the game itself, if we wanna display something, we should ALWAYS use a draw function (that comes from Drawable.h)

	return 0;
}
