#ifndef INC_PERSON_H
#define INC_PERSON_H
#include <string>
#include "gender.hpp"

using namespace std;

class Person{
	public:
	Person(string, int);
	
	string getName();
	int getAge();
	gender getGender();
	
	protected:
	
	private:
	string name;
	int age;
	gender m_gender;
};

#endif
