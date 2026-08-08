#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The factors of 7 are: ";
    for(int i=1;i<=n;i++){
        if(7%i==0){
            cout<<i<<" ";
        }
    }
}