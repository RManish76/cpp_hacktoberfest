#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int count(int n);
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
}
/*
    Example of input and output
    N = 1567
Number of digits = 4

N = 256
Number of digits = 3

N = 58964
Number of digits = 5

    number of digits in N = log10(N) + 1.
Derivation: Suppose the number of digits in the number N is K.

Therefore, we can say that:
10K-1 <= N < 10K
Applying base-10 logarithm to both sides in the above equation, we get:
K-1 <= log10(N) < K.

or, K - 1 + 1 <= log10(N) + 1 < K + 1
or, K <= log10(N) + 1 < K + 1 
Therefore,
K = floor(log10(N) + 1)

*/


//Funtion for counting number in a given number
int count(int n)
{
    int res;
    res=floor(log10(n)+1);
    return(res);
}