#include<iostream>
#include<algorithm>
#include <cmath>

using namespace std;

int main()
{
    int x=4;
    int l=0;
    int h=x;
    
    while(h>=l)
    {
        int m=(l+h)/2;

        if (m*m==x)
        {
            cout<<m;
        }                    //wrong logic !!
        if (m*m<x)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }

    }
      cout<<h;

}