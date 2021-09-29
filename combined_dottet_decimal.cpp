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
int dottet_b_t_d()
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
       	
}

 
int class_of_dottet_decimal()
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
  
}


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
 
int dottet_dec_t_binary()
{
   int octat[4],dd=0;
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
       
    cout<<"dottet decimal : ";
    for (int i=0;i<32;i++)
    {
	cout<<dottet_decimal[i];
	
      }
}

int main()
{
	int choice;
	cout<<"enter 1 for dottet decimal to binary "<<endl;
	cout<<"enter 2 for dottet  binary to decimal "<<endl;
	cout<<"enter 3 for checking class of dottet decimal "<<endl;
	cout<<"enter your choice : ";
	cin>>choice;
switch (choice) {
  case 1:
    dottet_dec_t_binary();
    break;
  case 2:
    dottet_b_t_d();
    break;
  case 3:
	class_of_dottet_decimal();
    break;
  default:
    cout << "you have entered wrong choice ";
}

return 0;
}
