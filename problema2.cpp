#include <bits/stdc++.h>
using namespace std;

int main(){
	int energiaInicial,agotadoras,revitalizantes,dato;
	int arreglo[100];
	int cantidades;
	int Agotadoras[100];
	int Revitalizantes[100];
	int actividades[100];
	int j,n,contador,cantidad;
	cin>>cantidad;
	for(int i=0;i<cantidad;i++){
		cin>>energiaInicial>>agotadoras>>revitalizantes;
		for(j=0;j<agotadoras;j++){
			cin>>dato;
			Agotadoras[j]=dato;
		}
		for(j=0;j<revitalizantes;j++){
			cin>>dato;
			Revitalizantes[j]=dato;
		}
		int cen=1;
		j=0;
		n=0;
		int contador=0;
		while(cen==1){
			if(energiaInicial>=Agotadoras[j]){
				energiaInicial-=Agotadoras[j++];
				contador++;
			}else{
				energiaInicial+=Revitalizantes[n++];
				contador++;
			}
			if((energiaInicial>=0)&&(j<agotadoras)&&(n<revitalizantes)){
			}else{
				cen=0;
			}
		}
		actividades[i]=contador;
	}
	for(int i=0;i<cantidad;i++){
		cout<<actividades[i]<<endl;
	}
	
	return 0;
}