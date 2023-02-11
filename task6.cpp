#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int news;
    int weight[10]={10,5,6,7,3,2,4,0,8,9};
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(weight[i]<weight[j])
            {
                 news=weight[j];
                 weight[j]=weight[i];
                 weight[i]=news;
            }
        }
    }
for(int f=0;f<10;f++)
{
    cout<<weight[f]<<" ";
}    

}