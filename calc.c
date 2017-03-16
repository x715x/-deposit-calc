#include <stdio.h>
int bankir(int a, int b){
    int c;
    if (a < 1000000){
        if (b < 31){
            c = a - a * 0.1;
        };
        if ((b > 30) && (b < 121)){
            c = a + a * 0.02;
        };
        if ((b > 120) && (b < 241)){
            c = a + a * 0.06;
        };
        if ((b > 240) && (b < 366)){
            c= a + a * 0.12;
        };
    } else{
        if (b < 31){
            c = a - a * 0.1;
        };
        if ((b > 30) && (b < 121)){
            c = a + a * 0.03;
        };
        if ((b > 120) && (b < 241)){
            c = a + a * 0.08;
        };
        if ((b > 240) && (b < 366)){
            c= a + a * 0.15;
        };
    };
    return c;
};              
int main(){
    int sum, srok, itog, pribil;
    printf("Введите сумму вклада: ");
    scanf("%d", &sum);
    printf("Введите срок вклада: ");
    scanf("%d", &srok);
    if ((sum > 9999) && (srok < 366) && (srok >= 0)){
        itog = bankir(sum, srok);
        printf("Сумма вклада на момент окончания срока: %d\n", itog);
        pribil = itog - sum;
        printf("Доход от вклада будет составлять: %d", pribil);
    } else{
        printf("Неккоректные данные");
    };
    return 0;
};
   
