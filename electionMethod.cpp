#include "electionMethod.h"
#include "Party.h"

electionMethod::electionMethod(Region region_x)
{
//	region_x = v;
	int localTotalVotes;
	int round = 1;
	localTotalVotes = region_x.regionalFarmers.population + region_x.regionalAdmin.population + region_x.regionalArtists.population + region_x.regionalCorps.population
	+ region_x.regionalEducated.population + region_x.regionalImmigrants.population + region_x.regionalService.population + region_x.regionalSoldiers.population + region_x.regionalWorkers.population;
//	int deputyWonByParty_1 = 0;
//	int deputyWonByParty_2 = 0;
//	int deputyWonByParty_3 = 0;
//	int deputyWonByParty_4 = 0;
//	int localFarmersVotingFor;
//	localFarmersVotingFor = region_x.regionalFarmers.totLean;
	Party party_01;
	Party party_02;
	Party party_03;
	Party party_04;
	Party party_05;
	Party party_06;
	Party party_07;
	Party party_08;

//	region_x.party_01.currentTotalVote = 0;
//	region_x.party_02.currentTotalVote = 0;
//	region_x.party_03.currentTotalVote = 0;
//	region_x.party_04.currentTotalVote = 0;
//	region_x.party_05.currentTotalVote = 0;
//	region_x.party_06.currentTotalVote = 0;
//	region_x.party_07.currentTotalVote = 0;
//	region_x.party_08.currentTotalVote = 0;
		
	region_x.party_01.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_1;
	region_x.party_02.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_2;
	region_x.party_03.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_3;
	region_x.party_04.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_4;
	region_x.party_05.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_5;
	region_x.party_06.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_6;
	region_x.party_07.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_7;
	region_x.party_08.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_8;
	region_x.party_01.currentTotalVote = 100;
	int p1 = region_x.party_01.currentTotalVote;
	
	region_x.party_02.currentTotalVote = 80;						//30k
	int p2 = region_x.party_02.currentTotalVote;
	
	region_x.party_03.currentTotalVote = 30; 		 //60k			//40k
	int p3 = region_x.party_03.currentTotalVote;

	region_x.party_04.currentTotalVote = 20; // 120k 	  //40k	
	int p4 = region_x.party_04.currentTotalVote;


	region_x.totalDep = 8;	
	region_x.party_01.currentDep = 0;
	region_x.party_02.currentDep = 0;
	region_x.party_03.currentDep = 0;
	region_x.party_04.currentDep = 0;
	double xMax;
//while {
	Party firstPlace;
	xMax = max(region_x.party_01.currentTotalVote, max(region_x.party_02.currentTotalVote, max(region_x.party_03.currentTotalVote, region_x.party_04.currentTotalVote)));
	firstPlace.currentTotalVote = xMax;
	while ((round <= region_x.totalDep)){ /// þimdilik sayý var normalde en çok olarak deðiþecek.
		xMax = max(firstPlace.currentTotalVote, max(region_x.party_01.currentTotalVote, max(region_x.party_02.currentTotalVote, max(region_x.party_03.currentTotalVote, region_x.party_04.currentTotalVote))));
		firstPlace.currentTotalVote = xMax;
//		xMax = max(region_x.party_01.currentTotalVote, max(region_x.party_02.currentTotalVote, max(region_x.party_03.currentTotalVote, region_x.party_04.currentTotalVote)));
		if (xMax == region_x.party_04.currentTotalVote){
			firstPlace = region_x.party_04;
		
		cout << "ROUND: " << round << endl;
		// First deputy
//		region_x.party_01.currentDep = region_x.party_01.currentDep + 1;
//		region_x.party_02.currentDep = region_x.party_02.currentDep + 1;
//		region_x.party_03.currentDep = region_x.party_03.currentDep + 1;
//		region_x.party_04.currentDep = region_x.party_04.currentDep + 1;
		firstPlace.currentDep = firstPlace.currentDep + 1;
//		region_x.party_01.currentTotalVote = region_x.party_01.currentTotalVote / (round + 1);
		firstPlace.currentTotalVote = p4 / (firstPlace.currentDep + 1);
		cout << "Remaining vote: " << firstPlace.currentTotalVote << endl << endl; 
			region_x.party_04 = firstPlace;
		round++;
//		xMax = max(xMax, max(region_x.party_01.currentTotalVote, max(region_x.party_02.currentTotalVote, max(region_x.party_03.currentTotalVote, region_x.party_04.currentTotalVote))));
////		firstPlace.currentTotalVote = max(region_x.party_01.currentTotalVote, max(region_x.party_02.currentTotalVote, max(region_x.party_03.currentTotalVote, region_x.party_04.currentTotalVote)));
//		cout << round;
	}	else	if (xMax == region_x.party_03.currentTotalVote){
			firstPlace = region_x.party_03;
		
		cout << "ROUND: " << round << endl;
		// First deputy
//		region_x.party_01.currentDep = region_x.party_01.currentDep + 1;
//		region_x.party_02.currentDep = region_x.party_02.currentDep + 1;
//		region_x.party_03.currentDep = region_x.party_03.currentDep + 1;
//		region_x.party_04.currentDep = region_x.party_04.currentDep + 1;
		firstPlace.currentDep = firstPlace.currentDep + 1;
//		region_x.party_01.currentTotalVote = region_x.party_01.currentTotalVote / (round + 1);
		firstPlace.currentTotalVote = p3 / (firstPlace.currentDep + 1);
		cout << "Remaining vote: " << firstPlace.currentTotalVote << endl << endl; 
			region_x.party_03 = firstPlace;
		round++;
//		xMax = max(xMax, max(region_x.party_01.currentTotalVote, max(region_x.party_02.currentTotalVote, max(region_x.party_03.currentTotalVote, region_x.party_04.currentTotalVote))));
////		firstPlace.currentTotalVote = max(region_x.party_01.currentTotalVote, max(region_x.party_02.currentTotalVote, max(region_x.party_03.currentTotalVote, region_x.party_04.currentTotalVote)));
//		cout << round;
	}	else	if (xMax == region_x.party_02.currentTotalVote){
			firstPlace = region_x.party_02;
		
		cout << "ROUND: " << round << endl;
		// First deputy
//		region_x.party_01.currentDep = region_x.party_01.currentDep + 1;
//		region_x.party_02.currentDep = region_x.party_02.currentDep + 1;
//		region_x.party_03.currentDep = region_x.party_03.currentDep + 1;
//		region_x.party_04.currentDep = region_x.party_04.currentDep + 1;
		firstPlace.currentDep = firstPlace.currentDep + 1;
//		region_x.party_01.currentTotalVote = region_x.party_01.currentTotalVote / (round + 1);
		firstPlace.currentTotalVote = p2/ (firstPlace.currentDep + 1);
		cout << "Remaining vote: " << firstPlace.currentTotalVote << endl << endl; 
			region_x.party_02 = firstPlace;
		round++;
//		xMax = max(xMax, max(region_x.party_01.currentTotalVote, max(region_x.party_02.currentTotalVote, max(region_x.party_03.currentTotalVote, region_x.party_04.currentTotalVote))));
////		firstPlace.currentTotalVote = max(region_x.party_01.currentTotalVote, max(region_x.party_02.currentTotalVote, max(region_x.party_03.currentTotalVote, region_x.party_04.currentTotalVote)));
//		cout << round;
	}	else	if (xMax == region_x.party_01.currentTotalVote){
			firstPlace = region_x.party_01;
		
		cout << "ROUND: " << round << endl;
		// First deputy
//		region_x.party_01.currentDep = region_x.party_01.currentDep + 1;
//		region_x.party_02.currentDep = region_x.party_02.currentDep + 1;
//		region_x.party_03.currentDep = region_x.party_03.currentDep + 1;
//		region_x.party_04.currentDep = region_x.party_04.currentDep + 1;
		firstPlace.currentDep = firstPlace.currentDep + 1;
//		region_x.party_01.currentTotalVote = region_x.party_01.currentTotalVote / (round + 1);
		firstPlace.currentTotalVote = p1 / (firstPlace.currentDep + 1);
		cout << "Remaining vote: " << firstPlace.currentTotalVote << endl << endl; 
			region_x.party_01 = firstPlace;
		round++;
//		xMax = max(xMax, max(region_x.party_01.currentTotalVote, max(region_x.party_02.currentTotalVote, max(region_x.party_03.currentTotalVote, region_x.party_04.currentTotalVote))));
////		firstPlace.currentTotalVote = max(region_x.party_01.currentTotalVote, max(region_x.party_02.currentTotalVote, max(region_x.party_03.currentTotalVote, region_x.party_04.currentTotalVote)));
//		cout << round;
	}
//					firstPlace.currentTotalVote = 0;

//		region_x.party_01.currentTotalVote = region_x.party_01.currentTotalVote / round;	
	}
	cout << region_x.party_01.currentDep << " deputies were won by Party 1 at the end of " << round - 1 << " rounds." << endl;
	cout << region_x.party_02.currentDep << " deputies were won by Party 2 at the end of " << round - 1 << " rounds." << endl;
	cout << region_x.party_03.currentDep << " deputies were won by Party 3 at the end of " << round - 1 << " rounds." << endl;
	cout << region_x.party_04.currentDep << " deputies were won by Party 4 at the end of " << round - 1 << " rounds." << endl;
//	cout << "ROUND: " << round << endl;
//}
	
	
}
