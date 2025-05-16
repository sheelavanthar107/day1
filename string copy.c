#include <stdio.h>
#include <string.h>
int main() {
    char source[200],destination[200];
    printf("enter the source string:");
    fgets(source,sizeof (source),stdin);
    source[strcspn(source,"\n")]='\0';
    strcpy(destination,source);
    printf("the copied string is:%s\n",destination);
    return 0;
}
