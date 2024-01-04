#include <iostream>
using namespace std;

int main()
{

    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %dth element of the array:", i);
        scanf("%d", &arr[i]);
    }

    int check = 1;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == check)
        {
            check++;
        }
        else
        {
            printf("The smallest missing element is %d", check);
            break;
        }
    }
}