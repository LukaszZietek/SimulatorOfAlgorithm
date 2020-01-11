//
// Created by Lukasz on 25.12.2019.
//

#ifndef STLLEARN_HRRN_H
#define STLLEARN_HRRN_H
#include "Processes.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include "SaveAndLoad.h"


class HRRN: public SaveAndLoad {

public:
    void AddProcessesToVector(Processes &p1);
    void CountWaitingTime() override;
    void CountPriority(int Time);
    double GetAverageWaitingTime();
    void Cout();

};


#endif //STLLEARN_HRRN_H
