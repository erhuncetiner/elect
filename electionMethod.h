#ifndef ELECTIONMETHOD_H
#define ELECTIONMETHOD_H

#include "GameObject.h"
#include "Region.h"

class electionMethod : public GameObject
{
	public:
		Region regionOfElection;
		
		
		
		electionMethod(Region regionOfElection);
		void electionResults();
	protected:
};

#endif
