#include<iostream>
using namespace std;
main()
{
    int cubes,sum=0;
    cout<<"Enter the number of cubes: ";
    cin>>cubes;
    int input[cubes];
    for(int i=0;i<cubes*3;i=i+3)
    {
        cout<<"Enter length: ";
        cin>>input[i];
        cout<<"Enter width: ";
        cin>>input[i+1];
        cout<<"Enter height: ";
        cin>>input[i+2];

    }
    for(int i=0;i<cubes*3;i=i+3)
    {
        sum=sum+((input[i]*input[i+1])*input[i+2]);
    }
    cout<<sum;
}