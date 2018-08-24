// Aluno: André de Souza Ferreira

#include <stdio.h>

int main() {

    unsigned int t;
    scanf("%u", &t);

    while(t--) {

        unsigned long long a, b, x, n, c, d, m, i = 0, h = 0;
        scanf("%llu %llu %llu %llu %llu %llu %llu", &a, &b, &x, &n, &c, &d, &m);

        for(unsigned long long j= 0; j <= n; j++) {

            h = ((a * (x + j)) + b) % m;
            
            if ((c <= h) && (h <= d)) {

                i++;

            }
            
        }

        printf("%llu\n", i);
        i = 0;
    }
        
    return 0;

}