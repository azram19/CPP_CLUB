#include "person.hpp"
#include "staff.hpp"

int Staff::getValueOfATip(){
	return ((rand() % 10) + 1);
}

bool Staff::tipTest(){
	return (rand() % 100) < tipChance;
}
