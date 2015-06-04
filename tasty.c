#include <stdio.h>

typedef enum {true,false} bool;

int main(void)
{
bool is_it_tasty;
printf("Tasty or not... true or false?");
scanf("%d", &is_it_tasty);
if(is_it_tasty == true)
printf("So this is really tasty");
else
printf("How awful taste it has");
return 0;
}
