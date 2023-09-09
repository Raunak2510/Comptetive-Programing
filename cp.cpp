#include <bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const int MAX = (int)(1e9 + 7);
const int MIN = (int)(-1);
const int DIVISOR = (int)(1e6 + 1);
using namespace std;
const int N=1e3+10;
int graph1[N][N];    // this is for adcency matrix
 vector<int> graph2[N]; // adcency list

void solve(){
    int n,m;
    cin>>n>>m;
   
    for(int i=0; i<m; i++){
       int v1,v2;
       cin>>v1>>v2;
       graph1[v1][v2]=1;
       graph1[v2][v1]=1;
       graph2[v1].push_back(v2);
       graph2[v2].push_back(v1);
    }
  

}

int main() {
    solve();
    return 0;
}
