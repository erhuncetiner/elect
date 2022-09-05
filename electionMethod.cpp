#include "electionMethod.h"
#include "Party.h"

electionMethod::electionMethod(Region region_x)
{
//	region_x = v;
	int localTotalVotes;
	int round = 1;
	localTotalVotes = region_x.regionalFarmers.population + region_x.regionalAdmin.population + region_x.regionalArtists.population + region_x.regionalCorps.population
	+ region_x.regionalEducated.population + region_x.regionalImmigrants.population + region_x.regionalService.population + region_x.regionalSoldiers.population + region_x.regionalWorkers.population;
	int deputyWonByParty_1;
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

		
	region_x.party_01.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_1;
	region_x.party_02.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_2;
	region_x.party_03.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_3;
	region_x.party_04.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_4;
	region_x.party_05.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_5;
	region_x.party_06.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_6;
	region_x.party_07.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_7;
	region_x.party_08.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_8;
region_x.party_01.currentTotalVote = 5001;
region_x.totalDep = 5;	

	
//while {

	while ((round <= region_x.totalDep)&&(region_x.party_01.currentTotalVote > 5000)){ /// þimdilik sayý var normalde en çok olarak deðiþecek.
		cout << "ROUND: " << round << endl;
		// First deputy
		deputyWonByParty_1 = deputyWonByParty_1 + 1;
		round++;
		
		
//		region_x.party_01.currentTotalVote = region_x.party_01.currentTotalVote / round;	
	}
	
//	cout << "ROUND: " << round << endl;
//}
	
	
}
