#include<stdio.h>
int main()
{
    int iArr[] = {11,21,51,101,111};
    
    int *p = NULL;
    int *q = NULL;

    p = &(iArr[1]);
    q = &(iArr[4]);

    printf("Data fetched by p is : %d\n");
    printf("Data fetched by q is : %d\n");

    return 0;
}