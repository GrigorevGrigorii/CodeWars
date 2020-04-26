std::vector<int> deleteNth(std::vector<int> arr, int n)
{
  int arrk[10000]={};
  std::vector<int> new_vector;
  for(int x : arr){
    if(arrk[x]<n){
      arrk[x]++;
      new_vector.push_back(x);
    }
  }
  return new_vector;
}
