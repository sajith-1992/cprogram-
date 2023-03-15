
#include <stdio.h>


#include <stdio.h>

const int N=10;
float average (int array[] );
int main() {
   int score[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};


  
      printf("%f ", average(score));
         
     
      
   return 0;
}
float average (int array[]){
  int sum =0;
 for(int i=0;i<N;i++){
  sum=sum+array[i];
}
return sum/(float)N;
}