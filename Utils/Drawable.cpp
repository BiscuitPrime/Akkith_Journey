#include "Drawable.h"

/// <summary>
/// Function that will print out a line
/// </summary>
void Drawable::PrintLine()
{
	cout << " " << endl;
}

/// <summary>
/// Function that will print out a line with the input word
/// </summary>
/// <param name="word"> : String : the word we want to print on a line</param>
void Drawable::PrintLine(string word)
{
	cout << word << endl;
}

/// <summary>
/// Function that will print out a line of multiple input words
/// </summary>
/// <param name="words"> : String[] : the words we want to print on a line in order</param>
/// <param name="size"> : int : size of the input array</param>
void Drawable::PrintLine(string words[], int size)
{
	string out="";
	for (int i=0;i<size;i++) 
	{
		out += words[i];
	}
	cout << out << endl;
}
