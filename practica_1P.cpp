#include<stdio.h>

int main() {
float a,b,c;
int opt;
printf("1.-Suma\n 2.-Resta\n 3.-Multiplicacion\n 4.-Division\n");
printf("Seleccione una opcion ");
scanf("%d",&opt);
printf("Ingrese el primer digito ");
scanf("%f",&a);
printf("Ingrse el segundo digito ");
scanf("%f",&b);
if (opt==1){
c=a+b;

}
else if (opt==2){
c=a-b;
}
else if (opt==3){
c=a*b;

}
else if (opt==4){
while (b==0){
printf("Error b, debe ser distinto de 0\n");
printf("introduce el segundo digito de nuevo:  ");
scanf("%f",&b);


}


c=a/b;

}



else
{

printf("opcion invalida");
c=0;
}



printf("el resultado es %f.", c);
}



