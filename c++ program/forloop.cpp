#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
	int i,sum;
	sum=0;
	for(i=30;i<=60;i=i+3)
	  {
	  	cout<<" No of iteration :"<<i<<endl;
	    sum=sum+i;
	  }
	
	cout<<"sum is :"<<sum;
	getche();
}
