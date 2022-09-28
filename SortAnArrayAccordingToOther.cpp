#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr1[]={2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int arr2[]={2, 1, 8, 3};

    int n=11;
    int m=4;

    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    for (int i = 0; i < n; i++)
    {
       if (arr1[i]==arr2[i])
        {
            cout<<arr1[i]<<" ";
            continue;
        }
        
    }

    for ( int i = 0; i < n; i++)
    {
        
           if (arr1[i]!=arr2[i+1])
           {
            cout<<arr1[i]<<" ";
           }
           
        
        
    }
    
    
}