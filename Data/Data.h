#pragma once
/**
*	This header file will contain ALL the defined variables and data of the game.
*	The reason is that the entire game is going to be console-based i.e. a lot of text. To simplify its creation, all the displayed text will be defined here :
*	As such, any changes will immediately be reflected everywhere else in the game
*	AS A RULE, WE SHOULD TRY TO HAVE AS MANY DEFINES MACRO HERE AS POSSIBLE TO STREAM LINE PROCESS IN OTHER GAME CLASSES
*	Name rules :
*	- Symbol		:	means a character or a list of characters
*	- Generic_Name	:	means the generic name used in the game, informal and not bound to player-defined variables and parameters
*	- Separator		:	means an element used to separates other words, contains the necessary space usually
*	- Title			:	means that the element should be used at the beginning of a paragraphe or as an important starting line
*/

// Lines and visual elements ------------------------
#define BIG_LINE_LENGTH 40
#define BIG_LINE_SYMBOL '='
#define BIG_LINE std::string(BIG_LINE_LENGTH, BIG_LINE_SYMBOL)
#define SMALL_LINE_LENGTH BIG_LINE_LENGTH
#define SMALL_LINE_SYMBOL '-'
#define SMALL_LINE std::string(SMALL_LINE_LENGTH, SMALL_LINE_SYMBOL)
#define START_PARAGRAPHE_SYMBOL ">"
#define DOUBLE_SEPARATOR " : "
#define SPACE_SEPARATOR " "
#define LINE_SEPARATOR ""
// --------------------------------------------------

// Names --------------------------------------------
#define GAME_NAME "Akkith's Journey"
#define PLAYER_NAME "Akkith"
#define PLAYER_GENERIC_NAME "Player"
// --------------------------------------------------

// Items --------------------------------------------
#define ITEM_GENERIC_NAME "Item"
#define ITEM_GENERIC_DESCRIPTION_NAME "Description"
// --------------------------------------------------

// Inventory ----------------------------------------
#define INVENTORY_NAME "Inventory"
#define INVENTORY_TITLE (PLAYER_GENERIC_NAME SPACE_SEPARATOR INVENTORY_NAME DOUBLE_SEPARATOR)
#define ITEM_INVENTORY_NAME_TITLE (START_PARAGRAPHE_SYMBOL SPACE_SEPARATOR ITEM_GENERIC_NAME DOUBLE_SEPARATOR)
#define ITEM_INVENTORY_DESCRIPTION_TITLE (ITEM_GENERIC_DESCRIPTION_NAME DOUBLE_SEPARATOR)
// --------------------------------------------------