#include<bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    vector<bool> primes(n+1,true);
    primes[0] = false;
    primes[1] = false;

    for(int i = 2 ; i*i <= n;i++)
    {
        if(primes[i] == true)
        {
            for(int j = i*i ; j<=n ;j+=i)
            {
                primes[j] = false;
            }
        }
    }

    cout<<"Primes Upto n are: ";
    for(int i = 0;i<n+1;i++)
    {
        if(primes[i])
        {
            cout<<i<<" ";
        }

    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    sieve(n);

}
