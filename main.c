#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// TODO: generar los primeros n primos y mostrarlos
int main(void)
{
    int n; 
    scanf("%d",&n);
    int *primos = (int*)malloc(n * sizeof(int));
    if (!primos) return 1;

    int count = 0;
    for (int i = 2; count < n; i++) {
        int es_primo = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                es_primo = 0;
                break;
            }
        }
        if (es_primo) {
            primos[count++] = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i) putchar(' ');
        printf("%d", primos[i]);
    }
    putchar('\n');
    free(primos);
    return 0;
}
