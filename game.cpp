#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define BIG 1000000010
#define repi(i,x,n) for(int i=x;i<n;i++)
#define rep(i,n) repi(i,0,n)
#define repn(i,n) for(int i=n;i>=0;i--)
typedef long long int ll;




int ran[6]={1,2,3,4,5,6};

void Rolldice(){
  random_device gen;
  mt19937 engine(gen() );
  shuffle(ran,ran+6,engine);
}

int main(){
  cout<<"Rolling the dice..."<<endl;
  Rolldice();
  int d1=ran[0];
  Rolldice();
  int d2=ran[0];
  int total=d1+d2;
  cout<<"Die 1: "<<d1<<endl;
  cout<<"Die 2: "<<d2<<endl;
  cout<<"Total value: "<<total<<endl;
  if(total > 7) cout<<name<<" won!"<<endl;
  else cout<<name<<" lost."<<endl;
  return 0;
}
