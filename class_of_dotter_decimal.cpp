#include <iostream>
using namespace std;
 
int main()
{
   int octat[4];
   
for (int j = 0; j < 4; j++)
		{	int m=j;
         cout<<"enter octat "<<m+1<<" : ";
         cin>>octat[j];
      }
      
		if(octat[0]>=0 && octat[0]<=127)
		{
         cout<<"it is class A address";
         }  
        else if(octat[0]>=128 && octat[0]<=191)
		{
         cout<<"it is class B address";
         }  
      else if(octat[0]>=192 && octat[0]<=223)
		{
         cout<<"it is class C address";
         }  
      else if(octat[0]>=224 && octat[0]<=239)
		{
         cout<<"it is class D address";
         }  
      else if(octat[0]>=240 && octat[0]<=255)
		{
         cout<<"it is class E address";
         }  
      else
      cout<<"it does not belong to any of the class ";
  
    return 0;
}
