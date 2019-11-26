#ifndef FLYING_FISH_HPP
#define FLYING_FISH_HPP

#include "fish.hpp"
#include "can_swim.hpp"
#include "can_fly.hpp"

class FlyingFish : public Fish, public canSwim, public canFly {
	public:
		void runAway();

};

#endif
