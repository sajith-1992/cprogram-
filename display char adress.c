#include <stdio.h>

int main()
{
  char *s="hai";
printf("%p\n",s);
printf("%p\n",&s[0]) ;
printf("%p\n",&s[1]) ;
printf("%p\n",&s[2]) ;
return 0;
}