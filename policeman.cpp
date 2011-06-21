#include "policeman.hpp"
#include <cstdlib>

bool Policeman::catchTest(){
	return (rand() % 100) < catchChance;
}
