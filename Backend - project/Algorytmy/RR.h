//
// Created by Lukasz on 23.12.2019.
//

#ifndef STLLEARN_RR_H
#define STLLEARN_RR_H

#include "Processes.h"
#include "SaveAndLoad.h"
#include <vector>
#include <algorithm>
#include <iostream>

class RR: public SaveAndLoad {
private:
    int QuantumOfTime;
public:
    void AddProcessesToVector(Processes &p1);
    void CountWaitingTime() override;
    void SetAQuantumOfTime();
    double GetAverageWaitingTime();
    void Cout(); // Algorytm Testowy

};


#endif //STLLEARN_RR_H
