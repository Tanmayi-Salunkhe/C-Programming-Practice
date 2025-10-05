#include<stdio.h>
int main()
{
    int iArr[4] = {10,20,30,40};
    int iBrr[] = {10,20,30,40,50};
    int iCrr[6] = {10,20,30};

    printf("Size of iArr is : %lu\n", sizeof(iArr));   //16
    printf("Size of iBrr is : %lu\n",sizeof(iBrr));    //20
    printf("Size of iCrr : %lu\n", sizeof(iCrr));      //24

    return 0;

}