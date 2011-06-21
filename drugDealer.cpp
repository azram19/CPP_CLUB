#include "drugDealer.hpp"
#include <cstdlib>
int DrugDealer::getValueOfATransaction(){
	return ((rand() % 91) + 10);
}

bool DrugDealer::transactionTest(){
	return (rand() % 100) < transactionChance;
}
