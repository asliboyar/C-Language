#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1;
    int num2;
    float num3;
    float num4;
    int var1;
    int var2;
    float var3;
    float var4;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &num3, &num4);
    var1=num1+num2;
    var2=num1-num2;
    var3=num3+num4;
    var4=num3-num4;
    printf("%d %d \n", var1, var2);
    printf("%.1f %.1f", var3, var4);
    return 0;
}
