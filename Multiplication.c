#include <stdio.h>
#include <string.h>

int multiply(int *a, int *b){
    int ans = (*a) * (*b);
    return ans;
}

int main () {
    int a, b;
    char name[100];
    printf("Enter name: \n");
    scanf("%s", name);
    printf("--------------HELLO %s---------------\n", name);
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    printf("--------------ANSWER--------------- \n");
    printf("%d\n", multiply(&a, &b));
    printf("------------THANK YOU------------- \n");
    return 0;
}
