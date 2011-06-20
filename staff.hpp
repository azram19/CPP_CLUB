#ifndef INC_STAFF_H
#define INC_STAFF_H

#include "person.hpp"

class Staff : public Person{
	public:
		int getValueOfATip();
		bool testForATip();
		
	protected:
	
	private:
		int tipChance; //0 - 100
}

#endif
