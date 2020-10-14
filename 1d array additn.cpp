#include<iostream>
using namespace std;
int main()
{
	int a[5],i=0,sum=0;
	cout<<"enter 5 nos. to add";
	while(i<5){
		cin>>a[i];
		sum=sum+a[i];
		i++;
		
	}
	cout<<"sum = "<<sum;
	return 0;
}
