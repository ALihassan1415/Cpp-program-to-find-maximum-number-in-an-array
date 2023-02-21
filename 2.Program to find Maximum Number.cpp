//Write a program to find maximum number in an array...

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n----------------------------------";
	int max=arr[0];
	for(int i=1;i<5;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	
	cout<<"\nThe maximum number is : "<<max;
	return 0;
}