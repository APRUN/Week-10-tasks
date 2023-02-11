#include <iostream>
using namespace std;

main()
{
    int elements = 0, count = 0;
    cout << "Enter the number of elements: ";
    cin >> elements;
    int socket[elements];
    int store[elements];
    for (int i = 0; i < elements; i++)
    {
        cout << "Enter number " << i + 1 << "  ";
        cin >> socket[i];
    }
    for (int m = 1; m < elements - 1; m++)
    {
        if (socket[m] > socket[m - 1] && socket[m] > socket[m + 1])
        {
            store[count] = socket[m];
            count++;
        }
    }
    if (count != 0)
    {

        for (int x = 0; x < count; x++)
        {
            cout << store[x] ;
        }
    }
    else
    {
        cout << "No such numbr exsist.";
    }
}