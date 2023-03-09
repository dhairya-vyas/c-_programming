#include <iostream>

using namespace std;

void arrayPrint(int arr[][100], int rows, int cols)
{
    for (int j = 0; j < cols; j++)
    {
        if (j % 2 == 0)
        {
            // print downwards
            for (int i = 0; i < rows; i++)
            {
                cout << arr[i][j] << ",";
            }
        }
        else
        {
            // print upwards
            for (int i = rows - 1; i >= 0; i--)
            {
                cout << arr[i][j] << ",";
            }
        }
    }
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    int arr[100][100];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    arrayPrint(arr, rows, cols);

    return 0;
}