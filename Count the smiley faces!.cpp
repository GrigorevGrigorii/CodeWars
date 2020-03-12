int countSmileys(std::vector<std::string> arr)
{
  int cnt=0;
  for(std::string s : arr){
    if(s.size()==3){
      if((s[0]==':' || s[0]==';') && (s[1]=='-' || s[1]=='~') && (s[2]=='D' || s[2]==')'))cnt++;
    }
    if(s.size()==2){
      if((s[0]==':' || s[0]==';') && (s[1]=='D' || s[1]==')'))cnt++;
    }
  }
  return cnt;
}
