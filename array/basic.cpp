#include<iostream>
using namespace std;

int main()
{
    //create array and access//////
    int size=5;
    //int marks[size]={50,6,85,45,2};
    
    //loop input
    int marks[size];
    for(int i=0;i<size;i++)
    {
        cin>>marks[i];
    }

    // cout<<marks[2]<<endl;
    // cout<<marks[4]<<endl;

    //size of array///////
    //cout<<sizeof(marks)<<endl;
    //size of each column////////
   // cout<<sizeof(marks)/sizeof(int)<<endl;


   //loop output
   for(int i=0;i<size;i++)
   {
    cout<<marks[i]<<endl;
   }


    return 0;
}