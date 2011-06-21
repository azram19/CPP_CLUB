#include "person.hpp"
#include "gender.hpp"
#include <string>

using namespace std;

Person::Person(string name, int age){
	this -> name = name;
	this -> age = age;
}

string Person::getName(){
	return name;
}

int Person::getAge(){
	return age;
}

gender Person::getGender(){
	return m_gender;
}
