#include "MachuPicchu.h"

WondersOfTheWorld::MachuPicchu::MachuPicchu::MachuPicchu():name("Machu Picchu"),location("Peru"){
}

void WondersOfTheWorld::MachuPicchu::MachuPicchu::Show() const{
	cout << "Name: " << name << "\nLocation: " << location << endl;
}
