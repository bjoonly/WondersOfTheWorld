#include "TheRomanColosseum.h"

WondersOfTheWorld::TheRomanColosseum::TheRomanColosseum::TheRomanColosseum() :name("The Roman Colosseum"), location("Rome,Italy"){}

void WondersOfTheWorld::TheRomanColosseum::TheRomanColosseum::Show() const{
	cout << "Name: " << name << "\nLocation: " << location << endl;
}
