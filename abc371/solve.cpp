#include <iostream>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

#define voila ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define println(s) cout<<s<<endl
#define rep(s,i,n) for(int i=s;i<n;i++)
#define repstr(c,s) for(auto c: s)

void solve() {
    char SAB,SAC,SBC;
    cin>>SAB>>SAC>>SBC;
    if(SAB == '>') {
        if(SAC == '>') {
            if(SBC == '>') {
                println("B");
            } else {
                println("C");
            }
        } else {
            println("A");
        }
    } else {
        if(SAC == '>') {
            println("A");
        } else {
            if(SBC == '>') {
                println("C");
            } else {
                println("B");
            }
        }
    }
}

int main(){
    voila

#ifndef ONLINE_JUDGE
    // For getting input from input.txt file
    // freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    // freopen("output.txt", "w", stdout);
#endif

    int tt=1;
    // cin>>tt;
    while(tt--) solve();

    return 0;
}
