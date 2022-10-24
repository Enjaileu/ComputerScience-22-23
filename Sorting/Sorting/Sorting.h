#pragma once
#include <vector>
using std::vector;



class Sorting
{
public:
	static void DisplayList(vector<int> listP);
	static void QuickSort(vector<int>& listP, int minIndex, int maxIndex);
};

