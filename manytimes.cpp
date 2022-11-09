#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int times_it_occurs(int number[], int n, int x)
{
    int res = 0;
    for (int i=0; i<n; i++)
        if (x == number[i])
          res++;
    return res;
}


int main()
{
    int number[] = {4,2,3,4,2,3,4,2,4,2,4};
    int n = sizeof(number)/sizeof(number[0]);
    int x = 4;
    cout << times_it_occurs(number, n, x);
    return 0;
}
