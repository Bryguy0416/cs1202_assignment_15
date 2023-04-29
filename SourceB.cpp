#include<iostream>

// Bryson Criddell
// CIS 1202 101
// April 30, 2023
using namespace std;

//using template to receive and return any of the data type value

template <typename T>

//required half function

T half(T val){

T res;

res = val/2;

if(*typeid(val).name()=='i'){//as we need to round off the value, when val is of int type

if(res*2 != val){//since we know for odd integer value divisiom with 2 give .5 less, and we need to round up 0.5 or higher values

res++;//so we are increasing the number;

}

}

return res;//returning the half value

}

//required main function

int main(){

int a = 10;

float b = 2.36f;

double c = 5.468416;

//printing all the half values

cout<<"Half values of : \n";

cout<<"\t"<<a<<" : "<<half(a)<<"\n";

cout<<"\t"<<b<<" : "<<half(b)<<"\n";

cout<<"\t"<<c<<" : "<<half(c)<<"\n";

}