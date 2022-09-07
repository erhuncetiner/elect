#ifndef POPS_H
#define POPS_H

#include "GameObject.h"

class pops : public GameObject
{
	public:
		int population;
		int totLean;
		int loves; //item number
		int hates; //item number
		double loyaltyPlayer;
		
		bool delighted; //loves satisfied
		bool disgusted; //hates satisfied
		
		bool irrational;
		bool minority;
		
		double percentageForParty_1; /// ALWAYS BETWEEN 0 AND 1
		double percentageForParty_2; /// ALWAYS BETWEEN 0 AND 1
		double percentageForParty_3; /// ALWAYS BETWEEN 0 AND 1
		double percentageForParty_4; /// ALWAYS BETWEEN 0 AND 1
		double percentageForParty_5; /// ALWAYS BETWEEN 0 AND 1
		double percentageForParty_6; /// ALWAYS BETWEEN 0 AND 1
		double percentageForParty_7; /// ALWAYS BETWEEN 0 AND 1
		double percentageForParty_8; /// ALWAYS BETWEEN 0 AND 1

		int votingFor;
		
		
		pops();
		
		void delight();
		void disgust();
	protected:
};

#endif
