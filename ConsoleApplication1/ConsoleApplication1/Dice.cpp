#include "Dice.h"
#include<ctime>
#include<cstdlib>

Dice::Dice(int Sides)
{
	rolls = 0;

	sides = Sides;
	
	srand(time(NULL));

}

int Dice::Roll()
{
	rolls++;
	return rand() % sides + 1;
}

int Dice::GetRolls()
{
	return rolls;
}

int Dice::GetSides()
{
	return sides;
}