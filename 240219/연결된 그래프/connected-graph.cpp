#include <iostream>
#include <stack>
using namespace std;

int n,m;
bool map[101][101]={0,};
stack<pair<int,int>> st;

int dfs(int num){
    int cnt=0;

    for(int i=1;i<=n;i++){
        if(map[num][i]==true){
            cnt++;
            dfs(i);
        }
    }

    return cnt;
}

int main() {
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        map[a][b]=true;
    }

    cout<<dfs(1)+1<<endl;

    return 0;
}