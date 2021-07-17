#include <bits/stdc++.h>
using namespace std;

// int line(int a)
// {

//     if (a == 1)
//     {
//         cout << "*";
//     }
//     else
//     {
//         cout << "*"
//              << " ";
//         return line(a - 1);
//     }
// }
// int pattern(int n)
// {
   
//    ////base class
//    if(n==1) {
//        cout<<"*";

//    }
//    else{
       
//     line(n);
//        cout << endl;

//        return pattern(n-1);
     
//    }

// }


int pattern(int n,int i){
    if(n==1){
        cout<<"*";
    }
    else{
    if(i<n)
    {
        pattern(n,i+1);
        cout<<"*"<<" ";
    }
    else{
        pattern(n-1,0);
        cout << endl;
    }
    }
}

int main(){
 
pattern(10,0);
 
return 0;
}
