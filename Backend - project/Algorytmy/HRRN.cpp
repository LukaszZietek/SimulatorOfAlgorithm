//
// Created by Lukasz on 25.12.2019.
//

#include "HRRN.h"

void HRRN::AddProcessesToVector(Processes &p1) {
    VectorOfProcesses.push_back(p1);
}


void HRRN::CountWaitingTime() {
    int ActualTime = 0;
    double MaxPriority = 1;
    int WhichInVector = 0;
    bool IfInside = false; // Warunek do petli aby dodawalo czas aktualny samo tylko gdy nie znalazlo zadnego innego procesu
    bool First = true;
    int HowMuchProcessDone = 0;
    if( ! VectorOfProcesses.empty())
    {
        ActualTime = VectorOfProcesses[0].GetInputTime();
        CountPriority(ActualTime);
        while(HowMuchProcessDone < VectorOfProcesses.size())
        {
            for (int i = 0; VectorOfProcesses[i].GetInputTime() <= ActualTime && i<VectorOfProcesses.size(); i++)
            {
                if (First == true && VectorOfProcesses[i].GetIfProcessDone() == false)
                {
                    IfInside = true;
                    MaxPriority = VectorOfProcesses[i].GetPriority();
                    First = false;
                    WhichInVector = i;
                }
                if (First == false && MaxPriority < VectorOfProcesses[i].GetPriority() && VectorOfProcesses[i].GetIfProcessDone() == false)
                {
                    MaxPriority = VectorOfProcesses[i].GetPriority();
                    WhichInVector = i;
                }
            }
            if(VectorOfProcesses[WhichInVector].GetIfProcessDone() == false) {

                VectorOfProcesses[WhichInVector].SetWaitingTime(ActualTime- VectorOfProcesses[WhichInVector].GetInputTime());
                ActualTime += VectorOfProcesses[WhichInVector].GetExecuteTime();
                VectorOfProcesses[WhichInVector].SetIfProcessDone(true);
                CountPriority(ActualTime);
                HowMuchProcessDone += 1;


            }
            if(IfInside == false)
            {
                ActualTime ++;
            }
            IfInside = false;
            First = true;
        }
    }
}

void HRRN::CountPriority(int Time) {
    int HowMuchExecuteTime;
    int WaitingTime = 0;
    double Equals = 0;
    if( ! VectorOfProcesses.empty())
    {
        for(int i = 0; i<VectorOfProcesses.size(); i++)
        {
            WaitingTime = Time - VectorOfProcesses[i].GetInputTime();
            if(WaitingTime >= 0) {
                HowMuchExecuteTime = VectorOfProcesses[i].GetExecuteTime();
                Equals = (double)(WaitingTime + HowMuchExecuteTime) / HowMuchExecuteTime;
                VectorOfProcesses[i].SetPriority(Equals);
            }
        }

    }
}



double HRRN::GetAverageWaitingTime() {
    return AverageWaitingTime;
}

void HRRN::Cout() {
    std::cout << "\n";
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetInputTime() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetIfProcessDone() << std::endl;
    }
    std::cout << "------------------" << std::endl;
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetWaitingTime() << std::endl;
    }
    std::cout << "------------------" << std::endl;
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetExecuteTime() << std::endl;
    }

    std::cout << "------------------" << std::endl;
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetPriority() << std::endl;
    }
}
