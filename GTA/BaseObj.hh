#ifndef BASE_OBJ_HH
#define BASE_OBJ_HH
#include <iostream>
#include <string>
using namespace std;

class BaseObj {
	int Pos;
	string Model;
	public:
		void render();
		void update(int time);
};

#endif
