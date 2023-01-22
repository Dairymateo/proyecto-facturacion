#include <stdio.h>

int main(){
    FILE *Ing=NULL;
    FILE *Balance=NULL;
     int valores, suma=0, sumaN=0;
     int balanceTotal;

    Ing=fopen("Detalle.txt","r");
    Balance=fopen("Balance.txt", "w");

    if (Ing==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    int cont=1;
    while(!feof(Ing)){
        fscanf(Ing, "%d", &valores); 
        if(valores>=0){ 
            suma+=valores;
        }else{
            sumaN+=valores;
        }
        balanceTotal=suma+sumaN;


            
    }
        cont++;
        fprintf(Balance,"*****Bienvenido*******\n");
        fprintf(Balance, "\n");
        fprintf(Balance, "EL detalle de ingresos y gastos es el siguiente: \n");
        fprintf(Balance, "\n");
        fprintf(Balance, "los Ingresos son: %d\n", suma);
        fprintf(Balance, "\n");
        fprintf(Balance, "los Gastos son: %d\n", sumaN);
        fprintf(Balance, "\n");
        fprintf(Balance, "El capital de la empresa es: %d\n", balanceTotal);

   

      fclose(Ing);
      fclose(Balance);
       return 0;
}