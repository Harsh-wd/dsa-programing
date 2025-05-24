#include<iostream>
using namespace std;

int main(){
    int n,i;
    int sum=0;
    cout<<"enter number range: ";
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    cout<<"sum of odd is: "<<sum;

}