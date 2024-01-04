#include<iostream>
#include <limits.h>
using namespace std;


int main(){

int arr[10] = {16, 3, 344, 2, 546, 5, 7, 8, 79, 98};
    int max = INT_MIN;
    int smax=INT_MIN;

    for (int i = 0; i < 10; i++)
    {

        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    cout<<"the maximum element from the array is: "<<max<<endl;

    for (int i = 0; i < 10; i++)
    {

        if (arr[i] >= smax &&  arr[i] !=max)
        {
            smax = arr[i];
        }
    }
    cout<<"the second maximum element from the array is: "<<smax;


}