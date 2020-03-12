bool is_isogram(std::string str) {
  int arr[26]={};
  for(int i=0;i<str.size();++i){
    if(str[i]>=65&&str[i]<=90)arr[str[i]-65]++;
    if(str[i]>=97&&str[i]<=122)arr[str[i]-97]++;
  }
  for(int i=0;i<26;++i){
  if(arr[i]>1)return false;
  }
  return true;
}
