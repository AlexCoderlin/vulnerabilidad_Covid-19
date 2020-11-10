#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  system("color f0"); // Cambiamos colores
  int p=0, v=0, i, Factor;
  char s[50] = "\nIngrese opcion: ", Pad[20], Nivel[30];

//---------- Solicitamos datos del paciente --------------

sexo:
  printf("\nSEXO:\n\n1.-Hombre\n2.-Mujer\n");
  printf("%s",s);
  fflush(stdin);
  scanf("%d", &v);

 switch(v) {
		case 1 :
        	p = p + 50;
			break;
		case 2 :
        	p = p + 30;
			break;
		default :
			goto sexo; //Si dato invalido nos regresa.
 }
 system("cls"); //Limpiamos pantalla.

edad:
  printf("\nEDAD:\n\n1.-De 18 a 25\n2.-De 26 a 34\n3.-De 35 a 45\n4.-De 46 a 59\n5.-De 60 o mas\n");
  printf("%s",s);
  fflush(stdin);
  v=0;
  scanf("%d", &v);

 switch(v) {
		case 1:
			p = p + 10;
			break;
		case 2:
			p = p + 30;
			break;
		case 3:
			p = p + 50;
			break;
		case 4:
			p = p + 70;
			break;
		case 5:
			p = p + 100;
			break;
		default:
			goto edad; //Si dato invalido nos regresa.
 }
 system("cls"); //Limpiamos pantalla.

peso:
  printf("\nPESO:\n\n1.-Peso Bajo.\n2.-Peso Normal.\n3.-Sobrepeso\n4.-Obesidad\n");
  printf("%s",s);
  fflush(stdin);
  v=0;
  scanf("%d", &v);

 switch(v) {
		case 1:
			p = p + 70;
			break;
		case 2:
			p = p + 40;
			break;
		case 3:
			p = p + 70;
			break;
		case 4:
			p = p + 100;
			break;
		default:
			goto peso; //Si dato invalido nos regresa.
 }
 system("cls"); //Limpiamos pantalla.

 for(i=1; i<=6; i++){
       switch (i){ // Asignamos nombre del problema en "Pad".
            case  1: 
                strcpy(Pad, "Padece Diabetes");
                break;
            case  2: 
                strcpy(Pad, "Padece Hipertencion");
                break;
            case  3: 
                strcpy(Pad, "Fuma");
                break;
            case  4: 
                strcpy(Pad, "Padece EPOC");
                break;
            case  5: 
                strcpy(Pad, "Padecimiento Cardiovascular");
                break;
            case  6: 
                strcpy(Pad, "Padece Inmunosupresion");		    
        }
        problemas:
            printf("\nPREGUNTA %d/6. %s?:\n\n1.-SI\n2.-NO\n", i,Pad);
            printf("%s",s);
            fflush(stdin);
            v=0;
            scanf("%d", &v);

            switch(v) {
                case 1:
                    if(i<=5){ //Aplica para los primeros 5 problemas.
					    p = p + 100;
                    }
					else{ //Aplica solo para el problema 6.
						p = p + 150;
					}
					break;
                case 2:
                    p = p + 0;
                    break;
                default:
                    goto problemas; //Si dato invalido nos regresa
                }
     system("cls"); //Limpiamos pantalla.
 } 

//---------- Determinamos Nivel de riesgo --------------

 if(p<=139){
     strcpy(Nivel, "Nivel de Riesgo Medio");
 }
 else if(p>=140 && p<=169){
     strcpy(Nivel, "Nivel de Riesgo Alto");
 }
 else{ //170 puntos o mayor
     strcpy(Nivel, "Nivel de Riesgo Muy Alto");
 }

//---------- Determinamos Factor de riesgo --------------

 if(p<=139){
     Factor = 1;
 }
 else if(p>=140 && p<=169){
     Factor = 2;
 }
 else if(p>=170 && p<=200){
     Factor = 3;
 }
  else if(p>=201 && p<=300){
     Factor = 4;
 }
  else if(p>=301 && p<=400){
     Factor = 5;
 }
  else if(p>=401 && p<=500){
     Factor = 6;
 }
  else if(p>=501 && p<=600){
     Factor = 7;
 }
  else if(p>=601 && p<=700){
     Factor = 8;
 }
  else if(p>=701 && p<=800){
     Factor = 9;
 }
 else{ //801 a 900
          Factor = 10;
 }
//---------- Imprimimos resultado --------------

  printf("\nPuntos del diagnostico: %d", p);
  printf("\n\nNivel de Riesgo: %s", Nivel);
  printf("\n\nFactor de Riesgo: %d\n\n\n", Factor);

  system("pause");
  return 0;
}
