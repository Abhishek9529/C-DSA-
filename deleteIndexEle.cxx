#include <iostream.h>
#include <stdio.h>
#include <conio.h>

// Print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

// Delete element
int deleteElement(int arr[], int size, int indexToDelete)
{
    for (int i = indexToDelete; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    printArray(arr, size);
}

int main()
{
    int arr[10], k, loc, size, indexToDelete;
    // Takes array size from user
    std::cout << "Enter size of array : ";
    std::cin >> size;
    cout << "Enter array elements : ";
    // Takes array element from user
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    printArray(arr, size);

    // Takes input from the user
    std::cout << "\n Enter index to delete element : ";
    std::cin >> indexToDelete;

    // Delete Element on selected index
    deleteElement(arr, size, indexToDelete);
    
}