Division 2
#include<stdio.h>
int main(){
int x, y;
float div;

printf("Enter value of x : ");
scanf("%d", &x);

printf("Enter value of y : ");
scanf("%d", &y);

if (y == 0) {
printf("Error: Division by zero is not allowed.\n");
} 
else{
div = (float)x / y;
printf("Division of x and y = %f\n", div);
}

return 0;
}
