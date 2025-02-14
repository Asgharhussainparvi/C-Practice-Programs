#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,sum;
	i=1;
	sum=0;
	while(i<=15)
	{
		sum=sum+i;
		i=i+1;
	}
	cout<<"the sum is:"<<sum<<endl;
	cout<<"the total iteration is:"<<i;
getche();
}
