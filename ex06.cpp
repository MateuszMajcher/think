#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	vector<string> v;
	ifstream in("ex04.cpp");
	string line;
	
	while (in >> line) {
		v.push_back(line);
	}
	
	for (int i = 0; i < v.size(); i++) {
		cout<<v[i]<<endl;
	}
	return 0;
}
