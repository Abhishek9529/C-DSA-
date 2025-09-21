#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void printArray(int arr[], int size, string str)
{
    std::cout<<str;
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void insertArrayEle(int arr[], int size, int elementToInsert, int indexToInsert){
    if (size >= 10)
    {
        std::cout<<"Array is full. Cannot insert."<< endl;
        return;
    }
    
    for (int i = size -1; i >= indexToInsert; i--)
    {
        arr[i+1] = arr[i];
    }
    
    // Insert the element to the selected index
    arr[indexToInsert] = elementToInsert;
    // Increse the size of array +1 to access the all element
    size++; 
    string str = "updated array: ";
    printArray(arr, size, str );
}

int main(){
    int arr[10] = {26, 45, 76, 98, 60};
    int size = 5;
    int elementToInsert = 50;
    int indexToInsert = 2;

    string str = "original array: ";
    printArray(arr, size, str);

    insertArrayEle(arr, size, elementToInsert, indexToInsert);
    
    return 0;
}