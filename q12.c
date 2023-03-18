#include<stdio.h>
void main(){
    int num , remainder, temp=0,Arm = 0;
    printf(" Enter a number = ");
    scanf("%d",&num);
    temp = num;
    while(num!=0){
        remainder =  num%10;
        Arm = Arm +  remainder * remainder *remainder;
        num = num/10;

    }
if(temp==Arm){
  printf("%d is Armstrong", temp);

}
else{
   printf("%d is not Armstrong", temp);
}
}
