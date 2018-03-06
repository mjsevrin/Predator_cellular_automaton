/*******************************************************************************
** Program Name: Group Project - Predator Prey Game
** Authors: Kelly von Borstel, Eric Edwards, Louie Nicastro, Martin Sevrin
** Date: 2/17/2018
** Description: This is declaration file for the doodlebug class. It is derived
** from critter class and inherits member variables for age, bools to keep
** track of whether is has already moved on a step, and to keep track if it is
** the right age to breed. It also inherits functions to get and increment age,
** get symbol for board, get and set hasMoved, and get canBreed. The move class
** is overridden to assign canBreed true if doodlebug's age is divisible by 8.
** Functions unique to the doodlebug class include getLastMeal, resetLastMeal,
** and hasStarved.
*******************************************************************************/

#ifndef DOODLEBUG_HPP
#define DOODLEBUG_HPP	

#include "critter.hpp"

class Doodlebug : public Critter
{
	private:
		int lastMeal;

	public:
		Doodlebug();
		virtual ~Doodlebug();
		int getLastMeal();
        void incrementLastMeal();
        void resetLastMeal();
        virtual void move();
        bool hasStarved();
};

#endif
