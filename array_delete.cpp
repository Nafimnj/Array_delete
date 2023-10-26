#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {23, 11, 22, 33}, i, j, data = 11, index, flag = 0;
    for (i = 0; i < 4; i++)
    {
        if (arr[i] == data)
        {
            arr[i] = arr[i + 1];
            index = i;
            flag++;
            break;
        }
    }
    if (flag != 0)
    {
        cout << index << endl;
        for (j = index + 1; j < 4; j++)
        {
            arr[j] = arr[j + 1];
        }
        cout << "================" << endl;
        for (i = 0; i < 4 - 1; i++)
        {
            cout << arr[i] << endl;
        }
        cout << "================" << endl;
        cout << arr[0] << endl;
        cout << arr[1] << endl;
        cout << arr[2] << endl;
        cout << arr[3] << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}