#include "GameManager.h"


GameManager::GameManager(Player* player, EventNode* startingEventNode) : _player{player},_curEventNode{startingEventNode}, _curEvent{startingEventNode->Event}
{
	StartEvent();
}

/// <summary>
/// Loads a new event. When said event is completed, the loop will change event (or finish the game depending on player death or not).
/// </summary>
void GameManager::LoadNewEvent()
{

}

void GameManager::StartEvent()
{
	if (_curEvent != NULL) 
	{
		_curEvent->Draw();
	}
}