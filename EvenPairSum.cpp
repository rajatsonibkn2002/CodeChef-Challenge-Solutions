//Problem Link: https://www.codechef.com/DEC20B/problems/EVENPSUM
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
#define FOR(i,a,b)  for(int i=a;i<b;i++)
#include <vector>


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 		
    freopen("output","w",stdout);
    #endif

    int t;
    unsigned long long int a, b, out;
    cin>>t;
    FOR(i, 0, t){
    	cin>>a>>b;
    	if(a%2==0 && b%2==0)
    		cout<<((a/2)*(b/2))*2<<endl;
    	else if(a%2==0 && b%2!=0)
    		cout<<((a/2)*(b/2+1))+((a/2)*(b/2))<<endl;
    	else if(a%2!=0 && b%2==0)
    		cout<<((b/2)*(a/2+1))+((b/2)*(a/2))<<endl;
    	else
    		cout<<((a/2+1)*(b/2+1))+((a/2)*(b/2))<<endl;
    }
}
