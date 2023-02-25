#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {               //质数判断函数
    int i;

    if (num <= 1)
    {
        return false;
    }

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main() {
    int num, i = 0, prime[1000];

    scanf("%d", &num);

    for (int n = 0; n < num; ++n)
    {
        if(isPrime(n))
        {
            prime[i] = n;
            i++;
        }
    }

    printf("%d 以内有以下质数:\n", num);

    for (int j = 0; j < i; ++j)
    {
        printf("%d ", prime[j]);
    }

    /*if (isPrime(num))
    {
        printf("%d 是质数\n", num);
    }
    else
    {
        printf("%d 不是质数\n", num);
    }*/

    return 0;
}