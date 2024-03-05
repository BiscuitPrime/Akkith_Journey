#include "Akkith_Journey.h"
using namespace std;
#include "Actors/Actor.h"
#include "Actors/Player.h"
#include "Inventory/Items/Item.h"
#include "Data/Data.h"
#include "Input/PlayerInputHandler.h"
#include "System/GameManager.h"

//Main game sequence :
int main()
{
	//TODO : MAIN SHOULDN'T PRINT ANYTHING => Only Drawable-derived classes should print

	cout << GAME_NAME <<" Game Beginning" << endl; //TODO : REMOVE
	
	Player player = Player(0, "Player");
	cout << "Created "<<PLAYER_GENERIC_NAME<< " with parameters : ID= " << player.GetId() << ", Name= " << player.GetName() << endl; //TODO : Move to Player class with Drawable
	
	Item new_item = Item(0,"sword","lorem ipsum");
	player.GetInventory()->AddItem(&new_item);
	cout << "Added to "<<PLAYER_GENERIC_NAME<<" "<<INVENTORY_NAME << " item : " << player.GetInventory()->GetItems()[0]->GetName() << endl; //TODO : Move to Item class with Drawable
	Item new_item2 = Item(1, "Hammer", "ubqdyuqzbuhdqzbdhzqbdh qzuidhqizjdbq izhdzqdu iqh dzbq bq bqzd"); 
	player.GetInventory()->AddItem(&new_item2);

	//player.GetInventory()->Draw(); //in the game itself, if we wanna display something, we should ALWAYS use a draw function (that comes from Drawable.h)

	auto inputHandler = PlayerInputHandler();
	//inputHandler.RequestPlayerInputSelection();

	//Creating events (should be handled by a creator/populate class rather than in main directly) :
	Event event0 = Event(0);
	Event event1 = Event(1);
	EventNode node0 = EventNode();
	EventNode node1 = EventNode();
	node0.NodeId = 0;
	node0.Event = &event0;
	node1.NodeId = 1;
	node1.Event = &event1;
	node0.NextNodes.push_back(&node1);

	GameManager manager = GameManager(&player,&node0);

	return 0;
}
