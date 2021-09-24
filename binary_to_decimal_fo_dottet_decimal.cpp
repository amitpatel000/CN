#include<iostream>
#include<string.h>
using namespace std;

int binarytodecimal(string n)
{
	string num = n;
	int dec_value = 0;
	int base = 1;
	int len = num.length( );
	for (int i=len-1;i>= 0;i--)
	{
	if (num[i] == '1')
	dec_value += base;
	base = base * 2;	
	}
	return dec_value;
}	
int main()
	{
		 string octat[4];
		 int d[4];
   
   
	for (int j = 0; j < 4; j++)
		{	int m=j;
         cout<<"enter octat "<<m+1<<" in binary 8 bit : ";
         cin>>octat[j];
      }
     for (int j = 0; j < 4; j++)
		{	
        d[j]= binarytodecimal(octat[j]);
      }
      
      for (int j = 0; j < 4; j++)
		{
		if(j<3)
		{
         cout<<d[j]<<".";
      }  
      else
      {cout<<d[j];
	  }}
       
      return 0;
	
}
