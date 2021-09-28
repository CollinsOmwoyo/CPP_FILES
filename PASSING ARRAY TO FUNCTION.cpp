#include <iostream>
using namespace std;
void sum(int ARRAY1[], int ARRAY2[])
{
	int free[5];
	for (int i=0;i<5;i++)
	{
	free[i]=ARRAY1[i]+ARRAY2[i];
	cout<<free[i]<<endl;	
	}
}
int main()
{
	int A[5]={10};
	int B[5]={5};
	sum(A,B);
	return 0;
}
