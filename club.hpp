#ifndef INC_CLUB_H
#define INC_CLUB_H
#include<string>

using namespace std;

class Club{
	public:
	/*Name SizeOfTheClub SizeOfTheQueue NumberOfStaff NumberOfDrugDealers Now*/
	Club(string, int, int, int, int, string);
	
	string getName();
	DateTime getTime();
	
	Mob& theMob();
	Queue& theQueue();
		
	void tick();
	void funfunfun(list<Event>);
	void enter();
	
	void setTick();
	void setAgeLimit();
	
	
	protected:
	
	private:
	string name;
	DateTime now;
	int secondsPerTick;
	int ageLimit;
	
	Queue queue;
	Mob mob;
	
	list<Person> peopleWaitingToEnter;
	list<Person> peopleInside;
}

#endif
