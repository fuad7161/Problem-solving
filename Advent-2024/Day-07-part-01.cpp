// कोशिश करने वालों की कभी हार नहीं होती
// Author: Fuadul Hasan(fuadul202@gmail.com)
// Dhaka,Bangladesh
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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
#define int  long long int
#define happy cin.tie(0);
#define point(x) cout<<fixed<<setprecision(x)
int length(string s){return (int)s.size();}
#define mem(a)  memset(a , 0 ,sizeof a)
#define memn(a) memset(a , -1 ,sizeof a)
#define coding ios::sync_with_stdio(false);
#define Unique(c) (c).resize(unique(all(c))-(c).begin())
#define vout(v) for (auto z: v) cout << z << " "; cout << endl;

// typedef tree <pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;
typedef tree <int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update > ordered_multiset;
template <class T>using ordered_set = tree<T,null_type,less<T>, rb_tree_tag, tree_order_statistics_node_update>;

/*
Note :  There is a problem with erase() function in ordered_multiset (for less_equal<int> tag).
        lower_bound() works as upper_bound() and vice-versa.
        Be careful to use.
        i) find_by_order(k) : kth smallest element counting from 0 .
        ii) order_of_key(k) : number of elements strictly smaller than k.
*/

int length(long long x){int l = 0;for(long long i=x;i;i/=10)l++;return l;}

int dx[8]= {1,0,-1,0,-1,-1,1,1};
int dy[8]= {0,1,0,-1,-1,1,-1,1}; 

#define rep(i,b,e)  for(__typeof(e) i = (b) ; i != (e + 1) - 2 * ((b) > (e))  ; i += 1 - 2 * ((b) > (e)))
long long Inv_pow(long long a,long long n){int res = 1;while(n){if(n&1) res = ((res%M)*(a%M))%M;a = ((a%M)*(a%M))%M;n>>=1;}return res%M;}
long long Lcm(long long a,long long b){return (((a)*(b)))/__gcd(a,b);}

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
inline int mul(int a, int b, int mod) {return (int)a * b % mod ;}

#define Test cout<<"Case "<<tc++<<": ";
#define Test_hash cout<<"Case #"<<tc++<<": ";
int tc = 1;

#define   pr     pair<int, int> 
#define   vpr     vector<pr> 
#define   vi       std::vector<int>
#define   vll      std::vector<ll>
#define   all(n) n.begin(),n.end()

#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

const int Inf           = (int)2e9 + 5;
const int Lnf           = 2e18 + 5;
const int N             = 1429431 + 20;
const int maxN            = 1e6 + 5;
// #define endl '\n'

bool dfs(vector<int> a){
	if(a.size() == 1)return a[0] == 0;
	bool ans = false;
	int tem = a.back();
	// cout<<a<<endl;
	if(a[0] - tem >= 0){
		a[0] -= tem;
		a.pop_back();
		ans |= dfs(a);
		a[0] += tem;
		a.push_back(tem);
	}

	if(a[0] % tem == 0){
		a[0] /= tem;
		a.pop_back();
		ans |= dfs(a);
		a[0] *= tem;
		a.push_back(tem);
	}
	return ans;
}

// int
int32_t solve() 
{
    
    //Test

	string s;
	int sum = 0;
	int tot = 0;
	vector<int>p;


	while(getline(cin , s , ('\n'))){
		stringstream ss(s);
		string word;
		while(ss >> word){
			if(p.size()==0)p.push_back(stoll(word.substr(0,word.size()-1)));
			else p.push_back(stoll(word));
		}
		if(dfs(p)){
			sum += p[0];
		}
		p.clear();
	}

	cout<<sum<<endl;
    return 0;
    //error();
}

// int
int32_t main(){

    happy coding
    int test = 1;
    freopen("in.txt" , "r" , stdin);
    freopen("out.txt" , "w" , stdout);
    //cin>>test;
    while (test--)solve();return 0;
}

/*
I know who....
*/
