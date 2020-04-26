#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>

int sum_intervals(std::vector<std::pair<int, int>> intervals) {
    std::sort(intervals.begin(), intervals.end());

    std::vector<std::pair<int, int>>::const_iterator it;
    it = intervals.begin();

    int sum = it->second - it->first;
    int last = it->second;

    for(it = it + 1; it != intervals.end(); ++it)
    {
        if(it->first >= last)
        {
            sum += it->second - it->first;
            last = it->second;
        }
        else if(it->second > last)
        {
            sum += it->second - last;
            last = it->second;
        }
    }

    return sum;
}
