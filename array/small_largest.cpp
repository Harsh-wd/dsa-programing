#include<iostream>
using namespace std;

int main(){
    int num[6]={12,5,62,4,-9,-89};
    int index;


    int smallest=INT16_MAX; ///int max is an large value from which we have to compare
    int largest=INT16_MIN;
    for(int i=0;i<6;i++){

        //their is also min and max function which compares the values.
        // we can use it instead of 'if condition'
        
        smallest=min(num[i],smallest);
        if(smallest==num[i]){
            index=i;
        }
        largest=max(num[i],largest);
        // if(num[i]<smallest){
        //     smallest=num[i];
        // }
    }
    cout<<"small index"<<index<<endl;

    cout<<"smallest is "<<smallest<<endl;
    cout<<"largest is "<<largest<<endl;
}