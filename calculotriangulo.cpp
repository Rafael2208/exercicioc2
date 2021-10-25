#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
float x,y,k;
printf("\nDigite os tres numeros:");
printf("\n");

scanf("%f%f%f",&x,&y,&k);

if (x>y && x>k){
    printf("\n X eh maior que Y e K ");
} else if  (y>x && y>k){
    printf("\n Y eh maior que X e K ");
} else if (k>x && k>y){
    printf("\n K eh maior que X e Y ");
} else if (x==y && x==k && y==x && y==k && k==x && k==y ){
    printf("\n VALORES IGUAIS ");
}


}
