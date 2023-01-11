/*Printing all the prime 
numbers between 2 given numbers*/
#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num){/*We use bool here as we are going to return the boolean value 0 or 1.*/
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
    /*Above logic is for finding the number is prime or not.*/
}

int main(){

int a,b;
cin>>a>>b;

for(int i=a;i<=b;i++){
  if(isPrime(i)==true){
    cout<<i<<endl;
  }
}
    return 0;
}