#include <iostream>
using namespace std;

int main()
{                                                       
    int n=3;
    char ch='A';
                                                      //*
    for(int i=0;i<n;i++)                            //** 
    {                                               //*** 
        for(int j=0;j<i+1;j++)
        {
            // cout<<"*";
            //cout<<(i+1);
            cout<<ch;                               //1  
        }    
        ch++;                                      //22
        cout<<endl;                                //333
    }
    return 0;
}