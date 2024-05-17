/*In this problem you're given two integer a and b you need to choose a number x which gives
a smallest possible value of (a^x)+(b^x)

So we can find a smallest value if we can somehow remove the largest common value from both number a and b
If we perform and operation we get the larget common value x and after that we just simply perform the given opration
and get the expected result */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b;
        cin>>a>>b;
        ll p=(a&b);
        ll s=(a^p)+(b^p);
        cout<<s<<endl;
    }


}
