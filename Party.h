#ifndef PARTY_H
#define PARTY_H

#include "GameObject.h"

class Party : public GameObject
{
	public:
		string partyName;
		string leaderName;
		string ideologyNameTrue;
		string ideologyNameSelfClaimed;
		string ideologyNameAttributed;
		
		double currentTotalVote;
		int currentDep;
		bool isRuling;
		int policyMakingStance;
		int social;
		int economic;
		bool irrational;
							
		Party();
	protected:
};

#endif
