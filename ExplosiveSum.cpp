using ull = unsigned long long;

ull exp_sum(unsigned int n) {
    if (n == 0)return 1;
    ull** matrix = new ull * [n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new ull[n];
    }
    ull sum = 0;

    for(size_t ni=0;ni<n;++ni)
        for (size_t ki = 0; ki < n; ++ki) {
            if (ni == ki) matrix[ni][ki] = 1;
            else if (ki > ni) matrix[ni][ki] = 0;
            else if (ki == 0) matrix[ni][ki] = 1;
            else {
                matrix[ni][ki] = matrix[ni - 1][ki - 1] + matrix[ni - ki - 1][ki];
            }
        }
    for (int i = 0; i < n; ++i) {
        sum += matrix[n - 1][i];
    }
    return sum;
}
