#include<stdio.h>
int main(){

   int i, j, N, temp, num[25];

   printf("Please enter number of elements in array: ");
   scanf("%d",&N);

   printf("Enter %d elements: ", N);
   for(i=0;i<N;i++)
      scanf("%d",&num[i]);

   for(i=1;i<N;i++){
      temp=num[i];
      j=i-1;
      while((temp<num[j])&&(j>=0)){
         num[j+1]=num[j];
         j=j-1;
      }
      num[j+1]=temp;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<N;i++)
      printf(" %d",num[i]);

   return 0;
}