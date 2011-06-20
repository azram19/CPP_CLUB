#include "person.hpp"

Person::Person(string name){
	this -> name = name;
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
