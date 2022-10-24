#include "numberGenerator.h" 
#include "Sorting.h"
#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main() {

	vector<int> list = NumberGenerator::GenerateList(20);

	Sorting::DisplayList(list);
	Sorting::QuickSort(list, 0, list.size()-1);

	return 0;
}