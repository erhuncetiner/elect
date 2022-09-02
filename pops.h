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
		
		
		pops();
	protected:
};

#endif
