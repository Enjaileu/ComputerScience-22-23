#include "numberGenerator.h"
#include <cstdlib> 
#include <time.h> 

vector<int> NumberGenerator::GenerateList(int lenP)
{
    vector<int> list;
    list.reserve(lenP);
    srand((unsigned int)time(0));

    for (int i = 0; i < lenP; i++) {
        
        int num = (rand() % 5000000);
        list.push_back(num);
    }

    return list;
}
