#include <iostream>
using namespace std;

void decToBinary(int n){

    int binaryNum[32];

    int i = 0,count=0,bit=0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;

    }
    
 	for (int j = i - 1; j >= 0; j--)
 	{
 	 if(binaryNum[j]==1)
 	  {  
 	  count++;
  		}
 	 }
 	 cout<<"count : "<<count<<endl;
 	 if(count%2 !=0)
 	 {
 	 	bit=1;
	  }
	  cout<<"bits : "<<bit;
    for (int j = i - 1; j >= 0; j--)
		{
		
        cout << binaryNum[j];
    }
}
 
int main()
{
   char alfa ;
   cout<<"enter any character : ";
   cin>>alfa;
   int asci=alfa;
   cout<<asci<<endl;
    decToBinary(asci);

    return 0;
}
