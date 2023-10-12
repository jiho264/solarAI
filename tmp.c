#include <stdio.h>
int main()
{
    // set
    unsigned int _input[10];
    int _shift_time = 0;
    for (int i = 0; i < 10; i++)
        scanf("%d", &_input[i]);
    scanf("%d", &_shift_time);
    // shift
    for (int i = 0; i < _shift_time - 1; i++)
    {
        unsigned int _carry = _input[9] >> 7;
        for (int j = 9; j > 0; j--)
        {

            _input[j] = _input[j] << 1;
            _input[j] = _input[j] & 0x000000fe;
            unsigned int _tmp = _carry;
            _carry = _input[j - 1] >> 7;
            _carry = _carry & 0x00000001;

            _input[j - 1] += _tmp;
        }
        _input[0] = _input[0] << 1;
        _input[0] = _input[0] & 0x000000fe;
        _input[0] += _carry;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%4d ", _input[i]);
    }
}
// 1 2 3 4 5 6 7 8 9 10 9

// 10 byte == 80 bit
// 00000001 00000010 00000011 00000100 00000101 00000110 00000111 00001000 00001001 00001010