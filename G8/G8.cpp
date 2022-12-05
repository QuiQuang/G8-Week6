#include "SelectionS.h"
#include "InsertionS.h"
#include "InterchangeS.h"
#include "SATest.h"

int main() {
	cout << "---Selection Sort---Int---\n";
	SATest<int> A(new SelectionS<int>());
	A.Run(cin, cout);

	cout << "\n---Insertion Sort---Float---\n";
	SATest<double> B(new InsertionS<double>());
	B.Run(cin, cout);

	cout << "\n---Interchange Sort---Char---\n";
	SATest<char> C(new InterchangeS<char>());
	C.Run(cin, cout);

	return 0;
}