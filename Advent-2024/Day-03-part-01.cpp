#include <bits/stdc++.h>
using namespace std;
 
int main() {
// 	string s;
// 	cin>>s;
	
	string s;
    getline(cin, s, '\0');
	
	stack<char>st;
	bool fistBracket = false , comma = false;
	long long ans = 0;
	auto ck = [&](string s)->bool{
	    for(auto i: s){
	        if(!isdigit(i))return false;
	    }
	    return s.size()!=0;
	};
	for(auto i: s){
	    if(i == ')'){
	        if(fistBracket and comma){
	            string stry = "";
	            while(st.size() and st.top() != ','){
	                stry += st.top();
	                st.pop();
	            }
	            if(st.size())st.pop();
	            string strx = "";
	            while(st.size() and st.top() != '('){
	                strx += st.top();
	                st.pop();
	            }
	            if(st.size())st.pop();
	            int lop = 3;
	            string mul = "";
	            while(lop-- && st.size()){
	                mul += st.top();
	                st.pop();
	            }
	            reverse(strx.begin() , strx.end());
	            reverse(stry.begin() , stry.end());
	            bool xdig = ck(strx);
	            bool ydig = ck(stry);
	            long long x = 0;
	            long long y = 0;
	            if(strx.size() and xdig and ydig){
	                x = stoll(strx);
	            }
	            if(stry.size() and xdig and ydig){
	                y = stoll(stry);
	            }
	            if(mul == "lum" and xdig and ydig){
	                ans += ((long long)x*(long long)y);
	                reverse(mul.begin() , mul.end());
	            }
	            
	        }
	        fistBracket = false;
	        comma = false;
	        while(st.size()) st.pop();
	    }else{
	        fistBracket |= (i == '(');
	        comma |= (i == ',');
	        st.push(i);
	    }
	}
	cout<<ans<<endl;
 
}
