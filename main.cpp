/*******************************************************************************
** Program Name: Group Project - Predator Prey Game
** Authors: Kelly von Borstel, Eric Edwards, Louie Nicastro, Martin Sevrin
** Date: 2/17/2018
** Description: This program creates a prey predator simulation with ants as the
** prey and doodlebugs as the predators. The doodlebugs move around the board,
** eating ants, breeding, and starving if not eating frequently. The ants move
** around the board and breed. The user is prompted for board dimensions, number
** of ants and doodlebugs, and number of game steps. Recommended inputs are 20
** rows, 20 columns, 5 doodlebugs, 100 ants, and at least 100 steps to see a
** good representation of the simulation. To run the program, type "make" at the
** command line, then type "./game", then follow the prompts.
*******************************************************************************/

#include <cstdlib>
#include <ctime>

#include "simulation.hpp"

int main()
{
	srand(time(0));
    Simulation game;
	return 0;
}
