#include<bits/stdc++.h>
#include <unordered_map> 
using namespace std;
typedef long long ll;
#define Q 1000000007

void solve()
{

    ll n;
    cin>>n;
    ll ans=0;
    int arr[n+3][105][105];

    vector< pair<ll,ll> >v(n);
    for(int i=0;i<n;i++){
       cin>>v[i].first>>v[i].second;
     }

    arr[0][50][50]=1;

    for(int i=0;i<n;i++){
    for(int j=0;j<105;j++){
    for(int k=0;k<105;k++){

       if(arr[i][j][k]!=0)
         {
           arr[i+1][ j + v[i].first][ k + v[i].second] = (arr[i][j][k] + arr[i+1][ j + v[i].first][ k + v[i].second])%Q;
           arr[i+1][ j + v[i].first][ k - v[i].second] = (arr[i][j][k] + arr[i+1][ j + v[i].first][ k - v[i].second])%Q;
           arr[i+1][ j - v[i].first][ k + v[i].second] = (arr[i][j][k] + arr[i+1][ j - v[i].first][ k + v[i].second])%Q;
           arr[i+1][ j - v[i].first][ k - v[i].second] = (arr[i][j][k] + arr[i+1][ j - v[i].first][ k - v[i].second])%Q;
         }

    }
    }
    ans=(ans+arr[i+1][50][50])%Q;
    arr[i+1][50][50]++;
    }

   /** for(int i=0;i<=n;i++){
    for(int j=0;j<105;j++){
    for(int k=0;k<105;k++){
    cout<<arr[i][j][k];
    }
    cout<<endl;}cout<<endl;cout<<endl;}*/
        cout<<ans<<endl;
}


int main(){
    #ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif

    solve();

    return 0;
}