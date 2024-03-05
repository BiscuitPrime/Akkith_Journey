#pragma once
#include <vector>
#include "../Utils/Drawable.h"


/// <summary>
/// This class will be the standard event of the game.
/// The game itself will just be a massive linked list of events, each event being either Exploration or Encounter.
/// - Exploration is just a description of a terrain, sometimes with containers or items to be taken, and usually with choices where to go next
/// - Encounter is an enemy (or ally) encounter, that can result in combat.
/// </summary>
class Event : public Drawable
{
protected:
	int _id;
public:
	Event(int nid);
	~Event();
	int GetID() const { return _id; }
	void Draw() override { cerr << "LOADED CURRENT EVENT : " + to_string(_id) << endl; };
};

/// <summary>
/// The base node of the Event structure.
/// Basically, each event can lead to different events (through a vector<EventNode*>) forming a tree. 
/// Each node contains its event.
/// The node id should roughly indicates its ""position"" in the tree (0 for starting event).
/// </summary>
struct EventNode 
{
	int NodeId;
	Event* Event;
	std::vector<EventNode*> NextNodes;
	~EventNode() {};
};