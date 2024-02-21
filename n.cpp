#include<iostream>
using namespace std;

int solve(long long N){
   if(N==1 || N==0){
    return 2;
   }
   return 2*solve(N-1);
}

int main(){
   long long N = 6;
   cout<<solve(N)<<endl;
}