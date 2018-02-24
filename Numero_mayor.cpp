/*
@autor:
 * Jhon velasco
 * @ frediv0406
 * Estudiante: Ing.Sistemas UDI
*/
#include <iostream>
using namespace std;
int main(){
	int a,b,c,mayor,menor;
	cout<<"Digite el numero A:\n";
	cin>>a;
	cout<<"Digite el numero B:\n";
	cin>>b;
	cout<<"Digite el numero C:\n";
	cin>>c;
	if(a>b){
		if(a>c){
		mayor=a;
	}
	}
	else{
		if(b>c){
			mayor=b;
		}
		else{
			mayor=c;
		}
	}
	cout<<"El numero mayor es: "<<mayor;

}
