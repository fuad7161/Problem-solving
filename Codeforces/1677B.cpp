//Author: Fuadul Hasan(fuadul202@gmail.com)
//BSMRSTU,Gopalganj
#include<bits/stdc++.h>
using namespace std;

//debug..........
#define error(args...) {vector<string>_v=split(#args,',');err(_v.begin(),args);cout<<endl;}
vector<string> split(const string &s, char c) {vector<string>v; stringstream ss(s); string x;while (getline(ss, x, c))v.emplace_back(x); return move(v);} void err(vector<string>::iterator it) {}
template<typename T, typename... Args>void err(vector<string>::iterator it, T a, Args...args) {cout << it->substr((*it)[0] == ' ', it->length()) << " = " << a << " "; err(++it, args...);}

//............ignore it..................//
#define F first
#define S second
#define Pi atan(1)*4
#define mp make_pair
#define pb  push_back
const int M    = 1e9 + 7;
#define TN   typename
#define ld  long double
#define ll  long long int
#define happy cin.tie(0);
#define point(x) cout<<fixed<<setprecision(x)
int length(string s){return (int)s.size();}
#define mem(a)  memset(a , 0 ,sizeof a)
#define memn(a) memset(a , -1 ,sizeof a)
#define coding ios::sync_with_stdio(false);
#define Unique(c) (c).resize(unique(all(c))-(c).begin())
#define vout(v) for (auto z: v) cout << z << " "; cout << endl;

int length(long long x){int l = 0;for(long long i=x;i;i/=10)l++;return l;}

int dx[8]= {1,0,-1,0,-1,-1,1,1};
int dy[8]= {0,1,0,-1,-1,1,-1,1}; 

#define rep(i,b,e)  for(__typeof(e) i = (b) ; i != (e + 1) - 2 * ((b) > (e))  ; i += 1 - 2 * ((b) > (e)))
long long Inv_pow(long long a,long long n){ll res = 1;while(n){if(n&1) res = ((res%M)*(a%M))%M;a = ((a%M)*(a%M))%M;n>>=1;}return res%M;}
long long Lcm(long long a,long long b){return (((a)*(b)))/__gcd(a,b);}

inline void read(std::vector<int> &v){for(int i=0;i<(int)v.size();i++){cin>>(v[i]);}}
inline void readl(std::vector<ll> &v){for(int i=0;i<(int)v.size();i++){cin>>(v[i]);}}

inline ll Int(){ll x = 0, f = 1;char ch = getchar();while(ch > '9' || ch < '0'){if(ch == '-') f = -1;ch = getchar();}
while(ch >= '0' && ch <= '9'){x = x * 10 + ch -'0';ch = getchar();}return x * f;}

template<class T> bool remin(T& a, const T& b) { return a > b ? a = b, 1 : 0; }
template<class T> bool remax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v) { for (auto &it : v) cin >> it; return istream; }
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

inline int add(int a, int b, int mod) {a += b ; return a >= mod ? a - mod : a ;}
inline int sub(int a, int b, int mod) {a -= b ; return a < 0 ? a + mod : a ;}
inline int mul(int a, int b, int mod) {return (ll)a * b % mod ;}

#define Test cout<<"Case #"<<tc++<<": ";
int tc = 1;

#define   pr     pair<int, int> 
#define   vpr     vector<pr> 
#define   vi       std::vector<int>
#define   vll      std::vector<ll>
#define   all(n) n.begin(),n.end()


const int Inf           = (int)2e9 + 5;
const ll  Lnf           = (ll)2e18 + 5;
const int N             = 5e5 + 5;
const int maxN            = 1e6 + 5;

int row[maxN];
int col[maxN];

int n,m;

void show(){
	for(int i=1;i<=max(m,n);i++){

		cout<<row[i]<<" ";

	}cout<<endl;

	for(int i=1;i<=max(m,n);i++){

		cout<<col[i]<<" ";

	}cout<<endl;
}

// int
int solve() 
{
    
    //Test

	cin>>n>>m;

	for(int i=0;i<=max(m,n);i++){
		row[i] = col[i] = 0;
	}

	int las = -m*n;
	vector<int> ans;
	int colum = 0;
	char tmp;
	for(int i=0;i<m*n;i++){
		cin>>tmp;
		tmp -= '0';
		if(tmp == 1){
			las = i;
			if(col[i%m] == 0){
				col[i%m] = 1;
				colum++;
			}
		}
		if(i - las < m){
			row[i%m]++;
		}

		ans.push_back(row[i%m]+colum);

	}	

	cout<<ans<<endl;

    return 0;
    //error();
}

// int
int main(){

    happy coding
    int test = 1;
    cin>>test;
    while (test--)solve();return 0;
}

/*
I know who....
*/