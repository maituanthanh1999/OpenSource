#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    char *ptr1=NULL, *ptr2=NULL;
    char text[64];
    ptr1 = (char *) malloc(3*sizeof(char));
    printf("enter text: ");
    fgets(ptr1,4,stdin);
    puts(ptr1);
    printf("length is: %d-%d ",strlen(ptr1),sizeof(ptr1));
    return 0;
}