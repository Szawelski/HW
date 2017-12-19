#include<stdio.h>

void fib(int a, int ciag, long i, long j, long b) {
    while(a < ciag){
        b=i+j;
        i=j;
        j=b;
        printf(" %ld",j);
        a++;
    }
}

int petla = 1;
int main(){
    while(petla == 1) {
    int a=2;
    int ciag;
    long int i=0l,j=1,b;

        printf("Podaj, który element ciągu chcesz policzyć\n");
        scanf("%d", &ciag);
        printf("Ciąg Fibonacciego dla wartosci %d to: %ld %ld", ciag, i, j);
        fib(a, ciag, i, j, b);
        printf("\nJeśli chcesz liczyć dalej wciśnij 1, jeśli nie wciśnij 2\n");
        scanf("%d", &petla);
    }
    return 0;
}
