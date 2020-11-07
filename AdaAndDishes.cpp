//Problem Link: https://www.codechef.com/NOV20B/problems/ADADISH
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

    int t, n;
    cin>>t;
    FOR(i, 0, t){
    	int output, a, issame=1, diff;
    	cin>>n;
    	vector<int> c;
    	FOR(i, 0, n){
    		cin>>a;
    		c.push_back(a);
    		if(i>0){
    			if(a!=c[i-1])
    				issame=0;
    		}
    	}
    	if(issame==1 && n>1){
    		if(n%2==0)
    			cout<<(n/2)*c[0]<<endl;
    		else
    			cout<<((n+1)/2)*c[0]<<endl;
    	}
    	else if(n==1)
    		cout<<c[0]<<endl;
    	else if(n==2)
    		cout<<max(c[0], c[1])<<endl;
    	else if(n==3){
    		sort(c.begin(), c.end(), greater<int>());
    		if(c[0]-c[1]>=c[2])
    			cout<<c[0]<<endl;
    		else
    			cout<<c[2]+c[1]<<endl;
    	}
    	else{
    		sort(c.begin(), c.end(), greater<int>());
    		int diff=c[0]-c[1];
    		if(diff>=c[2]){
    			diff=diff-c[2];
    			c[2]=0;
    			if(diff>=c[3])
    				cout<<c[0]<<endl;
    			else
    				cout<<c[0]+c[3]-diff<<endl;
    		}
    		else{
    			c[2]=c[2]-(c[0]-c[1]);
    			cout<<c[0]+max(c[2], c[3])<<endl;
    		}

    	}
    }
}


