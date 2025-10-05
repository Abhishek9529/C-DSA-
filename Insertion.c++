#include <iostream.h>
#include <stdio.h>
#include <conio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int k = 3, n = 5, newEle = 80;
    cout << "Original array : ";
    printArray(arr, n);
    for (int i = n; i >= k; i--)
    {
        arr[i + 1] = arr[i];
    }
    n++;
    cout << "Updated array : ";
    arr[k] = newEle;
    printArray(arr, n);
}