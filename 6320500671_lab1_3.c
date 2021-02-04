#include <stdio.h>
int main ()
{
unsigned long long a;
scanf ("%llu",&a);
printf ("%llu %llu",a%3,a%11);
return 0;
}
