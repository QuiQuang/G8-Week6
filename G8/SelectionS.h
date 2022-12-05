#pragma once
#include "SortArray.h"

template<class T>
class SelectionS : public SortArray<T>
{
public:
	void Process(vector<T>& a) {
        int i, j, min;
        for (i = 0; i < a.size() - 1; ++i) {
            min = i;
            for (j = i + 1; j < a.size(); j++)
                if (a[j] < a[min])
                    min = j;
            swap(a[min], a[i]);
        }
	}
};

