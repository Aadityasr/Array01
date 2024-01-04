#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {1, 3, 4, 2, 6, 9};
    int product = 1;

    for (int i = 0; i < 6; i++)
    {
        product *= arr[i];
    }

    cout<<"The product of all the array elements is: "<<product<<endl;
}