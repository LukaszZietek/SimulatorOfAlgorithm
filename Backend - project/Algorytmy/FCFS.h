//
// Created by Lukasz on 18.12.2019.
//

#ifndef STLLEARN_FCFS_H
#define STLLEARN_FCFS_H

#include "Processes.h"
#include <vector>
#include <algorithm>
#include "SaveAndLoad.h"

#include <iostream>


class FCFS : public SaveAndLoad {

public:
    void CountWaitingTime() override;
    void AddProcessesToVector(Processes & p1);
    double GetAverageWaitingTime();
    void Cout(); //-ALGORYM TESTOWY


};


#endif //STLLEARN_FCFS_H
