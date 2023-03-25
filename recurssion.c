
#include <stdio.h>

void drow(int n);
int main()
{
 int height=6;
 drow(height) ;
 
    
}
void drow(int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            printf ("#");
        }printf("\n");
    }
}