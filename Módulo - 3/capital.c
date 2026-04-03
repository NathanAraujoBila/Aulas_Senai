#include <stdio.h>

int main() {
    float capital = 100.00;
    int ctMes = 0;
    while(capital <= 200.00) {
        capital = capital + (capital * (5 / 100.00));
        ctMes = ctMes + 1;
    }
    
    printf("Em %d meses o capital investido será de R$ %.2f", ctMes, capital);

    return 0;
}