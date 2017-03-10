#include <stdio.h>int main(){
    int sum, srok, itog;
    printf("Введите сумму вклада: ");
    scanf("%d", &sum);
    printf("Введите срок вклада: ");
    scanf("%d", &srok);
    if ((sum > 9999) && (srok < 366) && (srok >= 0)){
    } else{
        printf("Неккоректные данные");
    };
    return 0;
};
