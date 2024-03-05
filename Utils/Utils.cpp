#include "Utils.h"

/// <summary>
/// Function that will test if a string and another string can be considered equivalent i.e. are lowercase/uppercase of one another
/// </summary>
/// <param name="input">String : Inputted string</param>
/// <param name="reference">String : Reference string</param>
/// <returns>Boolean : true if strings are equivalent, false otherwise</returns>
bool Utils::AreStringsEquivalent(string input, string reference)
{
	if (input == reference) {
		return true;
	}

	if (input.size() != reference.size()) {
		return false;
	}

	int i = 0;
	char c;
	string upperRef = "";
	while (reference[i])
	{
		c = reference[i];
		upperRef += toupper(c);
		i++;
	}
	i = 0;
	string upperInput;
	while (input[i]) {
		c = input[i];
		upperInput += toupper(c);
		i++;
	}
	if (upperInput == upperRef) {
		return true;
	}
	else {
		return false;
	}
}
