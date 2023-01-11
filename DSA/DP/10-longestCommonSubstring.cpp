#include<bits/stdc++.h>
using namespace std;
vector<char>ans;
int main(){
string x="sea";
string y="eat";

int n=x.length();
int m=y.length();

 int dp[n+1][m+1];
        
        for(int i=0 ; i<n+1 ; i++){
          for(int j=0 ; j<m+1 ; j++){
              dp[i][j]=0;
          }
        }
        int maxi=0;
        for(int i=1 ; i<n+1 ; i++){
            for(int j=1 ; j<m+1 ; j++){
                if(x[i-1]==y[j-1])dp[i][j]=1+dp[i-1][j-1];
                if(dp[i][j]>maxi)maxi=dp[i][j];
            }
        }

    // cout<<maxi;
    cout<<m-maxi+(n-maxi);
}