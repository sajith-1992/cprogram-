#include <stdio.h>

void meow(){
    printf("hai\n");
}

int main (void){
   
    int n;
       scanf("%i",&n);
   do {
       int width;
       scanf("%i",&width);
   }
   while(n<10);
   
     for(int i=0;i<n;i++){
        
      meow();
        
     }
}