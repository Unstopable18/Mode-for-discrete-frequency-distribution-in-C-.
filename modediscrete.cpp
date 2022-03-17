#include<iostream>
using namespace std;
int main() 
{
   int n, i,max,g;
   float arr[50],farr[50];
   
   cout<<"Enter Total No. of Elements = ";
   cin>>n;
   cout<<"\nEnter "<<n<<" Number of Elements:\n"; 
   for(i=0; i<n; i++)
   {
      cin>>arr[i];
   }
   cout<<endl;
   cout<<"Enter "<<n<<" Number of Frequency Elements:\n";  
   for(i=0; i<n; i++)
   {
      cin>>farr[i];
      max=farr[0];
   }
   for (i = 0; i < n; i++)
   {
      if (max < farr[i])
      max = farr[i];
   }
   cout<<endl;
   cout<<"Largest Frequency is found to be: "<<max;    
   for(i=0;i<n;i++)
   {
      if (farr[i]>=max)
      {
         g=i;
         break;
      }
   }
   cout<<endl;
  
   cout<<"\nMode is found to be: "<<arr[g];

   return 0;
}