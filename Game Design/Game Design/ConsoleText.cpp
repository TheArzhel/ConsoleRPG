#include "ConsoleText.h"

void Text::start()
{
	cout << "Your party starts and encounter with Col Maldur "<<endl;
	system("pause");
}

void Text::Attack(Character toattack)
{
	cout << toattack.name.data() << " is preparing his acction" << endl;
	cout << "Select an acction (press the number to the left)" << endl;
	int action;

	if (toattack.SpecialAtacks != 0  && toattack.stats.vtl != 0)
	{
		cout << "(1) Attack		(2) Defense		 (3) Special Attack		(4) Info " << endl;
		cin >> action;

		toattack.nextMove = action;

		switch (action)
		{
		case(1):
			cout << toattack.name.data() << " is ready to Attack" << endl;
			break;
		case(2):
			cout << toattack.name.data() << " is preparing his Defense" << endl;
			break;
		case(3):
			if (checkVitality(toattack))
			{
				//display Special attack menu
				DisplaySpecialAttackMenu(toattack);
			}
			break;
		case(4):
			//Display basic information 
			DisplayBasicInfo(toattack);
			Attack(toattack);
			break;

		default:
			Attack(toattack);
			break;
		}
	}
	else
	{
		cout << "(1) Attack		(2) Defense		(4) Info " << endl;
		cin >> action;
		toattack.nextMove = action;

		switch (action)
		{
		case(1):
			cout << toattack.name.data() << " is ready to Attack" << endl;
			break;
		case(2):
			cout << toattack.name.data() << " is preparing his Defense" << endl;
			break;
		
		case(4):
			//Display basic information 
			DisplayBasicInfo(toattack);
			Attack(toattack);
			break;

		default:
			Attack(toattack);
			break;
		}
		toattack.nextMove = action;
	}

	
	

	
}

bool Text::checkVitality(Character toattack)
{
	bool ret = false;

	for (int i = 0; i < 3; i++)
	{
		if (toattack.stats.vtl < toattack.specialCost[i])
		{
			ret = true;
			break;
		}

	}

	if (ret == false)
	{
		cout << "No Vitality (vtl) points needed to Special Attack" << endl;
	}

	return ret;
}

void Text::DisplaySpecialAttackMenu(Character toattack)
{
	cout << "Choose an special Attack" << endl;
	int action;

	for (int i = 0; i < toattack.SpecialAtacks; i++)
	{
		cout << "  " << "(" << i+1 << ")" << toattack.SpecialAtackNames[i].data() << "     ";
	}
	

	cout << " (4) Info" << endl;

	cin >> action;
	toattack.nextSpecialMove = action;
	if (action == 4)
	{
		DisplaySpecialAtackInfo(toattack);
		system("pause");

		DisplaySpecialAttackMenu(toattack);
	}
	else
	{
		if (toattack.stats.vtl >= toattack.specialCost[action - 1])
		{
			cout << toattack.name.data() << " selected to " << toattack.SpecialAtackNames[action - 1].data() << endl;
		}
		else 
		{
			cout << "Not enought vitality, please select other attack" << endl;
			DisplaySpecialAttackMenu(toattack);
		}

	}

}

void Text::DisplayBasicInfo(Character toattack)
{
	cout << "Attack: Hit the enemy and apply some damage" << endl;
	cout << "Defend: Prepare to recive the enemy attack and counter attack" << endl;
	cout << "Special Atack: Select on of the options if you have enough vitality. Powerfull attacks" << endl;

	cout << toattack.name.data() << "HP" << toattack.stats.hp << endl;
	cout << toattack.name.data() << "Vitality" << toattack.stats.vtl << endl;
	
}

void Text::DisplaySpecialAtackInfo(Character toattack)
{
	if (toattack.name.data() == "Kieran")
	{
		cout << "Kieran list of Special Attacks:" << endl;
		cout << "Embrace: Boost a Attack and Defense for the next attack. Cost: 15 vtl" << endl;
		cout << "Silence: Boost a stat to the maximun value for one move. Cost 30 vtl" << endl;
	}
	else if (toattack.name.data() == "Warth")
	{
		cout << "Warth list of Special Attacks:" << endl;
		cout << "Touch: Drains enemy vtl points. Cost: 5 vtl" << endl;
		cout << "Onda: Stunt enemy for the next turn. Cost: 5 vtl" << endl;
		cout << "Grip: Holds the enemy tight darining vitaility and stopping attacker and enemy for 2 turns. Cost: 10" << endl;
	}
	else if (toattack.name.data() == "Martial")
	{
		cout << "Martial has no Special Attacks:" << endl;
		
	}
}
