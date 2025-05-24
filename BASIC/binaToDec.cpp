#include<iostream>
using namespace std;

int bin(int num){
    int ans=0,pow=1;

    while(bin>0){
        int rem=num%10;
        ans+=rem*pow;

        num/=10;
        pow*=2;
    }
    return ans;
}
int main()
{
    cout<<bin(1010)<<endl;
    return 0;
}