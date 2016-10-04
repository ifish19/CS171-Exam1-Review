#pragma once

class Dice
{
private:

	int sides;
	int rolls;

public:

	Dice(int);			// The constructor sets the number of sides of the die.
						// The constructor also calls srand() to initialize 
						// the random number generator.
	int Roll();			// Returns the results of a roll
						// i.e. a random value between 1 and the number of sides of the die
	int GetRolls();		// Returns the number of times this dice was rolled since it was created.
	int GetSides();		// Returns the number of sides for this dice object.
};