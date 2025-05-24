#include<iostream>
using namespace std;

int main(){
    int n=3;
    int num=1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++) //spaces
        {   
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<(i+1);
        }
        cout<<endl;
    }
}


//111
// 22
 // 3