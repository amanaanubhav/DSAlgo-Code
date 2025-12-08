#include<stdio.h>
#include<math.h>

int main() {
    int rad;
    printf("enter the radius");
    scanf("%d", &rad);
    
    int area = 3.14*pow(rad, 2);
    printf("area of circle is %d", area);

    return 0;
}