#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n,i=0,array[10];
    for(i=0;i<10;i++)
      array[i]=fibonacci(i);
    for(i=0;i<10;i++)
        cout<<array[i]<<" , ";
}
