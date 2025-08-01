#include <bits/stdc++.h>
using namespace std;

int main(){
	int pruebas,casos;
	vector<int> juegos;
	int cantidad,alturaJuego;
	int resultados,altura;
	int i;
	int arreglo[100];
	cin>>casos;
	for( i=0;i<casos;i++){
		cin>>cantidad;
		cin>>altura;
		arreglo[i]=0;
		for(int j=0;j<cantidad;j++){
			cin>>alturaJuego;
			if (altura>=alturaJuego){
				arreglo[i]=arreglo[i]+1;
			}
			
		}
		
	}
	
	for(int k=0;k<casos;k++){
		cout<<arreglo[k]<<endl;
	}
	return 0;
}