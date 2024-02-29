#pragma once
#include <string>

class Item {
private:
	int _id;
	std::string _name;
	std::string _description;
protected:
public:
	Item(int nid, std::string name, std::string description);
	int GetID() { return _id; }
	std::string GetName() const { return _name; }
	std::string GetDescription() const { return _description; }
};