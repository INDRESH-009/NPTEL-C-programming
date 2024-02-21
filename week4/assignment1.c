#include <stdio.h>
int main(){
  int size;
  scanf("%d",&size);
  int arr[size];
  for(int i = 0 ; i<size ; i++){
  scanf("%d",&arr[i]);
  }
  int mean,x=0;
  
  for(int i=0;i<size;i++){
    x += arr[i];
  }
  mean = x/size;
  int ans =0;
  for(int i=0;i<size;i++){
    if(arr[i]>= mean ){
      ans += arr[i];
    }
    
  }
  printf("%d",ans);
}