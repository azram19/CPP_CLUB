#ifndef INC_DRUG_DEALER_H
#define INC_DRUG_DEALER_H

#include "person.hpp"

class DrugDealer : public Person{
	public:
		int getValueOfATransaction();
		bool transactionTest();
	protected:
	
	private:
		int transactionChance; //0 - 100
}

#endif
