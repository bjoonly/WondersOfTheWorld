#include "ChichenItza.h"
#include "ChristTheRedeemerStatue.h"
#include "GreatWallOfChina.h"
#include "MachuPicchu.h"
#include "Petra.h"
#include "TajMahal.h"
#include "TheRomanColosseum.h"
int main() {
	WondersOfTheWorld::ChichenItza::ChichenItza CI;
	CI.Show();
	WondersOfTheWorld::ChristTheRedeemerStatue::ChristTheRedeemerStatue RS;
	RS.Show();
	WondersOfTheWorld::GreatWallOfChina::GreatWallOfChina GW;
	GW.Show();
	WondersOfTheWorld::MachuPicchu::MachuPicchu MP;
	MP.Show();
	WondersOfTheWorld::Petra::Petra P;
	P.Show();
	WondersOfTheWorld::TajMahal::TajMahal TM;
	TM.Show();
	WondersOfTheWorld::TheRomanColosseum::TheRomanColosseum RC;
	RC.Show();

	return 0;
}