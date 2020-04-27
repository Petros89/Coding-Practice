#include <cstdio>
#include <cstdlib>
#include <map>

// memoization
static std::map<int, int> _fib_memo;
static int total_calls = 0;

// O(n)
const int fib(const int n) {
    std::map<int, int>::iterator it;

    it = _fib_memo.find(n);
    if (it != _fib_memo.end()) {
        return it->second;
    }

    printf("Computing fib(%d) (total calls = %d)\n", n, ++total_calls);

    if (n == 0) {
        _fib_memo[0] = 0;
        return 0;
    }
    else if (n == 1) {
        _fib_memo[1] = 1;
        return 1;
    }
    else {
        _fib_memo[n] = fib(n - 2) + fib(n - 1);
        return _fib_memo[n];
    }
}

int main(int argc, char **argv) {
    int n = atoi(argv[1]);
    printf("%d\n", fib(n));
}
