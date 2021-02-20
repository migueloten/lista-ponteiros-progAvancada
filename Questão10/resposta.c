/* X como char : 61fdec; 61fded; 61fdee | X como int : 61fdd0; 61fdd4; 61fdd8 | X como float : 61fdc0; 61fdc4; 61fdc8 | X como double : 61fdc0; 61fdc4; 61fdc8
Os resultados são diferentes da teoria para o tipo int, que armazenam 4 bytes ao invés de 2 */



#include <stdio.h>

int main(){
    char l[4];
    int m[4];
    float n[4];
    double o[4];

    char *p1;
    int *p2;
    float *p3;
    double *p4;

    p1 = l;
    p2 = m;
    p3 = n;
    p4 = o;

    for(int a=0;a<3;a++){
        printf("%x, ", p1+a);
    }
    printf("\n");

    for(int a=0;a<3;a++){
        printf("%x, ", p2+a);
    }
    printf("\n");

    for(int a=0;a<3;a++){
        printf("%x, ", p3+a);
    }
    printf("\n");

    for(int a=0;a<3;a++){
        printf("%x, ", p4+a);
    }
    printf("\n");

    return 0;
}
