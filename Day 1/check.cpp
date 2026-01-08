#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"\nEnter a number: ";
    cin>>num;
    if(num>0){
        cout<<num<<" is positive ";
    }
    else if(num<0){
        cout<<num<<" is negative";
    }
    else{
        cout<<num<<" is Zero";
    }
    return 0;


}
