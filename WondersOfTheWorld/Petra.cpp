#include "Petra.h"

WondersOfTheWorld::Petra::Petra::Petra():name("Petra"),location("Jordan"){}

void WondersOfTheWorld::Petra::Petra::Show() const{
	cout << "Name: " << name << "\nLocation: " << location << endl;
}
