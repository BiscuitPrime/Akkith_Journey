#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Data/Data.h"

/// <summary>
/// Interface that will be used by every entity that can be "drawn"
/// Being "drawn" means being displayed on the console with a specific design
/// Hence, every element of the game that must be displayed will use that interface
/// </summary>
class Drawable
{
public:
	/// <summary>
	/// Virtual function that will be used to draw the element
	/// </summary>
	virtual void Draw()=0;
protected:
	void PrintLine();
	void PrintLine(string word);
	void PrintLine(string words[], int size);
}; 