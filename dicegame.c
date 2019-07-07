#include<stdio.h>
#include<stdlib.h>

int main(){

   int d1,d2;
   int result;

printf("Rolling the dice...\n");

d1 = rand() % 6 + 1;

printf("Die 1: %d\n",d1);

d2 = rand() % 6 + 1;

printf("Die 2: %d\n",d2);

result = d1 + d2;

printf("Total value: %d",result);

return 0;
}

