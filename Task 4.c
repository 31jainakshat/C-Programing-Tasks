#include<iostream.h>
#include<conio.h>

 void main()
  {
   int arr[20],i,n,sum=0;
   cout<<"How many elements you want to enter: ";
   cin>>n;
   cout<<"Enter any "<<n<<" elements in Array: ";
   for(i=0;i<n;i++)
   {
   cin>>arr[i];
   }
   cout<<"Sum of all Elements are: ";

   for(i=0;i<n;i++)
   {
    sum=sum+arr[i];
   }
   for(i=0;i<n;i++)
   {
   }
  cout<<sum;
  }
