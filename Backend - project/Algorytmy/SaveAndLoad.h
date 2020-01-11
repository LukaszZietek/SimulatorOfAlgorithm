//
// Created by Lukasz on 27.12.2019.
//

#ifndef STLLEARN_SAVEANDLOAD_H
#define STLLEARN_SAVEANDLOAD_H

#include <vector>
#include "Processes.h"
#include <ostream>
#include <istream>
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>


class SaveAndLoad {
protected:
    std::vector<Processes> VectorOfProcesses;
    double AverageWaitingTime;
public:
    void serializeAverageWaitingTime(std::string path) const;
    //std::istream& deserialize(std::istream &is);
    void deserialize(std::string path);
    void serializeWaitingTime(std::string path) const;
    void SortByEntryTime();
    void CountAverageWaitingTime();
    virtual void CountWaitingTime();
    void Count();
    void PreparePackageToCount(std::string path);
protected:


};


#endif //STLLEARN_SAVEANDLOAD_H
