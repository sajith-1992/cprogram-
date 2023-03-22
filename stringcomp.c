#include <stdio.h>
#include<string.h>
// need to include sting library 

int main(void)
{
    string greet[]={hai,hello,hey,ehsi,what};

   string s=hello;
    
    for (int i=0; i<5;i++)
    {
         
      if( strcmp(greet[i],s)==0)
      {printf("found \n");
      return 0;
    }
}
    printf("not found");
    return 1;
    
    }