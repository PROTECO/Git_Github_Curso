#include<stdio.h>
#include <string.h>
#define TAM_EST 30
#define TAM_BAT 3//3 batallones al final
#define NUM_MIL 3//3 militares por batallon
#define TAM_Div 1

//ESTRUCTURAS
typedef struct{
	int Matricula;
	char Nombre[TAM_EST];
	char GradoMil[TAM_EST];
}Militar; 
typedef struct{
	int ClaveIdentificador;
	char Cat[TAM_EST];
	char Ubi[TAM_EST];
}Batallon;
typedef struct{
	char nombre[TAM_EST];
	char zona[TAM_EST];
}Division;

//DECLARACIÓN DE FUNCIONES
void crearDivision(Division *);
void crearBatallon(Batallon *);
void crearMilitar(Militar *);

void mostrarDivisiones(Division *);
void mostrarBatallones(Batallon *);
void mostrarMilitares(Militar *); 
	Militar Arr1[NUM_MIL];
	Batallon Arr2[TAM_BAT];
	Division Arr3[TAM_Div];
//MAIN 
int main(){
	crearDivision(Arr3);
				mostrarDivisiones(Arr3);
return 0;
}

//FUNCIONES
void crearDivision(Division Arr3[TAM_Div]){
int i,j,k=0;
Batallon Arr2[TAM_BAT];
	for(i=0; i<TAM_Div; i++){
		Division Datos;	
		printf("Ingrese el nombre de la division\n");
		setbuf(stdin, NULL);	
		scanf("%s", Datos.nombre);
		getchar();

		printf("Ingrese la zona\n");
		setbuf(stdin, NULL);
		scanf("%s", Datos.zona);
		getchar();
		Arr3[i]=Datos;
			crearBatallon(Arr2);
			printf("\n ******* \n");
	}
}
void crearBatallon(Batallon Arr2[TAM_BAT]){
int i=0;
//Militar Arr1[NUM_MIL];
	for(i=0; i<TAM_BAT; i++){
		Batallon DatosBatallon;
		printf("Ingrese Clave identificadora del batallon %d:\n",i+1);
			setbuf(stdin, NULL);
			scanf("%d",&DatosBatallon.ClaveIdentificador);

		printf("Ingrese la categoria del batallon %d:\n",i+1);
			setbuf(stdin, NULL);
			scanf("%s", DatosBatallon.Cat);
			getchar();
		
		printf("Ingrese la ubicacion del batallon %d\n",DatosBatallon.ClaveIdentificador);
		setbuf(stdin,NULL);
		scanf("%30[^\n]", DatosBatallon.Ubi);
		getchar();
			
		Arr2[i]=DatosBatallon;
		
		crearMilitar(Arr1);
	}
}
void crearMilitar(Militar Arr1[NUM_MIL]){
int i=0;
	for(i=0; i<NUM_MIL; i++){
		Militar DatosMilitar;
		printf("Ingrese la matricula del militar %d\n",i+1);
		setbuf(stdin, NULL);
		scanf("%d",&DatosMilitar.Matricula),
		
		printf("Ingrese el nombre del militar %d\n",i+1);
		setbuf(stdin, NULL);
		scanf("%30[^\n]", DatosMilitar.Nombre);
		getchar();
		
		printf("Ingrese el grado militar del soldado %s\n",DatosMilitar.Nombre);
		setbuf(stdin, NULL);
		scanf("%s", DatosMilitar.GradoMil);
		getchar();
		Arr1[i]=DatosMilitar;
	}
}
void mostrarDivisiones(Division Arr3[TAM_Div]){
int i,j,k=0;
Batallon Arr2[TAM_BAT];
printf("\t La informacion de la(s) division(es):\t\n");
	for(i=0;i<TAM_Div; i++){
	printf("Division %s\n",Arr3[i].nombre);
	printf("Zona de la division: %s\n",Arr3[i].zona);
			mostrarBatallones(Arr2);
						printf("\n ******* \n");
	}
		
}
void mostrarBatallones(Batallon Arr2[TAM_BAT]){
int i,j=0;
//Militar Arr1[NUM_MIL];
printf("\t La informacion de los batallones:\n");
	for(i=0; i<TAM_BAT; i++){
		printf("\n Batallon %d \n",i+1);
		printf("Clave Identificadora: %d\n",Arr2[i].ClaveIdentificador);
		printf("Categoria:%s\n",Arr2[i].Cat);
		printf("Ubicacion del batallon: %s\n", Arr2[i].Ubi);
		mostrarMilitares(Arr1);
		
	}
}
void mostrarMilitares(Militar Arr1[NUM_MIL]){
int i=0;
	for(i=0; i<NUM_MIL; i++){
			printf("\t La informacion del militar %s\n",Arr1[i].Nombre);
			printf("De matricula %d\n",Arr1[i].Matricula);
			printf("De grado militar %s\n",Arr1[i].GradoMil);
			}
}