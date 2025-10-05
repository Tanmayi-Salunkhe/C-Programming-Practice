#include<stdio.h>
struct Demo
{
    int i;
    float f;
};
struct Hello
{
    int no;
    float marks;
    struct Demo dobj;    //nested
};
int main()
{
    printf("Size of hello structure : %lu\n",sizeof(struct Hello));    //16

    return 0;
}