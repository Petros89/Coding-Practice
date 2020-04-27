#include <cstdio>
#include <cstdlib>
#include <map>

static int total_calls = 0;

// O(fib(n))
int fib(int n) {
    printf("Computing fib(%d) (total calls = %d)\n", n, ++total_calls);
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fib(n - 2) + fib(n - 1);
    }
}

int main(int argc, char **argv) {
    int n = atoi(argv[1]);
    printf("%d\n", fib(n));
}