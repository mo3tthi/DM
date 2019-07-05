#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define BIG 1000000010
#define repi(i,x,n) for(int i=x;i<n;i++)
#define rep(i,n) repi(i,0,n)
#define repn(i,n) for(int i=n;i>=0;i--)
typedef long long int ll;




int ran[6]={1,2,3,4,5,6};

void randset(){
  random_device gen;
  mt19937 engine(gen() );
  shuffle(ran,ran+6,engine);
}

int main(){
  cout<<"Rolling the dice..."<<endl;
  randset();
  int d1=ran[0];
  randset();
  int d2=ran[0];
  cout<<"Die 1: "<<d1<<endl;
  cout<<"Die 2: "<<d2<<endl;
  cout<<"Total value: "<<d1+d2<<endl;
  return 0;
}
