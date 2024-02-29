#pragma once
#include <iostream>
using namespace std;

#define BIG_LINE_LENGTH 40
#define BIG_LINE_SYMBOL '='
#define SMALL_LINE_LENGTH BIG_LINE_LENGTH
#define SMALL_LINE_SYMBOL '-'

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
}; 