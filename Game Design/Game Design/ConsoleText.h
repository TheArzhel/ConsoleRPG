#ifndef __CONSOLTEXT_H__
#define __CONSOLTEXT_H__

#include "Globals.h"
#include "Character.h"

class Text
{
public:
	//funtions
	void start();
	void Attack(Character toattack);
	bool checkVitality(Character toattack);
	void DisplaySpecialAttackMenu(Character toattack);
	void DisplayBasicInfo(Character toattack);
	void DisplaySpecialAtackInfo(Character toattack);

};

#endif