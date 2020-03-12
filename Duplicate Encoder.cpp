#include <string>
std::string duplicate_encoder(const std::string& word){
  int arr[256]={};
  for(int i=0;i<word.size();++i){
    if(word[i]>=65 && word[i]<=90){
      arr[int(word[i])+32]++;
    }
    else
      arr[int(word[i])]++;
  }
  std::string s="";
  for(int i=0;i<word.size();++i){
    if(word[i]>=65 && word[i]<=90){
      if(arr[int(word[i])+32]>1)s+=")";
      else s+="(";
    }
    else{
      if(arr[int(word[i])]>1)s+=")";
      else s+="(";
    }
  }
  return s;
}
