#include <iostream>
#include <fstream>
#include <string>
/*pliki kopiowanie*/
using namespace std;
int main() {
	ifstream in("ex03.cpp");
	ofstream out("ex03_c.cpp");
	
	string s;
	
	while (getline(in, s)) {
		out <<s<<"\n";
	}
	return 0;
}

