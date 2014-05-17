#include<stdio.h>

struct palcalif{char pala[20]; int cantidad;};

struct palcalif *cargaPalabras(int *);

void main(){
    int cP; /*cP es la cantidad de palabras calificadoras*/
    int cC; /*cC es la cantidad de caracteres del texto*/
    int cS; /*cS es la cantidad de palabras separadas que contiene el arreglo de palabrasSeparadas*/
    struct palcalif *palabrasCargadas;
    char *texto;
    char *palabrasSeparadas; /*arreglo que contiene c/ palabra del texto*/ 
    

    printf("ingresar palabras\n\n");
    palabrasCargadas = cargaPalabras(&cP); /*cargué el arreglo de palabras calificadoras*/

    printf("ingresar texto");
    cargaTexto(texto, &cC);

    prinf("separamos las palabras del texto y las guardamos en un array");
    palabrasSeparadas = separa(texto, cC, &cS);

    printf("contamos cuantas veces aparece cada palabra en el texto");
    cuenta(palabrasSeparadas, palabrasCargadas, cS, cP);

    printf("las palabras calificadoras:%s ", palabrasCargadas);
}



struct palcalif *cargaPalabras(int *n){ /*carga cada palabra en una estructura, y mete las struct en un array*/
	static struct palcalif conjuntoPalabras[1000];
	int i = 0, j = 0; /*i se mueve en los lugares del array de struct y j en los de la palabra*/
	char rta = 's';

	while (rta != 'n' && i<999){
        j = 0;
		while ((conjuntoPalabras[i].pala[j] = getchar()) != EOF && j<19)
			j++;
		conjuntoPalabras[i].pala[j] = '\0';
		printf("la palabra ingresada fue %s\n\n", conjuntoPalabras[i].pala);
		i++;
		printf("Desea continuar ingresando palabras?");
		scanf("%c", &rta);
	}
	*n = i;
	return(conjuntoPalabras);
}

void cargaTexto(char *t, int *n){  /*carga el texto*/
	int i = 0;
	while ((t[i] = getchar()) != EOF)
		i++;
	t[i] = '\0';
	*n = i;
}

char *separa(char *t, int n, int *m) /*NO SE PROGRAMA*/

void cuenta(char *palabras, struct palCalif[], int cantPal, int cantCalif){

/*palabras: array con las palabras del texto separadas; palCalif[]: arreglo de struct con las palabras calificadoras*/
/*cantPal: cant de palabras separadas; cantCalif: cant de palabras del arreglo cojuntoPalabras*/ 
	
	int i = 0, j = 0;
	for (i = 0; i<cantPal; i++){ /*i recorre el array de palabras separadas*/
		for (j = 0; j<cantCalif; j++){ /*j recorre el array de struct de palabras calificadoras*/
			if (palabras[i] == palCalif[j].pala)     /*si la palabra coincide con el campo pala de la struct*/
				palCalif[j].cant++;              /*incremento el campo cant en 1*/
		}
	}
}
