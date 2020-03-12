using namespace std;
string factorial(int factorial){
    int fact[500];
    std::string strfact="";
    fact[0] = 1;
    int fact_size = 1;
    for (int i = 2; i <= factorial; ++i) {
        int p = 0;
        for (int j = 0; j < fact_size; ++j) {
            int prod = fact[j] * i + p;
            fact[j] = prod % 10;
            p = prod / 10;
        }

        while (p != 0) {
            fact[fact_size] = p % 10;
            p = p / 10;
            ++fact_size;
        }
    }

    for (int i = fact_size - 1; i >= 0; --i)
        strfact += char(fact[i] + 48);
    return strfact;
}
