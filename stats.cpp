#include "stats.h"
#include <cmath>

using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& input) {
    //Implement statistics here
    Stats statsanswer;
    statsanswer.average = NAN;
    statsanswer.max = NAN;
    statsanswer.min = NAN;
    float sum = 0;

    for(auto it : input){
        sum += it;
        statsanswer.max = (statsanswer.max > it) ? statsanswer.max : it ;
        statsanswer.min = (statsanswer.min < it) ? statsanswer.min : it ;
    }

    statsanswer.average = sum/input.size();

    return statsanswer;

}
