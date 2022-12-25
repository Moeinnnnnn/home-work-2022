#include <iostream>
using namespace std;
int power(int n1,int n2);
int main()
{
   int base, exp;
   cout << "Enter base number: ";
   cin >> base;
   cout << "Enter power number(positive integer): ";
   cin >> exp;
   cout << base << " ^ " << exp << " = " << power(base, exp);
   return 0;
}
int power(int base,int exp) 
{ 
   if ( exp!=1 ) 
        return (base*power(base,exp-1)); 
}

