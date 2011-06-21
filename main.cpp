#include<iostream>
#include<string>

using namespace std;

int main(){
int m, ticks, age, score, firstParameter, secondParameter;
string command, name, type, gender;

cin >> m >> ticks;



for(int i = 0; i < m; i++){
	firstParameter = secondParameter = 0;
	cin >> command >> name >> type >> age >> score >> gender;
	if(type == "policeman"){
		cin >> firstParameter >> secondParameter;	
	}
	// ...
	cout << command << name << type << age << score << gender << firstParameter << secondParameter << "\n"; //To show that reads correctly
	// ...
}


return 0;
}

