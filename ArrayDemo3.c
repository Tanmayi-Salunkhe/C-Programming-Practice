#include<stdio.h>
int main()
{
    int iArr[4] = {10,20,30,40};
    printf("Arr : %lu\n",iArr);                //100
    printf("&Arr : %lu\n", &iArr);             //100
    printf("&(Arr[0]) : %lu\n", &(iArr[0]));   //100

    return 0;
}