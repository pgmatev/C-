#ifndef Bracket_H
#define Bracket_H
namespace MyStuff {
	#include <iostream>
	#include <string>
	#include <vector>
	using namespace std;
	void print_vector(vector<char> v){
	for(int i = 0; i<v.size(); i++){
		cout << v[i] << endl;
	}
	cout << endl;
	}

	class Bracket {
		private:
			string s;
			vector <char> v;
			int count = 0;
			int countl = 0;
			int countr = 0;
			int flag = 1;
			string::iterator it;
			vector<char>::iterator itt;
		public:
			void read_string(){
				cout << "Enter a line of text: " << endl;
				getline(cin, s);
				//cout << s << endl;
			}

			void insert_queue(){
				for(it = s.begin(); it!=s.end(); it++){
					if(*it == '(' || *it == ')')v.push_back(*it);
				}
				print_vector(v);
			}

			void iterate_queue(){
				for(itt = v.begin(); itt!=v.end(); itt++){
					count++;
					//if(*itt == ')')flag = 0;
					if(*itt == '(')countl++;
					else countr++;
				}
				cout <<"Total brackets: " << count << endl;
				if(countl!=countr)flag = 0;
				if(!flag)cout << "Houston, we have a problem" << endl;
			}

	};
}
#endif
