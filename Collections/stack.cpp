#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	cout << "Empty: " << s.empty() << endl;
	for(int i = 0; i<10; i++){
		s.push(i);
	}

	cout << "Size: " << s.size() << endl;
	s.pop();
	if(!s.empty())cout << "Emptyn't" << endl;
	cout << "Size: " << s.size() << endl;
	cout << "Top: " << s.top() << endl;
}

