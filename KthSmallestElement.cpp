#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    
    int arr[]={7 ,10 ,4 ,3 ,20 ,15};
    int n=6;

    int k=3;

    sort(arr,arr+n);
    int m=0;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
       m=arr[k-1];
    }
    cout<<endl;
cout<<m;

}