#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int k;

	while(cin >> s >> k){
		vector<vector<char>> grupos(k);  // ✅ inicializar con tamaño k

		int tamanio = s.size();
		for(int i = 0; i < tamanio; i++){
			grupos[i % k].push_back(s[i]);
		}
		
		for(int i = 0; i < k; i++){
			sort(grupos[i].begin(), grupos[i].end());
			reverse(grupos[i].begin(), grupos[i].end()); // menor al final
		}

		string resultado = s;
		for(int i = 0; i < tamanio; i++){
			int grupo = i % k;
			resultado[i] = grupos[grupo].back(); // tomar menor
			grupos[grupo].pop_back();            // eliminarlo
		}
		
		cout << resultado << endl;
	}
	return 0;
}
