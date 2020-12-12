//Problem Link: https://www.codechef.com/DEC20B/problems/POSPREFS
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

  	int n, k, t, cp, cn;
  	cin>>t;
  	FOR(i, 0, t){
  		cin>>n>>k;
  		cp=0;
  		cn=0;
  		FOR(j, 1, n+1){
  			if(cp!=k){
  				if(j%2==0){
  					if(cn!=n-k){
  						cout<<-j<<" ";
  						cn++;
  					}
  					else{
  						cout<<j<<" ";
  					}
  				}
  				else{
  					cout<<j<<" ";
  					cp++;
  				}
  			}
  			else
  				cout<<-j<<" ";
  		}
  		cout<<endl;
  	}
}
