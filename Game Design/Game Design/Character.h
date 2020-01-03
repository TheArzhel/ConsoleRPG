#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "Globals.h"

struct Stats
{
	int hp;
	int vtl;
	int atk;
	int def;
	int agl;
	int abl;

};

struct Character
{
	string name;
	Stats stats;
	int SpecialAtacks;
	int specialCost[3];
	string SpecialAtackNames[3];
	int nextMove;
	int nextSpecialMove;
	int ID;

};


struct Party {

	Character character1;
	Character character2;
	Character character3;


	//Item

	bool Ally;
	int Party_number;
};
struct control_Var
{

	int turns;
	int attacks;
	int defenses;
	int spAbilities;
	int Kieran_special1;
	int Kieran_special2;
	int Warth_special1;
	int Warth_special2;
	int Warth_special3;
	int Maldur_special1;
	float TotalDmgAlly; 
	float TotalDmgEnemy;
	int TurnZeroKieran;
	int TurnZeroMartial;
	int TurnZeroWarth;
	int TurnZeroMaaldur;
	int alliesWin;
	int enemyWin;  
	//fucntions to save vars in xmls;


};


class CharacterTeams
{
public:
	//structs and containers
	

public:

	//ally
	Party Ally;

	Character Kieran;
	Character Warth;
	Character Martial;

	Stats KieranStats;
	Stats WarthStats;
	Stats MartialStats;

	//enemy
	Party Enemy;

	Character Maldur;

	Stats MaldurStats;

public:

	void FillAllyParty();
	void FillEnemyPatry();
};
// fill the data of partys charactes values...
#endif