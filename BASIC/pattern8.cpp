#include<iostream>
using namespace std;
int main()
{
    int n=4;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++) //spaces
        {
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++) //num1
        {
            cout<<j;
        }
        for(int j=i;j>0;j--)  //num2
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

//    1
//   121
//  12321
// 1234321