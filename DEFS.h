#ifndef DEFS_H
#define DEFS_H

#include "CMUgraphicsLib\CMUgraphics.h"

// This file contains some global constants and definitions to be used in the project.

enum ActionType // The actions supported (add more as needed)
{
	//  [1] Actions of Design Mode
	SET_FLAG_CELL,	// Set Flag on a Cell

	///TODO: Add more action types of Design Mode

	SET_ANTENNA,
	SET_BELT,
	SET_WATER_PIT,
	SET_DANGER_ZONE,
	SET_WORKSHOP,
	SET_ROTATING_GEAR,
	COPY_GAME_OBJECT,
	CUT_GAME_OBJECT,
	PASTE_GAME_OBJECT,
	DELETE_GAME_OBJECT,
	SAVE_GRID,
	LOAD_GRID,
	TO_PLAY_MODE,	// Go to Play Mode
	EXIT,			// Exit Application





	//  [2] Actions of Play Mode

	//EXECUTE_COMMANDS,	// Execute the saved commands
	//SELECT_COMMAND,		// Select a command from the available ones to be executed

	//TO_DESIGN_MODE,	// Go to Design Mode

	///TODO: Add more action types of Play Mode

	SELECT_COMMAND,
	EXECUTE_COMMANDS,
	REBOOT,
	USE_CONSUMABLE,
	NEW_GAME,
	TO_DESIGN_MODE,
	EXITP,



	//  [3] Others

	EMPTY,							// Empty Area in ToolBar (NOT inside any action icon)
	GRID_AREA,						// Inside Grid Area
	STATUS 							// Inside StatusBar Area
};

enum Direction // Directions of the game
{
	UP,
	DOWN,
	RIGHT,
	LEFT
};

enum Command
{
	NO_COMMAND,
	MOVE_FORWARD_ONE_STEP,
	MOVE_BACKWARD_ONE_STEP,
	MOVE_FORWARD_TWO_STEPS,
	MOVE_BACKWARD_TWO_STEPS,
	MOVE_FORWARD_THREE_STEPS,
	MOVE_BACKWARD_THREE_STEPS,
	ROTATE_CLOCKWISE,
	ROTATE_COUNTERCLOCKWISE,

	COMMANDS_COUNT,
};

#endif