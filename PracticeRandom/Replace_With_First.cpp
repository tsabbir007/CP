#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define MOD 1000000007
#define inf 1000000010
#define endl "\n"
#define ull unsigned long long
#define con (f ? "YES" : "NO")
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#define dpos(n) fixed << setprecision(n)

#define clear1(a) memset(a, -1, sizeof(a))
#define clear0(a) memset(a, 0, sizeof(a))

#define sortn(a, x, n) sort(a + x, a + x + n)
#define sortv(s) sort(s.begin(), s.end())
#define reversev(s) reverse(s.begin(), s.end())
#define rsortv(s) sort(s.rbegin(), s.rend())
#define unik(a) unique(a.begin(), a.end()) - a.begin()
#define iotav(s, x) iota(s.begin(), s.end(), x)

#define lowerbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define upperbound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()

#define pb push_back
#define loj(i, j) "Case " << i << ": " << j
#define gap " "

#define auto(x, a) for (auto &x : a)

long long dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
long long dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    long long t;
    cin >> t;
    while (t--)
    {
        long long g, k;
        cin >> g >> k;
        string s, m;
        cin >> s >> m;

        long long mn = min(g, k), mx = max(g, k), cnt = 0;
        if (s == m) cout << 0 << endl;
        else if (s[0] != m[0]) cout << -1 << endl;
        else if(g==k) cout<<2<<endl;
        else
        {
            while(s.size() and m.size() and s.back()==m.back()){
                s.pop_back();
                m.pop_back();
            }

            bool f = true;
            for(int i=0; i<min(s.size(), m.size()); i++){
                if(s[i]!=m[i]){
                    f=false;
                    break;
                }
            }
            
            //cout<<s.size()<<endl;
            if(f) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
}