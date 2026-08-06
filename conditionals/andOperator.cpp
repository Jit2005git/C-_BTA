#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%5 && n%2==0){
        cout<<"The number is divisible by 5 and even.";
    }
    if(n%5==0 && n%2!=0){
        cout<<"The number is divisible by 5 and odd.";
    }
    else{
        cout<<"The number is not divisible by 5 or not even.";
    }

    return 0;
}