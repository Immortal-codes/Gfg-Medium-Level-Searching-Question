#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        while (A[i] > 0 && A[i] <= n && A[i] != A[A[i] - 1])
        {
            swap(A[i], A[A[i] - 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] != i + 1)
            return i + 1;
    }
    return n + 1;
}