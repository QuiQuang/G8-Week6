#pragma once
#include "SortArray.h"

template<class T>
class InsertionS : public SortArray<T>
{
public:
	void Process(vector<T>& a) {
        int i, j;
        T key;
        for (i = 1; i < a.size(); i++) {
            key = a[i];
            j = i - 1;
            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = key;
        }
	}
};

