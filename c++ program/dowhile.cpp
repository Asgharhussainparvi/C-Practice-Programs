#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
   int a,b;
   char ch;
   do
   {
   cout<<"enter the first numbers";
   cin>>a;
   cout<<"enter the second number";
   cin>>b;
   cout<<"porduct of the numbers:"<<a*b<<endl;
   cout<<" do you want to continue? y/n:";
   cin>>ch;
   }
   while(ch!='n');
   getche();
}
   
