#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int A[]={1, 1, 2, 5, 5};
    int n=5;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if(A[i]!=A[i-1] && A[i]!=A[i+1])
        {
            cout<<A[i];
            break;
          
        }
        
      }
      
       
    }
    
}