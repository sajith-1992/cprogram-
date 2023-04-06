#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s="eaji";
    if (s==NULL){
        return 1;
    }// WHILE THE STING CHARCTER MOERE THAN THE MEMORY
    char *t= malloc(strlen(s)+1);
    if(t==NULL){
        return 1;
    }//ALLOCATE MORE MEMORY 
    
   strcpy(t,s);
    if(strlen(t)>0){
    t[0]=toupper(t[0]);}
    printf("%s\n",s);
    printf("%s\n",t);
    return 0;
}
