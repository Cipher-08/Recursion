#include<iostream>
using namespace std;


int fibo(int n)
{
    ///base class;
    if(n==0 or n==1) return n;
    ///recurssive assumptioons 
    int newf= fibo(n-1);
    int newg=fibo(n-2);
    //// self work 
    return newf+newg;


}

void print(int n)
{
    if(n==0)return ;
    cout << n << endl;

    print(n - 1);
}
void printGreat(int n)
{
   if(n==1)
   {
       cout<<1<<endl;
       return;
   }
   cout<<n<<endl;
   printGreat(n-1);
   cout<<n<<endl;
}
int main( ){
  
  printGreat(5);

}
