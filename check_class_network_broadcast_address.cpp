/*Program 7: Write a program to find out the Class, Network Address and Broadcast Address of the IP address provided by
 the user (in classful Addressing). */
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
         cout<<"it is class A address"<<endl;
         cout<<"network address : "<<octat[0]<<".0.0.0"<<endl;
     	 cout<<"Broadcast address : "<<octat[0]<<".255.255.255"<<endl;
         }  
        else if(octat[0]>=128 && octat[0]<=191)
		{
         cout<<"it is class B address"<<endl;
         cout<<"network address : "<<octat[0]<<"."<<octat[1]<<".0.0"<<endl;
     	 cout<<"Broadcast address : "<<octat[0]<<"."<<octat[1]<<".255.255"<<endl;
         }  
      else if(octat[0]>=192 && octat[0]<=223)
		{
         cout<<"it is class C address"<<endl;
         cout<<"network address : "<<octat[0]<<"."<<octat[1]<<"."<<octat[2]<<".0"<<endl;
     	 cout<<"Broadcast address : "<<octat[0]<<"."<<octat[1]<<"."<<octat[2]<<".255"<<endl;
         }  
      else if(octat[0]>=224 && octat[0]<=239)
		{
         cout<<"it is class D address"<<endl;
         cout<<"network address : "<<octat[0]<<"."<<octat[1]<<"."<<octat[2]<<"."<<octat[3]<<endl;
     	 cout<<"Broadcast address : "<<octat[0]<<"."<<octat[1]<<"."<<octat[2]<<"."<<octat[3]<<endl;
         }  
      else if(octat[0]>=240 && octat[0]<=255)
		{
         cout<<"it is class E address"<<endl;
         cout<<"network address : "<<octat[0]<<"."<<octat[1]<<"."<<octat[2]<<"."<<octat[3]<<endl;
     	 cout<<"Broadcast address : "<<octat[0]<<"."<<octat[1]<<"."<<octat[2]<<"."<<octat[3]<<endl;
         }  
      else
      cout<<"it does not belong to any of the class ";
  
    return 0;
}

