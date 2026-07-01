#include<string>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
vector<char> v = {
    'q','w','e','r','t','y','u','i','o','p',
    'a','s','d','f','g','h','j','k','l',
    ';',
    'z','x','c','v','b','n','m',
    ',', '.', '/'
};
 
int n = v.size();
 
char x;
cin>>x;
 
vector<char> ans;
string s;
cin>>s;
 
if(x == 'L'){
    for(int i=0 ; i<s.size() ; i++){
        auto it = find(v.begin(), v.end(), s[i]);
 
     if(it != v.end()) {
      int index = it - v.begin();
      ans.push_back(v[index+1]);
      }
    }
}
else{
        for(int i=0 ; i<s.size() ; i++){
        auto it = find(v.begin(), v.end(), s[i]);
 
     if(it != v.end()) {
      int index = it - v.begin();
      ans.push_back(v[index-1]);
      }
    }
}
 
for(int i=0 ; i<ans.size() ; i++){
    cout<<ans[i];
}
return 0;
}