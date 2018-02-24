/*
@autor:
 *Cesar villalobos
 * Estudiante: Ing.Sistemas UDI
 
Dados 3 numeros, encuentre el mayor
*/

#include <stdio.h>

int main(){
	int mayor,a,b,c;
	printf("Ingrese los numeros que desea evaluar");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			mayor=a;
		}
	}else{
		if(b>a){
			if(b>c){
				mayor=b;
			}else{
				mayor=c;
			}
		}
		}
	printf("El mayor es:%d ",mayor);
	}
		

