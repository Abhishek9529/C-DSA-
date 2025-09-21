// Delete element of array using shifting method
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[5] = {3, 9, 4, 5, 8};
    int size = 5;
    int elementToDelete = 9;
    int indexToDelete = -1;

    std::cout << "Original Array : ";
    printArray(arr, size);

    // Find the index of the elementToDelete
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elementToDelete)
        {
            indexToDelete = i;
        }
    }

    // Traverse array from indexToDelete to size -1. and shift each element to next position.
    if (indexToDelete != -1)
    {
        for (int i = indexToDelete; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    else
    {
        std::cout << "Index Element not found.";
    }
    std::cout << "Element to delete : " << elementToDelete << "\n";
    std::cout << "Updated Array : ";
    printArray(arr, size);
    return 0;
}