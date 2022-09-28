#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {3,2,1};
    int n = 3;
    int sum = 0;
    int k[] = {};
    int i;

    for (i = 0; i <n; i++)
    {
       sum = arr[i]+arr[i+1];
        k[i] = sum;
    }

    
    
    sort(k,k+2);
    
    for (i = 0; i < n; i++)
    {
      cout<<k[i]<<" ";
    }
    
}