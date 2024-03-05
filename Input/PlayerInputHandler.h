#pragma once
#include "../Utils/Drawable.h"
#include "../Utils/Utils.h"

class PlayerInputHandler : public Drawable
{
private:
	void ListenToPlayerInput();
	void ListenToPlayerInput(string inputRequested);
public:
	PlayerInputHandler() {};
	~PlayerInputHandler() {};
	void RequestPlayerInput();
	void RequestPlayerInput(string inputRequested);
	void RequestPlayerInputSelection();
	void Draw() override {};
};