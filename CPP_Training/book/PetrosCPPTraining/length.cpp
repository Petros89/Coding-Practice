#include <vector>

int main(int argc, char **argv) {
    std::vector<int> a(100);
    a.push_front(1);
    a.push_back(1);
    size_t k = a.size();

    printf("%zu\n", k);
}