#include <iostream>
using namespace std;

namespace firstSpace {
	void say_hello(){
		cout << "Hello from first namespace" << endl;		
	}
	namespace innerSpace {
		void say_hello(){
			cout << "Hello from the other side" << endl;		
		}	
	};
};

namespace secondSpace {
	void say_hello(){
		cout <<"Hello from second namespace" << endl;
	}
	
};
using namespace firstSpace;
int main(){
	say_hello();
	innerSpace::say_hello();
	//firstSpace::say_hello();
	//firstSpace::innerSpace::say_hello();
	secondSpace::say_hello();
}
