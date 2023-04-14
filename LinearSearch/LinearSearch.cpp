#include <iostream>
using namespace std;

int arr[20];	//Array to be searched
int n;			//Number of elements in the Array
int i;			//Index of Array element

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the Array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should minimum 1 and maximum 20 elements.\n\n";
	}
	
	// Accept array elements
	cout << "\n=====================";
	cout << "Enter Array Elements : ";
	cout << "=======================";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}