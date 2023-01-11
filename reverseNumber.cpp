/*Reversing a number*/
#include<iostream>
using namespace std;

int  main(){

int n;
cin>>n;

int reverse=0;
while(n>0){
    int lastdigit= n%10;/*A number when divides by 10 thenthe remainder is equal to the number at the one's palce.*/
    reverse  = reverse*10+lastdigit;
    n=n/10;/*By this the last digit will delete from the number.*/
}
cout<<reverse<<endl;
    return 0;
}