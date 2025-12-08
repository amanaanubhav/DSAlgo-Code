#include<stdio.h>

int main() {
    float c;
    printf("enter celcius");
    scanf("%f", &c);

    int f = (1.8 * c) + 32;
    printf("the temprature in fahranheit is: %f\n", f);

    return 0;

}