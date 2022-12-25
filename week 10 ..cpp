#include<iostream>
using namespace std;
int bmm(int x,int y)
{
    if((x%y)!=0) 
	     return(bmm(x=y,x%y));
	else return(y);
}
int main()
{
	int x,y;
	cout<<"Enter X: ";
	cin>>x;
	cout<<"\nEnter Y: ";
	cin>>y;
	cout<<"\n\nBMM: "<<bmm(x,y);
   return 0;
}

