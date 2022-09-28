#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {2, 3, 3, 2};
    int n = 4;
    int k = 3;

    int m = n / k;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }

    if (count >= m)
    {
        cout << m;
    }
    else
    {
        cout << "No element is present more than n/k times";
    }
}