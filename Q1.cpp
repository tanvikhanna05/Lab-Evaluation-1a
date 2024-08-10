#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter degree of polynomial : ";
    cin>>n;

    vector<int> c(n+1,0);

    cout<<"Enter the coefficients"<<'\n';

    for(int i = 0;i<n+1;i++)
    {
        cout << "Coefficient of x^" << i << " \n";
        cin >> c[i];
    }

    cout<< "Current Polynomial : "<<'\n';

    for (int i = n; i >= 0; --i)
    {
        if (c[i] == 0) continue;

        if (i != n && c[i] > 0) cout << " + ";
        if (i == 0) cout << c[i];
        else if (i == 1) cout << c[i] << "x";
        else cout << c[i] << "x^" << i;
    }

    cout<<endl;

    vector<int> d(n);

    for(int i = 0;i<n;i++)
    {
        d[i] = c[i+1]*(i+1);
    }

    cout<< "Derivative : "<<'\n';
    for (int i = n-1; i >= 0; --i)
    {
        if (d[i] == 0) continue;

        if (i != n-1 && d[i] > 0) cout << " + ";
        if (i == 0) cout << d[i];
        else if (i == 1) cout << d[i] << "x";
        else cout << d[i] << "x^" << i;
    }

}
