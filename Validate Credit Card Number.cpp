class Kata {
  public:
  static bool validate(long long int n) {
    int arr[16]={};
    for(int i=15;n>0;--i){
      arr[i]=n%10;
      n/=10;
    }
    for(int i=14;i>=0;--i){
      if(i%2==0)arr[i]*=2;
    }
    int sum=0;
    for(int i=15;i>=0;--i){
      if(arr[i]>9)arr[i]-=9;
      sum+=arr[i];
    }
    return (sum%10==0);
  }
};
