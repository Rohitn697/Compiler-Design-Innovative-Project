#include <stdio.h>

void main()
{
        int a = 5, b = 1, c = 2, d = 3;
        while (a < 10)
        {
                if (a < 3)
                {
                        if (c < d)
                        {
                                a = 98;
                        }
                        else
                        {
                                a = d * b + c;
                        }
                }
                else
                {
                        a++;
                }
        }
        a = b + c;
}
