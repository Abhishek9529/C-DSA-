// This program finds max in the array
#include <iostream>
#include <conio.h>
#include <stdio.h>
int main()
{
    int arr[5] = {12, 47, 25, 58, 88};
    int size = 5;
    int loc = 1;
    int max = arr[0];

    for (int k = 0; k < size; k++)
    {
        if (max < arr[k])
        {
            max = arr[k];
            loc = k;
        }
    }
    std::cout << "Max : " << max << " at index : " << loc;
}