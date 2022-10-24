#include "Sorting.h"
#include <iostream>
using std::endl;
using std::cout;

void Sorting::DisplayList(vector<int> listP) {
	for (int i = 0; i < listP.size(); i++) {
		cout << listP[i] << "  ";
	}
	cout << endl;
}

void Sorting::QuickSort(vector<int>& listP, int minIndex, int maxIndex) {
	int prevMaxIndex = maxIndex;
	int pivot = maxIndex;
	int prevMinIndex = minIndex;
	int verify = minIndex;

	//pass
	while (verify <= pivot) {
		if (listP[pivot] < listP[verify]) {
			int num1 = listP[verify];
			int numPivot = listP[pivot];
			int numPrePivot = listP[pivot - 1];
			listP[verify] = numPrePivot;
			listP[pivot - 1] = numPivot;
			listP[pivot] = num1;
			pivot--;
		}
		else {
			++verify;
		}
	}
	DisplayList(listP);
	
	//
	if (prevMinIndex < pivot-1 && pivot-1 - prevMinIndex > 1) {
		QuickSort(listP, prevMinIndex, pivot-1);
	}

	if (pivot < prevMaxIndex && prevMaxIndex-pivot > 1) {
		QuickSort(listP, pivot, prevMaxIndex);
	}
	

}
