#ifndef INC_POLICEMAN_H
#define INC_POLICEMAN_H

#include "person.hpp"

class Policeman : public Person{
	public:
		bool catchTest();
	protected:
	
	private:
		int catchChance; //0 - 100
}

#endif
