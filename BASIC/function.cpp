#include<iostream>
using namespace std;


//sum of 2
int sum(int a,int b)
{
    int s=a+b;
    return s;
}

//min of 2
int min(int a,int b)
{
    if(a>=b)
    {
        return b;
    }
    else{
        return a;
    }

}

//sum 1 to N

int sumN(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
    
}

//n factorial

int fac(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}


//sum of digits

int sumD(int n)
{
    int digit_sum=0;
    while(n>0){
        int last_digit=n%10;
        n=n/10;
        digit_sum=digit_sum+last_digit;
    }
    return digit_sum;
}
int main()
{
    //cout<<sum(10,5);
    //cout<<min(10,11);
    //cout<<sumN(5);
    //cout<<fac(4);
    cout<<"sum is "<<sumD(1234)<<endl;
    return 0;
}