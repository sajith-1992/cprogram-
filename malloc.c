#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s="eaji";
    char *t= malloc(strlen(s)+1);
    for (int i=0;i<strlen(s)+1;i++)
    {
    t[i]=s[i];
        
    }
    if(strlen(t)>0){
    t[0]=toupper(t[0]);}
    printf("%s\n",s);
    printf("%s\n",t);
    return 0;
}
