#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"
#include "Party.h"

class player : public GameObject
{
	public:
		string name; // This should replace the leader name of the chosen party.
		Party chosenParty; // This should replace the name of the chosen party.
		
		player();
		
//		void 
	protected:
};

#endif
