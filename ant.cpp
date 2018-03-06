/*******************************************************************************
** Program Name: Group Project - Predator Prey Game
** Authors: Kelly von Borstel, Eric Edwards, Louie Nicastro, Martin Sevrin
** Date: 2/17/2018
** Description: This is implementation file for the ant class. It is derived
** from critter class and inherits member variables for age, bools to keep
** track of whether is has already moved on a step, and to keep track if it is
** the right age to breed. It also inherits functions to get and increment age,
** get symbol for board, get and set hasMoved, and get canBreed. The move class
** is overridden to assign canBreed true if the ant's age is divisible by 3.
*******************************************************************************/

#include "ant.hpp"

Ant::Ant()
{
    this->symbol = 'O';
}

Ant::~Ant()
{
}

void Ant::move()
{
    incrementAge();
    canBreed = (age % 3 == 0);
}
