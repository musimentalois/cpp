#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void ConvertSectoDay(int n)
{
    int day = n / (24 * 3600);
    int y=day/365;
     cout<<"\nYears: "<<y<< endl;
}


int main()
{

    int n = 1000000000;
    ConvertSectoDay(n);
    return 0;
}
