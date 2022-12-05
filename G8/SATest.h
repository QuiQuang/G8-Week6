#pragma once
#include "ProgramFrame.h"
#include "SortArray.h"
#include <vector>
#include <iostream>

template <class T>
istream& operator>>(istream& in, vector<T>& a) {
	int n;
	cout << endl << "Size : ";
	in >> n;
	a.resize(n);

	for (int i = 0; i < n; ++i) {
		cout << "A[" << i << "] : ";
		in >> a[i];
	}
	return in;
}

template <class T>
ostream& operator<<(ostream& out, vector<T>& a) {
	out << "Size : " << a.size() << endl;
	out << "List : ";
	for (int i = 0; i < a.size(); ++i)
		out << a[i] << "   ";
	out << endl;
	return out;
}

template <class T>
class SATest : public ProgramFrame
{
private:
	vector<T> Data;
	SortArray<T>* mAlg;

public:
	SATest(SortArray<T>* pAlg) { mAlg = pAlg; }

	void Input(istream& is) {
		is >> Data;
	}
	void Output(ostream& os) {
		os << "Result after sorting : ";
		os << Data;
	}

	bool Check() { return Data.size() > 0; }
	void StartMessage(ostream& os) {
		os << "Enter n, then A[0],..., A[n - 1] : ";
	}
	void Process() {
		if (mAlg != NULL) mAlg->Process(Data);
	}
};

