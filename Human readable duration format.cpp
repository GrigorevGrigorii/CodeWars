#include <string>

std::string format_duration(int seconds) {
  if (seconds == 0)return "now";
    std::string s = "";
    if (seconds / 31536000 > 0) {
        s += std::to_string(seconds / 31536000);
        if (seconds / 31536000 > 1) s += " years";
        else s += " year";
    }
    seconds %= 31536000;
    if (seconds / 86400 > 0) {
        if (seconds % 86400 == 0 && s != "")s += " and ";
        else if(s != "")s += ", ";
        s += std::to_string(seconds / 86400);
        if (seconds / 86400 > 1) s += " days";
        else s += " day";
    }
    seconds %= 86400;
    if (seconds / 3600 > 0) {
        if (seconds % 3600 == 0 && s != "")s += " and ";
        else if(s != "") s += ", ";
        s += std::to_string(seconds / 3600);
        if (seconds / 3600 > 1) s += " hours";
        else s += " hour";
    }
    seconds %= 3600;
    if (seconds / 60 > 0) {
        if (seconds % 60 == 0 && s != "")s += " and ";
        else if(s != "") s += ", ";
        s += std::to_string(seconds / 60);
        if (seconds / 60 > 1) s += " minutes";
        else s += " minute";
    }
    seconds %= 60;
    if (seconds != 0) {
        if (s != "")s += " and ";
        s += std::to_string(seconds);
        if (seconds > 1) s += " seconds";
        else s += " second";
    }
    return s;
}
