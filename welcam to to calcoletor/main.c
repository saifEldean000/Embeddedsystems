#include <stdio.h>
int main() {
    float x = 0 ;
    float y = 0 ;
    int op ;
    printf("****welcome to calculator****\n");
    while  (1){
    printf("enter the first number  =");
    scanf("%f",&x);
    printf("enter the second number =");
    scanf("%f",&y);
    printf("1=(+)\n2=(-)\n3=(*)\n4=(/)\nEnter the operator =");
    int num_matched = scanf(" %d", &op);

    if (num_matched == 1 && op == 1)
    {
        printf("=%f\n",x+y);
    }
    else if (num_matched == 1 && op == 2)
    {
        printf("=%f\n",x-y);
    }
    else if (num_matched == 1 && op == 4)
    {
        printf("=%f\n",x/y);
    }
    else if (num_matched == 1 && op == 3)
    {
        printf("=%f\n",x*y);
    }
    else {
        printf("Error:\n");
        break;
    }
    }
    return 0;
}
