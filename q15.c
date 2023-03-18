#include<stdio.h>
void main(){
    char ch ;
    printf("Enter an alphabets\n");
    scanf("%c",&ch);

    if(ch == 'A' || ch == 'a' || ch == 'E' ||ch=='e' || ch =='I'|| ch=='i' ||ch=='o' || ch == 'O'||ch=='u' || ch=='U'){
     printf("%c is a vowels",ch);
    }
    else{
             printf(" %c not vowels",ch);

    }
}