#include<stdio.h>
int main()
{
    int iArr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(iArr[1]);
    q = &(iArr[4]);

    printf("Result of substraction is : %d\n",q-p);   //allowed
    q = q-2;     //allowed
     printf("Data pointed by q is : %d\n",*q);

     return 0;
}