#include "club.hpp"
#include "mob.hpp"
#include "queue.hpp"
#include "dateTime.hpp"
#include "event.hpp"

#include <list>
#include <cstdlib>
const unsigned int seed = 1287239023;
const int sizeOfTheClub = 5;
const int sizeOfTheQueue = 10;
const int numberOfStaff = 1;
const int numberOfDrugDealers = 2;


int main(){
srand(seed);

std::list<Event> events;

Club theClub("Koko", sizeOfTheClub, sizeOfTheQueue, numberOfStaff, numberOfDrugDealers, "23/10/2011 01:00:00");

theClub.setTick(50);
theClub.setAgeLimit(36);

int numberOfTicks;

/*
TODO: Read data, and events.
*/

/*
Cycle
*/
for(int i = 0; i < numberOfTicks; i++){
	theClub.theQueue().updatePositions();
	theClub.theQueue().moveToTheClub(theClub);
	theClub.theQueue().enter();
	
	theClub.theMob().moveToTheQueue(theClub.theQueue());
	theClub.theMob().enter();	

	theClub.enter();
		
	theClub.funfunfun(events.front());
	events.pop_front();
	
	theClub.tick(); //This is where everything in the club happens - tips, catching etc...
}

/*
For every policeman and staff and drug dealer print how much he earned.
*/
return 0;
}
