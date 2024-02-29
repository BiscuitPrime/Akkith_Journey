#pragma once
#include <iostream>

/// <summary>
/// Class defining all actors within the game (players and NPCs)
/// </summary>
class Actor {
private:
protected:
	int _id;
	std::string _name;
public:
	Actor(int nid, std::string name);
	int GetId() { return _id; }
	std::string GetName() { return _name; }
};