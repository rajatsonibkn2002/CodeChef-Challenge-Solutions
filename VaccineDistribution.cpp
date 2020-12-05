//Problem Link: https://www.codechef.com/DEC20B/problems/VACCINE2
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
    float n, d, a, risk;
    cin>>t;
    FOR(i, 0, t){
    	cin>>n>>d;
    	risk=0;
    	FOR(j, 0, n){
    		cin>>a;
    		if(a<=9 || a>=80)
    			risk++;
    	}
    	cout<<ceil(risk/d)+ceil((n-risk)/d)<<endl;
    }
}
