#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	int k;
	char menor;
	vector<vector<char>> grupos;
	while(cin>>s>>k){
		int tamanio=s.size();
		for(int i=0;i<tamanio;i++){
			grupos[i%k].push_back(s[i]);
		}
		
		for(int i=0;i<k;i++){
			sort(grupos[i].begin(),grupos[i].end());
		}
	}
	return 0;
}