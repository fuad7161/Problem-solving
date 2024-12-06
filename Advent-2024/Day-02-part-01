#include <bits/stdc++.h>
using namespace std;

vector<int> listMake(string line){
    std::stringstream ss(line);
    std::string item;
    std::vector<int> items;

    // Splitting the line using ',' as the delimiter
    while (std::getline(ss, item, ' ')) {
        items.push_back(stoi(item));
    }
    return items;
}

bool ck(vector<int> &tem){
    for(int i=1;i<tem.size();i++){
        if(abs(tem[i] - tem[i-1])>3)return 0;
        if(abs(tem[i] - tem[i-1])==0)return 0;
    }
    int cntdreater = 0 , cntdless = 0;
    for(int i=1;i<tem.size();i++){
        if(tem[i-1] > tem[i]) cntdreater++;
    }
    for(int i=1;i<tem.size();i++){
        if(tem[i-1] < tem[i]) cntdless++;
    }
    
    if(cntdreater and cntdless)return false;
    return true;
    
}

int main() {
	
    string s;
    int cnt = 0;
    while(getline(cin , s)){
        vector<int>listdemo = listMake(s);
        if(ck(listdemo))cnt++;
    }
    cout<<cnt<<endl;
	return 0;

}
