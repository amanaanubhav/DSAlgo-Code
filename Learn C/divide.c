#include<stdio.h>
#include<math.h>

int main() {
    int a, lsd, b, msd;
    printf("enter the number a and then number b: \n");
    scanf("%d%d", &a, &b);
    lsd = a%b;

    printf("lsd is: \n %d", lsd);

    msd = a/b;
    printf("msd is: %d", msd);

    return 0;
}