#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n%2 == 0 ? n : 2*n);
    return 0;
}

