/*Program 8: Write a program to suggest the user that which class IP address he/she can adopt in order to perform networking (using Classful Addressing) 
Input: Number of Hosts 
Output: Suggested IP address Class/ Classes.*/

#include <iostream>
using namespace std;
 
int main()
{
   int host;
   cout<<"enter no. of host in your network : ";
   cin>>host;
      if(host<=254)
		{
         cout<<"you can class C address";
         }  
         
      else if(host<=65534)
		{
         cout<<"you can class B address";
         }  
         
      else if(host<=16777214)
		{
         cout<<"you can class A address";
         }  
         
      else
      cout<<"not defined ";
  
    return 0;
}
