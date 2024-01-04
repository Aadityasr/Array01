#include <iostream>
#include <limits.h>

using namespace std;

int main()
{

    int arr[6] = {11, 3, 4, 2, 11, 9};

    for (int i = 0; i < 6; i++)

    {

        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Duplicate element is found!";
                break;
            }
        }
    }
    cout << "The Duplicate element is not found! ";
}