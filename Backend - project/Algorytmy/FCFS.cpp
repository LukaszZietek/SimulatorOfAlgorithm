//
// Created by Lukasz on 18.12.2019.
//

#include "FCFS.h"

void FCFS::AddProcessesToVector(Processes &p1) {
    VectorOfProcesses.push_back(p1);
}





void FCFS::CountWaitingTime() {  // Dodawanie czasu oczekiwania ( Czas wykonania poprzednich procesów - czas wejścia)
    /*int Time = 0;
    int HowMuchDone();
    if (!VectorOfProcesses.empty()) {
        for (int i = 0; i < VectorOfProcesses.size(); i++)
        {
            for ( int j = 0; j<i ; j++)
            {
                Time += VectorOfProcesses[j].GetExecuteTime();
            }
            VectorOfProcesses[i].SetWaitingTime(Time - VectorOfProcesses[i].GetInputTime());
            Time = 0;
        }
    }
     */
    int ActualTime = 0;
    int HowMuchDone = 0;
    bool IfInside = false; // Warunek do petli aby dodawalo czas aktualny samo tylko gdy nie znalazlo zadnego innego procesu
    while(HowMuchDone != VectorOfProcesses.size())
    {
        for(int i = 0; VectorOfProcesses[i].GetInputTime() <= ActualTime && i<VectorOfProcesses.size(); i++)
        {
            if(VectorOfProcesses[i].GetIfProcessDone() == false)
            {
                IfInside = true;
                VectorOfProcesses[i].SetWaitingTime(ActualTime - VectorOfProcesses[i].GetInputTime());
                VectorOfProcesses[i].SetIfProcessDone(true);
                ActualTime += VectorOfProcesses[i].GetExecuteTime();
                HowMuchDone++;
            }
        }
        if(IfInside == false)
        {
            ActualTime++;
        }
        IfInside = false;

    }
}



double FCFS::GetAverageWaitingTime() {
    return  AverageWaitingTime;
}

void FCFS::Cout() { // ALGORYTM TESTOWY
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetInputTime() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetExecuteTime()<< std::endl;
    }
    std::cout << "------------------" << std::endl;
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetWaitingTime() << std::endl;
    }
}