#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int codigo, unidades, decenas, centenas, miles, decamiles, centmiles,
    millones, suma;
    printf("digite su codigo\n");
    
      if (scanf ("%d", &codigo) == 1)
	{
	  
	  unidades = codigo % 10;
	  codigo /= 10;
	  decenas = codigo % 10;
	  codigo /= 10;
	  centenas = codigo % 10;
	  codigo /= 10;
	  miles = codigo % 10;
	  codigo /= 10;
	  decamiles = codigo % 10;
	  codigo /= 10;
	  centmiles = codigo % 10;
	  codigo /= 10;
	  millones = codigo % 10;
	  codigo /= 10;
	  suma =
	    unidades + decenas + centenas + miles + decamiles + centmiles +
	    millones;
	  printf
	    ("la suma de los digitos del numero de codigo de estudiante es: %d ",
	     suma);
	    
	}
	else printf("Tipo de dato equivocado");
}
