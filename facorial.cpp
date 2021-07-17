#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    ///now for doing a recursion problem we can break it into 3 steps
    ///1. base class
    if(n==1)return 1;///here we know that the mimimum value which can be touched in this is 1 as 1!=1
    ///2. recursive assumptions 
    int recassumption = fact(n-1);///here we are saying to the system that we can find the factorial of n if uhh give us the factorial of n-1///
    ///3. self work to be done 
    return n* recassumption;////here we only have to multiply these two as the second one is only giving by the funmction itself
}
int main(){
 
/* Code here  */
 cout<<"factorial of 4 = "<<fact(4)<<endl;
 cout<<"factorial of 5 = " << fact(5) << endl;
 cout <<"factorial of 6 = "<< fact(6) << endl;

 return 0;
}
