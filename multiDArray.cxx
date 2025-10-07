#include <iostream.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[4][3];
    int rows = 4;
    int cols = 3;

    // Takes input array elements
    cout << "Enter array element  : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    // Prints array 
    cout << "Array Elements   : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}