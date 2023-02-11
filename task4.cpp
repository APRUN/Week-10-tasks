#include <iostream>
using namespace std;

bool function(int,int);
    int number[20];

main()
{
    int length, cycle;
    cout << "Enter the length: ";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cout << "Enter number: ";
        cin >> number[i];
    }
    cout << "Enter the number of cycles: ";
    cin >> cycle;
    bool ispresent=function(length,cycle);
    if(ispresent==1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

}

bool function(int length,int cycle)
{
    bool ispresent=0;
    for (int m = 0; m < length; m++)
    {

       while(cycle<length)
       {       
            if (number[m] = number[cycle])
            {
                ispresent=1;
            }
            cycle++;
       }

        
    }
    return ispresent;
}
