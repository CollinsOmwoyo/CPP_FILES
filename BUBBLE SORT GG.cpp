#include <iostream>
using namespace std;

#define MAX 100

int main()
{
	int arr[MAX];
	int n,i,j;
	int temp;
	
	cout<<"ENTER THE NUMBER OF ARRAY ELEMENTS FOR SORT: ";
	cin>>n;
	
	//CHECKING FOR BOUNDARY VALIDITY
	if(n<0 || n>MAX)
	{
		cout<<"ERROR!!! PLEASE ENTER A VALID NUMBER..."<<endl;
		return -1;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<"ENTER ELEMENT NO ["<<i+1<<"] :";
		cin>>arr[i];
	}
	
	cout<<"THE UNSORTED ARRAY ELEMENTS BY READ ORDER GROUPING:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	
	//CREATING AN ASCENDING ORDER GROUPING
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"THE SORTED ARRAY ELEMENTS ARE:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
	
	
	return 0;
	
}

