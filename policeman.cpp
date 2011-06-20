#include "person.hpp"
#include "policeman.hpp"

bool Policeman::catchTest(){
	return (rand() % 100) < catchChance;
}
