#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    std::cin >> n >> m >> a;

    long long x = (n + a - 1) / a;
    long long y = (m + a - 1) / a;
    long long result = x * y;

    std::cout << result << std::endl;

    return 0;
}
