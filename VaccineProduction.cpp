//Problem Link: https://www.codechef.com/DEC20B/problems/VACCINE1
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

    float d1, v1, d2, v2, p, d=0;
    cin>>d1>>v1>>d2>>v2>>p;
    if(d2>=d1){
    	if((d2-d1)*v2<p){
    		p = p - ((d2-d1)*v1);
    		d = d + (d2 - d1);
    		d = d + ceil(p/(v1+v2)) + (d1 - 1);
    	}
    	else
    		d=(d1-1)+ceil(p/v1);
    }
    else{
    	if((d1-d2)*v2<p){
    		p = p - ((d1-d2)*v2);
    		d = d + (d1 - d2);
    		d = d + ceil(p/(v1+v2)) + (d2 - 1);
    	}
    	else
    		d=(d2-1)+ceil(p/v2);
    }
    cout<<d;
}
