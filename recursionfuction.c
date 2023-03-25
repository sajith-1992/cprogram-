
#include <stdio.h>

void drow(int n);
int main()
{
 int n=1;
 drow(1) ;
 
    
}
void drow(int n){
    for(int i=0;i<n;i++){
        
        printf("#");
        
    }
       printf("\n");
       drow(n+1);
}