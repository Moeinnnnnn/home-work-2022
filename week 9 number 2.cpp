#include<iostream>
#define MAX 100000
using namespace std;
int findmin(int array[], int n)
{
	int first = MAX, sec = MAX;
	for (int i = 0; i < n; i++)
	{
		if (array[i] < first)
		{
			sec = first;
			first = array[i];
		}
	}
	cout << "\nFirst min = " << first << "\n";
	cout << "Second min = " << sec << "\n";
}
int main()
{
	int array[MAX];
	int n;
	cout<<"Enter number array : ";
	cin>>n;
	cout<<"Please Enter "<<n<<" number : \n";
	for(int i=0;i<n;i++)
	    cin>>array[i];
	cout<<"\n array is : \n";
	for(int i=0;i<n;i++)
	    cout<<array[i]<<" ";
	findmin(array, n);
	return 0;
}

