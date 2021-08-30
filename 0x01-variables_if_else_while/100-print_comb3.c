#include <stdio.h>
int main(void)
{
  int y, x;
  
for (x= 0; x<= 9; x++)
{
  for (y=x + 1; x<= 9; y++)
{
putchar('0'+ x);
putchar('0' + y);
If (x != 8 && y != 9)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
