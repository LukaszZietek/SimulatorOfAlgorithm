//
// Created by Lukasz on 22.12.2019.
//

#ifndef STLLEARN_SJF_H
#define STLLEARN_SJF_H

#include <vector>
#include <algorithm>
#include "Processes.h"
#include "SaveAndLoad.h"
#include <iostream>


class SJF : public SaveAndLoad {

public:
    void AddProcessesToVector(Processes &p1);
    void CountWaitingTime();
    double GetAverageWaitingTime();

    void Cout(); // ----ALROGYTM TESTOWY

};


#endif //STLLEARN_SJF_H
