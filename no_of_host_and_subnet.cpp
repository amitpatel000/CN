/* Program 9: Write a Program to calculate total number of subnets and total number of hosts given subnet mask as input by the user.
Input: 255.255.240.0
Output: No. of Subnets: 14
	    No. of Hosts: 4094 */
	    
#include <iostream>
#include <math.h>
using namespace std;

void decToBinary(int n,int binaryNum[]){
    
    int i = 7,count=0,bit=0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i--;

    }
	  cout<<"bits : ";
    for (int j = 0; j <=7; j++)
		{
		
        cout << binaryNum[j];
    }
    cout<<endl;
}
 
int main()
{
   int octat[4],dd=0,count1=0,hostbit,totalhost,subnetbit=0,totalsubnet;
   int binaryNum1[8]={0},dottet_decimal[32]={0};
   
for (int j = 0; j < 4; j++)
		{	int m=j;
         cout<<"enter octat "<<m+1<<" : ";
         cin>>octat[j];
      }
      
    for (int j = 0; j < 4; j++)
		{
		if(j<3)
		{
         cout<<octat[j]<<".";
      }  
      else
      {cout<<octat[j];
	  }}
      cout<<endl;
   for (int j = 0; j < 4; j++)
		{
			int m=octat[j];
			int binaryNum1[8]={0};
    		decToBinary(m,binaryNum1);
    		
    		for (int i=0;i<8;i++)
   			 {
    			dottet_decimal[dd]=binaryNum1[i];
    			dd++;
   			 }
       }
       
   



	if(octat[0]==255 && octat[1]==255 && octat[2]==255)
		{
         //it is class C address
         count1=24;
         for (int i=24;i<32;i++)
    		{
				if(dottet_decimal[i]==1)
					{
						subnetbit++;
						count1++;
					}
      		}
   		}
        else if(octat[0]==255 && octat[1]==255)
		{
          //it is class B address
          count1=16;
         for (int i=16;i<32;i++)
    		{
				if(dottet_decimal[i]==1)
					{
						subnetbit++;
						count1++;
					}
      		}
         }  
      else if(octat[0]==255)
		{
          //it is class A address
          count1=8;
         for (int i=8;i<32;i++)
    		{
				if(dottet_decimal[i]==1)
					{
						subnetbit++;
						count1++;
					}
      		}
         }
		else
		{
		   for (int i=0;i<32;i++)
    		{
				if(dottet_decimal[i]==1)
					{
						count1++;
					}
    		  }
 		 }
cout<<endl;

		  totalsubnet= (pow(2, subnetbit))-2;  
		 cout<<"no. of subnet are : "<<totalsubnet<<endl;
		 
		hostbit=32-count1;
		totalhost=(pow(2, hostbit))-2;
		cout<<"no. of host are : "<<totalhost;
		
    return 0;
}
