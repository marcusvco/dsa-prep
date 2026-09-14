#include <iostream>
#include "utils.h"
using namespace std;

void printVector(vector<int> values)
{
    cout << "[";
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i];
        if (i < values.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << "\n";
}

vector<int> copyToVector(vector<int> values, int left, int right)
{
    vector<int> newVector(right - left);

    for (int i = 0; i < newVector.size(); i++)
    {
        newVector[i] = values[left];
        left++;
    }

    return newVector;
}