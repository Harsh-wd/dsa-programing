#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    //functions
    //1.size
    cout<<"size- "<<vec.size()<<endl;
    //2. pushback //this function insert the values to the vector from back
    vec.push_back(25);
    vec.push_back(15);
    vec.push_back(10);
    cout<<"size after pushback- "<<vec.size()<<endl;

    //3.popback
    vec.pop_back(); //deletes last inserted value 10

    //4.front //returns the first value
    cout<<vec.front()<<endl;
    //5.back //returns the last value
    cout<<vec.back()<<endl;
    //6.at //access the values at particular index
    cout<<vec.at(1)<<endl;

    for(int val:vec){
        cout<<val<<endl;
    }
    return 0;
}