#include <stdio.h>
void main() {
    int num;
    printf("Enter an Number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

}
