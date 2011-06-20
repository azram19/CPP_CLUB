#include "person.hpp"
#include "drugDealer.hpp"

int DrugDealer::getValueOfATransaction(){
	return ((rand() % 91) + 10);
}

bool DrugDealer::transactionTest(){
	return (rand() % 100) < transactionChance;
}
