#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   
   int *list = malloc(3* sizeof (int));
   if(list==NULL)
   {
       
       return 1;
   }
   list[0]=1;
   list[1]=2;
   list[2]=3;
 
int *tmp=malloc(4* sizeof(int));// we cannot put list  beacuse while free the memory will not free the first chunk of memory
if(tmp==NULL)
{
    free(list);//this happen when failed onlyfree memory(will not leak) if the list malloc woerk rule of thumb
    return 1;
}
for (int i=0;i<3;i++)
{
    tmp [i]=list[i];
}
tmp[3]=4;
free(list);// this done for the entire program
list=tmp;// now my temp with 4 spce is list 
for(int i=0;i<4;i++)
printf("%i",tmp[i]);
free(list);// its freeing the tmp space
    return 0;
}