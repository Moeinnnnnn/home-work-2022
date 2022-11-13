#include <iostream>

using namespace std;

main() {

int n,a,b,c,d,e,f,g,h,i,j,k,l ;

cout<<"please enter";

cin>> n;

a=n/100*5;
b=n-a;
c=n/100*10;
d=n-c;
e=n/100*15;
f=n-e;
g=n/100*20;
h=n-g;
i=n/100*25;
j=n-i;
k=n/100*35;
l=n-k;

if (n<6000000) {
	
	cout << n ;
}
else if (n>=6000000 && n<8000000) {
	cout<< b ;
}
else if (n>=8000000 && n<10000000) {
	cout << d ;
}
else if (n>=10000000 && n<14000000) {
	cout << f ;
}
else if (n>=14000000 && n<18000000) {
	cout << h ;
}
else if (n>=18000000 && n<25000000) {
	cout << j ;
}
else (n>25000000) ; {
	cout << l ;
}
}