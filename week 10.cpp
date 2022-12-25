#include<iostream>
#include <math.h>
#define PI 3.14
using namespace std;
float factorial(int exponent);
int menu();
float compute_sine(int);
float compute_cosine(int);
float rad,deno,numa,result;
int exponent;
int n,i,t;
int main()
{
   int deg;
   cout << "Enter the Degree:";
   cin >> deg;
   float sin=compute_sine(deg);
   float cos=compute_cosine(deg);
   cout<<"tan "<<deg<<" = "<<sin/cos;
   return 0;
}
float compute_sine(int deg)
{
    n = 11;
    result = 0.0;
    rad = deg * PI/180;
	for( i = 0;i< n;i++) 
	{
    	exponent = (2 * i) + 1;
	    numa = pow(rad,exponent);
	    deno = factorial(exponent);
	    result = result + ((numa * pow(-1,i))/deno);
	}
  return result;

}
//***************************************************
float factorial(int exponent)
{
    int i;
    float fact = 1.0;
	for(i = 1;i <= exponent;i++)
	{
    	fact = fact * i;
	}
    return(fact);
}
//****************************************************
float compute_cosine(int deg)
{
    n = 11;
    result = 0.0;
    rad = deg * PI/180;
	for( i = 0;i < n;i++)
	{
    	exponent = 2 * i;
	    numa = pow(rad,exponent);
	    deno = factorial(exponent);
	    result = result + ((numa * pow(-1,i))/deno);
	}
    return result;
}
