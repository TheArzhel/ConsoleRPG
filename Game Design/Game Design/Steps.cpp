#include "Steps.h"

void GameController::StartGame()
{
	
	Teams.FillAllyParty();
	Teams.FillEnemyPatry();

	Game.start();

	Game.Attack(Teams.Kieran);
	Game.Attack(Teams.Warth);
	Game.Attack(Teams.Martial);

	// for (int i = 0; i )
}


