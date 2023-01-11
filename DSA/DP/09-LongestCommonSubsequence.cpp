#include <bits/stdc++.h>
using namespace std;
int solve(string x , string y ,int n , int m){
    if(n==0||m==0)return 0;
     if(x[n-1]==y[m-1]){
         return 1+solve (x,y,n-1,m-1);
    }
    else {
        return max(solve(x,y,n,m-1),solve(x,y,n-1,m));
    }
}
int main(){
   string x="abcdgaaaaa";
   string y=x;
   reverse(y.begin(),y.end());

   int n=x.size();
   int m=y.size();
   cout<<solve(x,y,n,m);
}

// recursion +memoization
// #include <bits/stdc++.h>
// using namespace std;
// int t[6+1][7+1];
// int solve(string x , string y ,int n , int m){
//     if(n==0||m==0)return 0;
//     if(t[n][m]!=-1)return t[n][m];
//      if(x[n-1]==y[m-1])   return t[n][m]=1+solve (x,y,n-1,m-1);
//     else return t[n][m]=max(solve(x,y,n,m-1),solve(x,y,n-1,m));
// }
// int main(){
//        string x="abcdgh";
//    string y="abedfhr";
//    int n=x.size();
//    int m=y.size();
//    memset(t,-1,sizeof(t));
//    cout<<solve(x,y,n,m);
// }

// top down dp
// #include <bits/stdc++.h>
// using namespace std;
//  int main(){
//        string x="abcdgh";
//    string y="abedfhr";
//    int n=x.size();
//    int m=y.size();
//   int dp[n+1][m+1];
//   memset(dp,0,sizeof(dp));
//   for(int i=1 ; i<=n;i++ ){
//       for(int j=1 ; j<=m ; j++){
//           if(x[i-1]==y[j-1]){
//               dp[i][j]=1+dp[i-1][j-1];
//           }
//           else {
//               dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
//           }
//       }
//   }
//   cout<<dp[n][m];
// }