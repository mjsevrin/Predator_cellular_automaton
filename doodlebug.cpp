/*******************************************************************************
** Program Name: Group Project - Predator Prey Game
** Authors: Kelly von Borstel, Eric Edwards, Louie Nicastro, Martin Sevrin
** Date: 2/17/2018
** Description: This is implementation file for the doodlebug class. It is
** derived from critter class and inherits member variables for age, bools to 
** keep track of whether is has already moved on a step, and to keep track if it
** is right age to breed. It also inherits functions to get and increment age,
** get symbol for board, get and set hasMoved, and get canBreed. The move class
** is overridden to assign canBreed true if doodlebug's age is divisible by 8.
** Functions unique to the doodlebug class include getLastMeal, resetLastMeal,
** and hasStarved.
*******************************************************************************/

#include "doodlebug.hpp"

Doodlebug::Doodlebug()
{
    this->lastMeal = 0;
    this->symbol = 'X';
}

Doodlebug::~Doodlebug()
{
}

int Doodlebug::getLastMeal()
{
    return lastMeal;
}

void Doodlebug::incrementLastMeal()
{
    lastMeal++;
}

void Doodlebug::resetLastMeal()
{
    lastMeal = 0;
}

bool Doodlebug::hasStarved()
{
    return getLastMeal() == 3;
}

void Doodlebug::move()
{
    incrementAge();
    canBreed = (age % 8 == 0);
}
