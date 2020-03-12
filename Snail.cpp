std::vector<int> snail(std::vector<std::vector<int>> snail_map) {
int n = snail_map.size();
  if (n == 1)return snail_map[0];
  std::vector<int> arr;
  for (int i = 0; i <= n / 2; i++) {
    for (int k1 = i; k1 < n - 1 - i; k1++) {
      arr.push_back(snail_map[i][k1]);
    }
    for (int k2 = i; k2 < n - 1 - i; k2++) {
      arr.push_back(snail_map[k2][n - 1 - i]);
    }
    for (int k3 = n - 1 - i; k3 > i; k3--) {
      arr.push_back(snail_map[n - 1 - i][k3]);
    }
    for (int k4 = n - 1 - i; k4 >= i + 1; k4--) {
      arr.push_back(snail_map[k4][i]);
    }
  }
  if (n % 2 == 1)arr.push_back(snail_map[n/2][n/2]);
  return arr;
}
