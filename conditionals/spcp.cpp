#include<iostream>
using namespace std;
int main(){
    int cp, sp;
   cout<<"Enter Cost Price of Product: ";
   cin>>cp;
   cout<<"Enter Selling Price of Product: ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit of "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"Loss of "<<cp-sp;
    }
    else{
        cout<<"No Profit No Loss";
    }
    return 0;
}