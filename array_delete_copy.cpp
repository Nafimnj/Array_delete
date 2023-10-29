#include <iostream>
using namespace std;
int arr[10] = {23, 11, 22, 33};
void del(int x)
{
    for (int j = x; j < 4; j++)
    {
        arr[j] = arr[j + 1];
    }
}
int main()
{
    int i, j, data = 23, flag = 0;
    cout << "Before delete--------------" << endl;
    for (i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    for (i = 0; i < 4; i++)
    {
        if (arr[i] == data)
        {
            del(i);

            flag++;
            break;
        }
    }
    cout << "After delete--------------" << endl;
    if (flag != 0)
    {

        for (i = 0; i < 4 - 1; i++)
        {
            cout << arr[i] << endl;
        }
        cout << "Checking with index---------" << endl;
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