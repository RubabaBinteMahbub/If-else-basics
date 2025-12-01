#include<stdio.h>
int main(){
char x ;
printf("Enter the alphabet : ");
scanf("%c", &x);
   
if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
printf("The character is vowel.");
}
else{
printf("The character is consonant.");
}
return 0;
}
