#include <bits/stdc++.h>
using namespace std;

int main() {
     int N;
     cin>>N;
     for(int i=1;i<=N/2;i++){
         cout<<i<<" "<<-i<<" ";
     }  if(N%2!=0)
        cout<<0<<" ";
	return 0;
}
