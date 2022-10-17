#include <stdio.h>
#include <math.h>

int main (void){
    unsigned long long int test, factor = 0;
    printf("Masukan angka: ");
    scanf("%llu", &test);

    if(test < 1000){
        printf("%llu\n", test);
        return 0;
    }

    unsigned long long int temp = test;
    while (temp / 10 != 0){
        temp /= 10;
        factor++;
    }
    while((factor -2) %3 != 0){
        factor++;
    }

    for(unsigned long long int i = pow(10,factor); i > 0;){
        if((test / i) != 0 || i<=pow(10,factor)/1000)
            printf("%llu", test / i);
        
        test = test - (test / i) * i;
        i = i / 10;

       if((test / i) != 0 || i<=pow(10,factor)/1000)
            printf("%llu", test / i);
        
        test = test - (test / i) * i;
        i = i / 10;

        printf("%llu.", test / i);
        test = test - (test / i) * i;
        i = i / 10;

    }

    return 0;
}