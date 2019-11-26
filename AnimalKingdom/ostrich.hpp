#ifndef OSTRICH_HPP
#define OSTRICH_HPP

#include "bird.hpp"
#include "can_walk.hpp"

class Ostrich : public Bird, public canWalk {
	public:
		void bigEggs();

};

#endif
