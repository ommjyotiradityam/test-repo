#include <stdio.h>
#include <math.h>

int main() {
int x,y,z;
printf("enter two integers");
scanf("%d,%d",&x,&y);
z=x;
x=y;
y=z;

printf("%d,",x);
printf("%d",y);



    return 0;
}
