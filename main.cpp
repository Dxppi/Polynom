#include <iostream>
#include <fstream>
#include "polynomial.h"
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ifstream fin(R"(example.txt)");
	Polynomial p1, p2;
	Polynomial t;
	int count = 5;
	while (count != 0) {
		fin >> p1 >> p2;
		cout << "p1: " << p1 << endl << "p2: " << p2 << endl;
		t = p1 + p2;
		t.reverse();
		cout << "\np1 + p2: ";
		cout << t << "\n\n\n";

		cout << "Сумма Слиянием" << endl;
		p1.plus(p2);
		p1.reverse();
		cout << "p1: " << p1 << endl << "p2: " << p2 << endl;
		cout << "\n\n\n";
		count--;
	}
	return 0;
}
