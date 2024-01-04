#include <iostream>
#include <limits.h>

using namespace std;

int main()
{

    int arr[6] = {11, 3, 4, 2, 6, 9};
    int min = INT_MAX;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "The product of all the array elements is: " << min << endl;
}