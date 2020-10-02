#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;
typedef vector<lli> vll;
typedef pair<int, int> pii;

#define fastIO()                    \
    ios::sync_with_stdio(false);   \
    cin.tie(0);                     \
    cout.tie(0);                   
#define rep(a, b, c) for (int a = b; a < c; ++a)
#define repn(a, b, c) for (int a = b; a <= c; ++a)
#define repr(a, b, c) for (int a = b; a >= c; --a)
#define repeach(itr, data_st) for (auto itr : data_st)
#define MAX(a, b, c) max(a, max(b, c))
#define MIN(a, b, c) min(a, min(b, c))
#define sq(x) ((ll)(x) * (x))
#define gcd(a, b) __gcd(a, b)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define ins insert
#define vecsize(v) v.size()
#define arrsize(arr) (sizeof(arr) / sizeof(arr[0]))
#define init(arr, val) memset(arr, val, sizeof(arr))
#define vecsort(v) sort(v.begin(), v.end())
#define arrsort(arr, len) sort(arr, arr + len)
#define w(t) while (t--)
#define nl "\n"

inline string getString(void)
{
    char x[1000005];
    scanf("%s", x);
    return (string)x;
}

int main()
{
    fastIO();
    lli test;
    cin>>test;
    while(test--){
        lli h,p;
        cin>>h>>p;
        while(1){
            if(h<=0){
                cout<<"1\n";
                break;
            }
            if(p<=0){
                cout<<"0\n";
                break;
            }
            h=h-p;
            p=p/2;
        }
	}
    return 0;
}