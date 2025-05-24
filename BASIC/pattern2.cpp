#include<iostream>
using namespace std;
int main()
{
    int n=3;
    char ch='A';      ///to prnt number take int num=1;            //A B C
                                                                   //D E F
    for(int i=0;i<n;i++)                                           //G H I
    {
        for(int j=0;j<n;j++)
        {
            cout<<ch<<" ";         
            ch++;
        }
        cout<<endl;
    }
    return 0;
}