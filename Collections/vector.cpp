#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> v){
	for(int i = 0; i<v.size(); i++){
		cout << v[i] << endl;
	}
	cout << endl;
}


int main(){
	vector <int> v;
	cout << "Is empty: " << v.empty() << endl;
	for(int i = 0; i<10; i++){
		v.push_back(i);
	}
	cout << "Is empty: " << v.empty() << endl;
	cout << "Size: " << v.size() << endl;
	cout << "Capacity: " << v.capacity() << endl;

	print_vector(v);
	v.pop_back();
	print_vector(v);

}
