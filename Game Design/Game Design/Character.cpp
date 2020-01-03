#include "Character.h"

void CharacterTeams::FillAllyParty()
{
	KieranStats.hp = 340;
	KieranStats.vtl = 88;
	KieranStats.atk = 94;
	KieranStats.def = 84;
	KieranStats.agl = 74;
	KieranStats.abl = 74;

	Kieran.name = "Kieran  ";
	Kieran.SpecialAtacks = 2;
	Kieran.stats = KieranStats;
	Kieran.SpecialAtackNames[0] = "Embrace";
	Kieran.SpecialAtackNames[1] = "Silence";
	Kieran.specialCost[0] = 15;
	Kieran.specialCost[1] = 30;
	Kieran.ID = 1;

	WarthStats.hp = 350;
	WarthStats.vtl = 75;
	WarthStats.atk = 114;
	WarthStats.def = 50;
	WarthStats.agl = 76;
	WarthStats.abl = 84;

	Warth.name = "Warth  ";
	Warth.SpecialAtacks = 3;
	Warth.stats = WarthStats;
	Warth.SpecialAtackNames[0] = "Touch";
	Warth.SpecialAtackNames[1] = "Onda";
	Warth.SpecialAtackNames[2] = "Grip";
	Warth.specialCost[0] = 5;
	Warth.specialCost[1] = 5;
	Warth.specialCost[2] = 10;
	Warth.ID = 2;

	MartialStats.hp = 470;
	MartialStats.vtl = 94;
	MartialStats.atk = 84;
	MartialStats.def = 94;
	MartialStats.agl = 49;
	MartialStats.abl = 0;

	Martial.name = "Martial  ";
	Martial.SpecialAtacks = 0;
	Martial.stats = MartialStats;
	Martial.SpecialAtackNames[0] = "none";
	Martial.SpecialAtackNames[1] = "none";
	Martial.SpecialAtackNames[2] = "none";
	Martial.specialCost[0] = 0;
	Martial.specialCost[1] = 0;
	Martial.specialCost[2] = 0;
	Martial.ID = 3;

	Ally.character1 = Kieran;
	Ally.character2 = Warth;
	Ally.character3 = Martial;
	Ally.Party_number = 3;
	Ally.Ally = true;
}

void CharacterTeams::FillEnemyPatry()
{
	MaldurStats.hp = 1210;
	MaldurStats.vtl = 100;
	MaldurStats.atk = 97;
	MaldurStats.def = 228;
	MaldurStats.agl = 66;
	MaldurStats.abl = 100;

	Maldur.name = "Col Maldur  ";
	Maldur.SpecialAtacks = 1;
	Maldur.stats = MaldurStats;
	Maldur.SpecialAtackNames[0] = "Telekinesis";
	Maldur.specialCost[0] = 15;
	Maldur.ID = 0;

	Enemy.character1 = Maldur;
	Enemy.Party_number = 1;
	Enemy.Ally = false;

}
