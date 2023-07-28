#include <stdio.h>
int main() {
    int  x = 0 ;
    int  y = 0 ;
    int op ;
    printf("****welcome to to calculator****\n");
    while  (1){
    printf("enter the num 1 =");
    scanf("%d",&x);
    printf("enter the num 2 =");
    scanf("%d",&y);
    printf("1=(+)\n2=(-)\n3=(*)\n4=(/)\nEnter the operator =");
    int num_matched = scanf(" %d", &op);

    if (num_matched == 1 && op == 1)
    {
        printf("=%d\n",x+y);
    }
    else if (num_matched == 1 && op == 2)
    {
        printf("=%d\n",x-y);
    }
    else if (num_matched == 1 && op == 4)
    {
        printf("=%d\n",x/y);
    }
    else if (num_matched == 1 && op == 3)
    {
        printf("=%d\n",x*y);
    }
    else {
        printf("Error:\n");
        break;
    }
    }
    return 0;
}
