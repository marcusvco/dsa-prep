#include <iostream>
#include "utils.h"
using namespace std;

int binarySearch(vector<int> values, int target)
{
    int left = 0;
    int right = values.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int value = values[mid];

        if (target > value)
        {
            left = mid + 1;
        }
        else if (target < value)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 8;

    cout << "Array: ";
    printVector(numbers);

    cout << "Result: ";
    int result = binarySearch(numbers, target);
    if (result == -1)
    {
        cout << "Not in array" << "\n";
    }
    else
    {
        cout << target << " at index " << result << "\n";
    }
}