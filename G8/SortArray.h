#pragma once
#include <vector>
#include <algorithm>
using namespace std;

template <class T>
class SortArray 
{
public:
	virtual void Process(vector<T>& a) = 0;
};

