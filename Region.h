#ifndef REGION_H
#define REGION_H

#include "GameObject.h"
#include "corporations.h"
#include "admin.h"
#include "artists.h"
#include "educated.h"
#include "farmers.h"
#include "immigrants.h"
#include "service.h"
#include "soldiers.h"
#include "workers.h"
#include "Party.h"

class Region : public GameObject
{
	public:
		int economic;
		int social;
		bool minority;
		int totalDep;
		corporations regionalCorps;
		admin regionalAdmin;
		artists regionalArtists;
		educated regionalEducated;
		farmers regionalFarmers;
		immigrants regionalImmigrants;
		service regionalService;
		soldiers regionalSoldiers;
		workers regionalWorkers;
		
		Party party_01;
		Party party_02;
		Party party_03;
		Party party_04;
		Party party_05;
		Party party_06;
		Party party_07;
		Party party_08;
		
		Region();
		
		
	protected:
};

#endif
