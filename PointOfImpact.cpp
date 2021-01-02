//Problem Link: https://www.codechef.com/JAN21C/problems/BILLRD
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

    long long int t, n, k, x, y;
    cin>>t;
    FOR(i, 0, t){
        int a[4], b[4];
        int j=1;
        cin>>n>>k>>x>>y;
        if(x==y){
            x=n, y=n;
        }
        else if(x<y){
            x=x+(n-y), y=n;
        }
        else{
            y=y+(n-x), x=n;
        }
        a[0]=x;
        b[0]=y;
        if((x==n&&y==n)||(x==n&&y==0)||(x==0&&y==n)||(x==0&&y==0)){
            cout<<x<<" "<<y<<endl;
        }
        else{
            if(x==n){
                x=x-(n-y);
                y=n;
                a[1]=x;
                b[1]=y;
                y=y-x;
                x=0;
                a[2]=x;
                b[2]=y;
                x=x+y;
                y=0;
                a[3]=x;
                b[3]=y;
                if(k%4==0)
                    cout<<a[3]<<" "<<b[3]<<endl;
                else if(k%4==1)
                    cout<<a[0]<<" "<<b[0]<<endl;
                else if(k%4==2)
                    cout<<a[1]<<" "<<b[1]<<endl;
                else
                    cout<<a[2]<<" "<<b[2]<<endl;
            }
            else{
                y=y-(n-x);
                x=n;
                a[1]=x;
                b[1]=y;
                x=x-y;
                y=0;
                a[2]=x;
                b[2]=y;
                y=y+x;
                x=0;
                a[3]=x;
                b[3]=y;
                if(k%4==0)
                    cout<<a[3]<<" "<<b[3]<<endl;
                else if(k%4==1)
                    cout<<a[0]<<" "<<b[0]<<endl;
                else if(k%4==2)
                    cout<<a[1]<<" "<<b[1]<<endl;
                else
                    cout<<a[2]<<" "<<b[2]<<endl;

            }
            
        }
    }
}
