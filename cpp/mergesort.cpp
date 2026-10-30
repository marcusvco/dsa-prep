#include <iostream>
#include "utils.h"
using namespace std;

void merge(vector<int> &values, int left, int mid, int right)
{
    vector<int> arrayLeft = copyToVector(values, left, mid + 1);
    vector<int> arrayRight = copyToVector(values, mid + 1, right + 1);

    cout << "Copied array left: ";
    printVector(arrayLeft);

    cout << "Copied array right: ";
    printVector(arrayRight);

    int i = 0;
    int j = 0;
    int k = left;

    while (i < arrayLeft.size() && j < arrayRight.size())
    {
        if (arrayLeft[i] <= arrayRight[j])
        {
            values[k] = arrayLeft[i];
            i++;
        }
        else
        {
            values[k] = arrayRight[j];
            j++;
        }
        k++;
    }

    while (i < arrayLeft.size())
    {
        values[k] = arrayLeft[i];
        i++;
        k++;
    }

    while (j < arrayRight.size())
    {
        values[k] = arrayRight[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &values, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int mid = left + (right - left) / 2;

    mergeSort(values, left, mid);
    mergeSort(values, mid + 1, right);

    merge(values, left, mid, right);
}

int main()
{
    vector<int> numbers = {5, 2, 3, 1, 4, 10, 9, 15};

    cout << "Before sorting: ";
    printVector(numbers);

    mergeSort(numbers, 0, numbers.size() - 1);

    cout << "After sorting: ";
    printVector(numbers);
}