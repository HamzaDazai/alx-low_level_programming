#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        result = result << 1; // Left shift result by 1 bit
        if (b[i] == '1')
            result = result | 1; // Set the least significant bit to 1
    }

    return result;
}

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
