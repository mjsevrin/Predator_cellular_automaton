/*******************************************************************************
** Program Name: Group Project - Predator Prey Game
** Authors: Kelly von Borstel, Eric Edwards, Louie Nicastro, Martin Sevrin
** Date: 2/17/2018
** Description: This is implementation file for the critter class. It is the
** base class for ant and doodlebug. The class has member variable for age, and
** has bool member variables to keep track of whether a critter has already
** moved on a step, and to keep track if a critter is the right age to breed.
** There are member functions to get and increment age, get the symbol that
** represents a critter on the board, get and set hasMoved, and get canBreed.
** There is a virtual function move that will be overridden in derived classes.
*******************************************************************************/

#include "critter.hpp"

Critter::Critter()
{
    this->age = 0;
    this->hasMoved = false;
    this->canBreed = false;
}

Critter::~Critter()
{
}

int Critter::getAge()
{
    return age;
}

void Critter::incrementAge()
{
    age++;
}

char Critter::getSymbol()
{
    return symbol;
}

void Critter::setHasMoved(bool moved)
{
    hasMoved = moved;
}

bool Critter::getHasMoved()
{
    return hasMoved;
}

bool Critter::getCanBreed()
{
    return canBreed;
}
