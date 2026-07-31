#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter the principle amount: ";
    cin>>p;
    cout<<"Enter the rate of interest: ";
    cin>>r;
    cout<<"Enter the time period: ";
    cin>>t;
    float si=(p*r*t)/100;
    cout<<"Simple interest is: "<<si<<endl;
    return 0;
}
   