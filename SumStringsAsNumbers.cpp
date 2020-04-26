std::string sum_strings(const std::string& a, const std::string& b) {
  std::string sumstr = "";
    std::string c = a, d = b;
    while (c.size() != d.size()) {
        if (c.size() < d.size()) c = "0" + c;
        else d = '0' + d;
    }
    int p = 0;
    int sum = 0;
    for (int i = 1; i <= c.size(); ++i) {
        sum = int(c[c.size()-i]) - 48 + int(d[d.size()-i]) - 48 + p;
        p = sum / 10;
        sumstr = char(char(sum % 10) + 48) + sumstr;
    }
    if(p!=0)sumstr = char(char(p)+48)+sumstr;
    return sumstr;
}
