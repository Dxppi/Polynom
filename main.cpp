#include <iostream>
#include <fstream>
#include "polynomial.h"
using namespace std;

int main() {
	ifstream fin(R"(example.txt)");
	Polynomial p1, p2;
	Polynomial t;
	int count = 5;
	while (count != 0) {
		fin >> p1 >> p2;
		cout << "p1: " << p1 << endl << "p2: " << p2 << endl;
		t = p1 + p2;
		t.reverse();
		cout << "p1 + p2: ";
		cout << t << "\n\n\n";

		cout << "Plus Merge" << endl;
		p1.plus(p2);
		cout << "p1: " << p1 << endl << "p2: " << p2 << endl;
		cout << "\n\n\n";
		count--;
	}
	return 0;
}
