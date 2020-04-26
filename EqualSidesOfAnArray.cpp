#include <vector>
using namespace std;

int find_even_index (const vector <int> numbers) {
  for(int i=0;i<numbers.size();++i){
    int sum1=0,sum2=0;
    for(int j1=0;j1<i;++j1){
      sum1+=numbers[j1];
    }
    for(int j2=i+1;j2<numbers.size();++j2){
      sum2+=numbers[j2];
    }
    if(sum1==sum2)return i;
  }
  return -1;
}
