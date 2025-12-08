#include<stdio.h>
#include<math.h>

int main() {
    float a, b, s;
    printf("enter first and the second number: \n");
    scanf("%f" "%f", &a, &b);
    printf("\nThe numbers before swappings: \nfirst= %.2f \nsecond= %.2f", a, b);

    s=a;
    a=b;
    b=s;

    printf("\nThe numbers after swappings: \nfirst= %.2f \nsecond= %.2f", a, b);

    return 0;
}