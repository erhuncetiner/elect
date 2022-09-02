#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"
#include "Party.h"

class player : public GameObject
{
	public:
		string name;
		Party chosenParty;
		player();
	protected:
};

#endif
