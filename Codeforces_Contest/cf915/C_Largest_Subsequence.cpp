#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define MOD 1000000007
#define inf 1000000010
#define endl "\n"
#define ull unsigned long long
#define con (f?"YES":"NO")
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

#define dpos(n) fixed << setprecision(n)

#define CLR1(a) memset(a, -1, sizeof(a))
#define CLR0(a) memset(a, 0, sizeof(a))

#define sortn(a,x,n) sort(a+x, a+x+n)
#define sortv(s) sort(s.begin(), s.end())
#define reversev(s) reverse(s.begin(), s.end())
#define reversesortv(s) sortv(s); reversev(s)
#define unik(a) unique(a.begin(), a.end()) - a.begin()

#define lowerbound(v,x) lower_bound(v.begin(), v.end(), x)-v.begin()
#define upperbound(v,x) upper_bound(v.begin(), v.end(), x)-v.begin()

#define pb push_back
#define loj(i,j) "Case "<<i<<": "<<j
#define gap " "

#define auto(x,a) for (auto& x : a)

int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

string getLexicog(){
    
}


int main() {
   ios_base::sync_with_stdio(false); cin.tie(0),cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        
        string s, tt, qq, pp;
        cin>>s;

        tt = s;
        sortv(tt);

        vector<int>in, rin;

        for(int i=n-1;i>=0;i--){
            if(in.empty() || s[i]>=s[in.back()]){
                in.push_back(i);
                qq+=s[i];
            }
        }

        reverse(qq.begin(), qq.end());
        pp=qq;
        sortv(pp);

        rin = in;
        reverse(rin.begin(), rin.end());

        // for(int x: rin) cout<<s[x];
        // cout<<endl;

        string p = s;
        for(int i=0;i<in.size();i++){
            p[in[i]] = s[rin[i]];
        }

        if(p!=tt){
            cout<<-1<<endl;
        }else{
            if(pp==qq) {cout<<0<<endl; continue;}
            int ans =qq.size();
            for(int i=1;i<qq.size();i++){
                if(qq[i-1]!=qq[i]){
                    ans = i;
                    break;
                }
            }

            cout<<qq.size()-ans<<endl;
        }


    }
}