#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++) ////loop for print number of lines
    {
        int m=10;
        for(int j=1;j<=m;j++) ///inside loop for number of stars in a line
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}