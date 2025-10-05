#include<stdio.h>
int main()
{
    double dArr[] = {10.0,20.0,30.0,40.0};
    printf("Size of Arr : %lu\n",sizeof(dArr));    //32
    dArr++;   //error

    return 0;
}