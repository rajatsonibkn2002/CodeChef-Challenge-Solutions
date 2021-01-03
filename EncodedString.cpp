//Problem Link: https://www.codechef.com/JAN21C/problems/DECODEIT
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

    long long int t, n, p;
    string s, ss;
    cin>>t;
    FOR(i, 0, t){
        p=0;
        cin>>n>>s;
        while(p<n){
            ss="";
            ss=ss+s[p]+s[p+1]+s[p+2]+s[p+3];
            p=p+4;
            if(ss=="0000")
                cout<<'a';
            else if(ss=="0001")
                cout<<'b';
            else if(ss=="0010")
                cout<<'c';
            else if(ss=="0011")
                cout<<'d';
            else if(ss=="0100")
                cout<<'e';
            else if(ss=="0101")
                cout<<'f';
            else if(ss=="0110")
                cout<<'g';
            else if(ss=="0111")
                cout<<'h';
            else if(ss=="1000")
                cout<<'i';
            else if(ss=="1001")
                cout<<'j';
            else if(ss=="1010")
                cout<<'k';
            else if(ss=="1011")
                cout<<'l';
            else if(ss=="1100")
                cout<<'m';
            else if(ss=="1101")
                cout<<'n';
            else if(ss=="1110")
                cout<<'o';
            else
                cout<<'p';
        }
        cout<<endl;
    }
}
