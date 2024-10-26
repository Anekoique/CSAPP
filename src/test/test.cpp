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
unsigned floatScale2(unsigned uf)
{
    unsigned int sign = uf >> 31;
    unsigned int exponent = (uf >> 23) & 0x000000ff;
    unsigned int fraction = uf & ~((1 << 31) >> 8);
	printf("%.2x\n", sign);
	printf("%.2x\n", exponent);
	printf("%.2x\n", fraction);

    if (exponent && (exponent ^ 0x000000ff))
    {
        printf("here\n");
        exponent += 1;
        uf = (((sign << 8) + exponent) << 23) + fraction;
    }
    else if (!exponent)
    {
        if (!(exponent >> 22))
        {
           fraction = fraction << 1; 
           uf = (((sign << 8) + exponent) << 23) + fraction;
        }
        else 
        {
            
        }
    }

    return uf;
}

int main()
{
    unsigned char a = -1;
    printf("%d", a);
    return 0;
}
