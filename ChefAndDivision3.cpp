//Problem Link: https://www.codechef.com/JAN21C/problems/DIVTHREE
/*
  Author: Rajat Soni
*/

#include<bits/stdc++.h>
using namespace std;
// typedef long l;
// typedef long long ll;
typedef vector<int> vi;
// typedef vector<char> vc;
typedef std::vector<int>::iterator Auto;
// #define PB push_back
#define FOR(i,a,b)  for(long long int i=a;i<b;i++)
#include <vector>


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif

    int t, n;
    long long int k, d, problems, an;
    cin>>t;
    FOR(i, 0, t){
        problems=0;
        cin>>n>>k>>d;
        FOR(j, 0, n){
            cin>>an;
            problems=problems+an;
        }
        if(problems/k>=d)
            cout<<d<<endl;
        else
            cout<<problems/k<<endl;
    }
}
