#include <bits/stdc++.h>
using namespace std;

std::vector<int> edgeMake(string line){
    std::stringstream ss(line);
    std::string item;
    std::vector<int> items;

    // Splitting the line using ',' as the delimiter
    while (std::getline(ss, item, '|')) {
        items.push_back(stoi(item));
    }
    return items;
}

vector<int> listMake(string line){
    std::stringstream ss(line);
    std::string item;
    std::vector<int> items;

    // Splitting the line using ',' as the delimiter
    while (std::getline(ss, item, ',')) {
        items.push_back(stoi(item));
    }
    return items;
}

bool isComma(string s){
    for(auto i: s){
        if(i == ',')return 1;
    }
    return 0;
}

const int N = 2e5;
set<int>g[N];
int vis[N];

void dfs(int x){
    for(auto i: g[x]){
        if(vis[i])continue;
        dfs(i);
    }
}

int main() {
	
	string s;
	set<int>st;
	vector<pair<int,int>>edges;
	vector<vector<int>>listDemo,list;
	while(cin>>s){
	    if(isComma(s)){
	        vector<int> tem = listMake(s);
	        listDemo.push_back(tem);
    	    for(auto i: tem){
    	        st.insert(i);
    	    } 
	    }else{
	        vector<int> tem = edgeMake(s);
	        edges.push_back({tem[0] , tem[1]});
    	    for(auto i: tem){
    	        st.insert(i);
    	    }  
	    }
	}
	
	map<int,int> have;
	int cnt = 1;
	for(auto i: st){
	    have[i] = cnt++;
	}
	
	for(auto i: edges){
	   // cout<<i.first<<" "<<i.second<<endl;
	    g[have[i.first]].insert(have[i.second]);
	}
	
	for(auto i: listDemo){
	    vector<int> tem;
	    for(auto j: i){
	       // cout<<j<<" ";
	        tem.push_back(have[j]);
	    } // cout<<endl;
	    list.push_back(tem);
	}
	    
	    
	int ans = 0;
	for(int i=0;i<list.size();i++){
	    bool f = true;
	    for(int j=1;j<list[i].size();j++){
	        if(g[list[i][j-1]].find(list[i][j]) == g[list[i][j-1]].end()){
	            f = false;
	        }
	    }
	    if(f){
	        //cout<<i<<" ";
	        ans += listDemo[i][listDemo[i].size()/2];
	    }
	}//cout<<endl;
	
	cout<<ans<<endl;
	return 0;
}
