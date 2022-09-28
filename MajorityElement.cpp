#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={3,1,3,3,2};
    int n=5;
  int k=n/2;
  sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i]==arr[i+1]==arr[i+2])
        {
           cout<<arr[i];
           break;
        }

        //still wrong concecpt !
        
    }
   
      
}