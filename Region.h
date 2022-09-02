#ifndef REGION_H
#define REGION_H

#include "GameObject.h"
#include "corporations.h"
class Region : public GameObject
{
	public:
		int economic;
		int social;
		bool minority;
		corporations regionalCorps;
		Region();
	protected:
};

#endif
