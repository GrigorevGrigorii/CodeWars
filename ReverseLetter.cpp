std::string reverse_letter(const std::string &str)
{
std::string s="";
    for(int i=str.size()-1;i>=0;--i){
      if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))s+=str[i];
    }
    return s;
}
