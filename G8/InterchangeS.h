#pragma once
#include "SortArray.h"

template<class T>
class InterchangeS : public SortArray<T>
{
public:
    void Process(vector<T>& a) {
        for (int i = 0; i < a.size() - 1; ++i)
            for (int j = i + 1; j < a.size(); ++j)
                if (a[i] > a[j]) swap(a[i], a[j]);
    }
};

