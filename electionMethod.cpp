#include "electionMethod.h"
#include "Party.h"

electionMethod::electionMethod(Region region_x)
{	int localTotalVotes;
	int round = 1;
	localTotalVotes = region_x.regionalFarmers.population + region_x.regionalAdmin.population + region_x.regionalArtists.population + region_x.regionalCorps.population
	+ region_x.regionalEducated.population + region_x.regionalImmigrants.population + region_x.regionalService.population + region_x.regionalSoldiers.population + region_x.regionalWorkers.population;
	int deputyWonByParty_1;
	int localFarmersVotingFor;
	localFarmersVotingFor = region_x.regionalFarmers.totLean;
	Party party_01;
	if (localFarmersVotingFor == 1){
		
		region_x.party_01.currentTotalVote =+ region_x.regionalFarmers.population*region_x.regionalFarmers.percentageForParty_1;
		
	}
	
	
	if (region_x.party_01.currentTotalVote > 5000){ /// þimdilik sayý var normalde en çok olarak deðiþecek.
		
		// First deputy
		deputyWonByParty_1 = deputyWonByParty_1 + 1;
		
		round++;
		
		region_x.party_01.currentTotalVote = region_x.party_01.currentTotalVote / round;
		
		
	}
	
	
	
}
