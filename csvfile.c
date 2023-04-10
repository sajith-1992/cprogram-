#include <stdio.h>

int main() {
  FILE *file=fopen("sajith.csv","a");
  char name[] = "sajith";
  char number[]="47874";
  fprintf(file,"%s\n%s", name,number);
  fclose(file);
 
  return 0;
}