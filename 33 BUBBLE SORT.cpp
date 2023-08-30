#include <stdio.h>
void bublSort(int arr[], int len){
int temp;
if (len == 1){  //important loine
      return;
   }
   for (int i=0; i<len-1; i++){
      if (arr[i] > arr[i+1]){
         temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
      }
   }
   len=len-1;
   bublSort(arr, len);
}
int main(){
   int Arr[10],len,i;
   printf("enter the length:");
   scanf("%d",&len);
   printf("enter the numbers:");
   for(i=0;i<len;i++)
   {
   	scanf("%d",&Arr[i]);
   }
   bublSort(Arr, len);

   printf("Sorted array : ");
   for(i=0;i<len;i++){
      printf("%d ",Arr[i]);
   }

   return 0;
}