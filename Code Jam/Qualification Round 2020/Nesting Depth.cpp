#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int T,i=1;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		int depth = 0;
		string ans;
		int n = s.size();
		for(int i=0;i<n;i++){
			int	newdepth = s[i] - '0';
			while(newdepth>depth){
				depth++;
				ans+='(';
			}
			while(newdepth<depth){
				depth--;
				ans+=')';
			}
			ans+=s[i];
		}
		while(depth>0){
			--depth;
			ans+=')';
		}
		cout<<"Case #"<<i<<": "<< ans <<"\n";
		i++;
	}
}