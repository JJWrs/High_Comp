#include <iostream>
using namespace std;
int main(){
	int codigo,unidades,decenas,centenas,miles,decamiles,centmiles,millones,suma;
	char repetir = 'y';
		while (repetir=='y' || repetir=='Y'){
		
 		cout<<"Digite su codigo\n";cin>>codigo;
 		while (cin.fail())
    	{
	    cin.clear();
	    cin.ignore();
	    cout << "No digito un numero valido, por favor reintente: ";
		cin >> codigo;
    	}
 		if (codigo == 00) {
		exit(0);}
    	
			unidades  = codigo%10; codigo/=10;
			decenas   = codigo%10; codigo/=10;
			centenas  = codigo%10; codigo/=10;
			miles     = codigo%10; codigo/=10;
			decamiles = codigo%10; codigo/=10;
			centmiles = codigo%10; codigo/=10;
			millones  = codigo%10; codigo/=10;
			suma = unidades + decenas + centenas + miles + decamiles + centmiles + millones;
		cout<<"la suma de los digitos del numero de codigo de estudiante es: " << suma ;
		cout<<"\nDesea usar otro codigo? (y/n)\n";cin>>repetir;
		
		}
		
		return 0;	
}
