#include <stdio.h>
int bitXor(int x, int y)
{
    printf("%.2x\n", y);
    printf("%.2x\n", (~x));
    printf("%.2x\n", (~x) & y);
    return (~x) & y;
}
int tmin(void)
{
	printf("%.2x", 8);
    return 8 << 1;
}// 1000

int main()
{
	printf("%.2x", tmin());
    return 0;
}
