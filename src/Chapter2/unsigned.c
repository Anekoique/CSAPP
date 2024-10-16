#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

int strlonger(char* a, char* t)
{
    return strlen(a) - strlen(t) > 0;
}

int main()
{
    unsigned length = 0;
    printf("%.2x\n", length);
    printf("%u\n", length - 1);
    printf("%.2x\n", length - 1);
    printf("%.2x\n", -1);

    size_t large_size = SIZE_MAX;  // 2^64 - 1
    printf("%zu\n", large_size);   // 输出 0
    large_size += 1;               // 溢出：回绕到0
    printf("%zu\n", large_size);   // 输出 0
}
