#include<iostream>
using namespace std;
int partition(int a[],int l,int r)
{
	int pivot=a[r];
	int i=l-1;
	int j;
	for(j=l;j<=r-1;j++)
	{
		if(a[j]<=pivot)
		{
			i=i+1;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
	return i+1;
}
void quick(int a[],int l ,int r)
{
	if(l<r)
	{
		int x=partition(a,l,r);
		quick(a,l,x-1);
		quick(a,x+1,r);
	}
}
int main()
{
int a[10];
cout<<"Enter the element"<<endl;
for(int j=0;j<10;j++)
cin>>a[j];
quick(a,0,9);
for(int i=0;i<10;i++)
cout<<a[i]<<" ";	
}
