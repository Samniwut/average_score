#include <stdio.h>
#include <stdlib.h>

int main()
{
   int scores[];
   scanf("%d",)
   int n = sizeof(scores) / sizeof(int);

   int min = scores[0];
   for(int i = 1; i<n;i++){
    if(scores[i] < min){
        min = scores[i];
    }
   }
   int max = scores[0];
   for(int i = 1; i< n ; i++){
    if(scores[i] > max){
        max = scores[i];
    }
   }
   printf("Min: %d\n",min);
   printf("Max: %d",max);
    return 0;
}
