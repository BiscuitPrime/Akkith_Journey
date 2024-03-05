#include "Event.h"

Event::Event(int nid) : _id{nid}
{
	PrintLine("Created event with ID : " + std::to_string(nid));
}

Event::~Event()
{
}
