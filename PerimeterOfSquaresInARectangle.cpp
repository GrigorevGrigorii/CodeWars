typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n){
    if(n==1)return 4*n;
    long long int sum=1;
    long long int n1=1,n2=1;
    for(int i=1;i<n;++i){
      long long int buf = n2; 
      n2+=n1;
      n1=buf; 
      sum+=n1;
    }
    return 4*(sum+n2);
  }
};
