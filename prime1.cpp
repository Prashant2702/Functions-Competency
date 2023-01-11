/*Finding a number is prime or not*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){

int n;
cin>>n;

bool flag=0;
for(int i=2;i<sqrt(n);i++){
    /*In above line we used sqrt which is defined in cmath header
    file in c++.We include sqrt because if the number having factors
     greater then its square root then it obiviously becomes the factor
     of 2 to square root(n). */
    if(n%i==0){
        cout<<"The number is non prime.";
        flag=1;
        break;
    }
}
if(flag==0){
    cout<<"prime"<<endl;
}



    return 0;
}