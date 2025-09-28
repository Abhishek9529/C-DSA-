#include <iostream.h>
#include <stdio.h>
#include <conio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10], k, loc, size, deleteIndex;
    std::cout << "Enter size of array : ";
    std::cin >> size;
    cout << "Enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    printArray(arr, size);

    std::cout << "Enter index to delete element : ";
    std::cin >> deleteIndex;

    // Delete Element
    for (int i = deleteIndex; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    printArray(arr, size);
}