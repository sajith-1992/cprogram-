#include <stdio.h>
// need to include sting library 

int main(void)
{
    int number[]={23,42,23,56,57};

   int n=42;
    
    for (int i=0; i<5;i++)
    {
         
      if( number[i]==n)
      {printf("found \n");
      return 0;
    }
}
    printf("not found");
    return 1;
    
    }
    
