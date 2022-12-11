#include<iostream>
using namespace std;
int insert(int arr[], int n, int key, int capacity)
{
	if (n >= capacity)
		return n;
	int i;
	for (i = n - 1; (i >= 0 && arr[i] > key); i--)
		arr[i + 1] = arr[i];
	arr[i + 1] = key;
	return (n + 1);
}

int main()
{
	int arr[10] = { 10,20,30,40,50,95,101,212,300};
	int capacity =10;
	int n = 9;
	int i,key;
	cout<<"Enter number for insert : ";
	cin>>key;
	cout << "\nBefore Insertion: ";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	n = insert(arr, n, key, capacity);
	cout << "\nAfter Insertion: ";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}



