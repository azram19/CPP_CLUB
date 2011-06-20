#ifndef INC_PERSON_H
#define INC_PERSON_H
#include<string>

using namespace std;

class Person{
	public:
	Person(string, int);
	
	string getName();
	string getAge();
	gender getGender();
	
	protected:
	
	private:
	string name;
	int age;
	gender m_gender;
}

#endif
