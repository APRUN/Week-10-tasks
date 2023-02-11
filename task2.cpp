#include<iostream>
using namespace std;

 float miles[5];
int checkcondition(int);

main()
{
    int weeks,count=0;
    cout<<"Enter number of weeks: ";
    cin>>weeks;
    checkcondition(weeks);
    cout<<"Progress days are "<<count;
    
}

int checkcondition(int weeks)
{
    int count=0;
    for(int i=0;i<weeks; i++)
    {
        cout<<"Enter miles of week "<<i+1 <<": ";
        cin>>miles[i];
    
    }
    for(int m=0;m<weeks;m++)
    {
        if(miles[m]<miles[m+1])
        {
            count++;
        }
    }
    
    return count;
}