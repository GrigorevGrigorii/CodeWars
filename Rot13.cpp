#include <string>
using namespace std;

string rot13(string msg)
{
  for(int i=0;i<msg.size();++i){
    if(msg[i]>=65&&msg[i]<=90){
      msg[i]=65+(int(msg[i])-65+13)%26;
    }
    if(msg[i]>=97&&msg[i]<=122){
      msg[i]=97+(int(msg[i])-97+13)%26;
    }
  }
  return msg;
}
