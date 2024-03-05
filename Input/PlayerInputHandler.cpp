#include "PlayerInputHandler.h"

/// <summary>
/// Function that will request any player player input, used mainly for continue/acknowledges that the player wants to continue 
/// </summary>
void PlayerInputHandler::RequestPlayerInput()
{
	PrintLine(INPUT_REQUEST_GENERIC);
	ListenToPlayerInput();
}

/// <summary>
/// Function that will request a specific input entry from the player
/// </summary>
/// <param name="inputRequested">String : input requested from the player to continue</param>
void PlayerInputHandler::RequestPlayerInput(string inputRequested)
{
	PrintLine(INPUT_REQUEST_INTRO+inputRequested+INPUT_REQUEST_OUTRO);
	ListenToPlayerInput(inputRequested);
}

/// <summary>
/// Function that will listen to all player inputs, and IF that input corresponds to a game option, will trigger the appropriate calls
/// </summary>
void PlayerInputHandler::RequestPlayerInputSelection()
{
	string input;
	do {
		PrintLine(INPUT_SELECTION_GENERIC);
		PrintLine(INPUT_INVENTORY_SELECTION_TEXT);
		PrintLine(INPUT_STATISTICS_SELECTION_TEXT);
		cin >> input; cin.ignore();
	} while (!Utils::AreStringsEquivalent(input,INPUT_INVENTORY_KEY) && !Utils::AreStringsEquivalent(input, INPUT_STATISTICS_KEY));

	if (Utils::AreStringsEquivalent(input, INPUT_INVENTORY_KEY))
	{
		cerr << "INVENTORY KEY PRESSED" << endl;
	}
	else if (Utils::AreStringsEquivalent(input, INPUT_STATISTICS_KEY))
	{
		cerr << "STATS KEY PRESSED"<<endl;
	}
}

void PlayerInputHandler::ListenToPlayerInput()
{
	string input;
	cin >> input; cin.ignore();
}

void PlayerInputHandler::ListenToPlayerInput(string inputRequested)
{
	string input;
	cin >> input; cin.ignore();
	if (!Utils::AreStringsEquivalent(input,inputRequested)) {
		RequestPlayerInput(inputRequested);
	}
}
