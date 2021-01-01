//Problem Link: https://www.codechef.com/JAN21C/problems/FAIRELCT
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

    int t, n, m, suma, sumb, step;
    cin>>t;
    FOR(i, 0, t){
        suma=0, sumb=0, step=0;
        cin>>n>>m;
        int a[n], b[m];
        FOR(j, 0, n){
            cin>>a[j];
            suma=suma+a[j];
        }
        FOR(j, 0, m){
            cin>>b[j];
            sumb=sumb+b[j];
        }
        sort(a, a+n);
        sort(b, b+m);
        int j=0;
        while(suma<=sumb && m>0 && j<n){
            suma=suma+b[m-1]-a[j];
            sumb=sumb+a[j]-b[m-1];
            m--;
            j++;    
            step++;
        }
        if(suma<=sumb)
            cout<<-1<<endl;
        else
            cout<<step<<endl;
    }
}
