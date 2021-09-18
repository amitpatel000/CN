#include <iostream>
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

    return 0;
}
