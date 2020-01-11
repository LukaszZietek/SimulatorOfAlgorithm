//
// Created by Lukasz on 23.12.2019.
//

#include "RR.h"

void RR::AddProcessesToVector(Processes &p1) {
    VectorOfProcesses.push_back(p1);
}


void RR::CountWaitingTime() {
        int ActualTime = 0;
        int RemainingExecuteTime = 0;
        bool IfInside = false; // Warunek do petli aby dodawalo czas aktualny samo tylko gdy nie znalazlo zadnego innego procesu
        int HowMuchProcessDone = 0; // Argument do petli While aby powtarzalo tyle razy, aż wszystkie procesy będą wykonane.
        if( ! VectorOfProcesses.empty())
        {
            while(HowMuchProcessDone < VectorOfProcesses.size())
            {

                for (int j = 0; (VectorOfProcesses[j].GetInputTime() <= ActualTime && j< VectorOfProcesses.size()); j++) // Przeszukuje tablicę obiektów, które są gotowe do wykonania.
                {

                        if (VectorOfProcesses[j].GetIfProcessDone() == false) {
                            IfInside = true;
                            RemainingExecuteTime = VectorOfProcesses[j].GetExecuteTime() - QuantumOfTime;
                            if (RemainingExecuteTime > 0) {
                                ActualTime += QuantumOfTime;
                                VectorOfProcesses[j].SetExecuteTime(RemainingExecuteTime);
                                VectorOfProcesses[j].SetWaitingTime(
                                        VectorOfProcesses[j].GetWaitingTime() - QuantumOfTime);

                            } else {
                                VectorOfProcesses[j].SetWaitingTime(VectorOfProcesses[j].GetWaitingTime() + ActualTime -
                                                                    VectorOfProcesses[j].GetInputTime());
                                VectorOfProcesses[j].SetExecuteTime(0);
                                VectorOfProcesses[j].SetIfProcessDone(true);
                                ActualTime += QuantumOfTime + RemainingExecuteTime;
                                HowMuchProcessDone++;

                            }
                        }

                }
                if(IfInside == false)
                {
                    ActualTime ++;
                }
                IfInside = false;
            }
        }

}



void RR::SetAQuantumOfTime()
{
    QuantumOfTime = 2;
    if( ! VectorOfProcesses.empty())
    {
        QuantumOfTime = VectorOfProcesses[0].GetExecuteTime();
        for (int i = 0; i < VectorOfProcesses.size(); i++)
        {
            if (QuantumOfTime < VectorOfProcesses[i].GetExecuteTime())
            {
                QuantumOfTime = VectorOfProcesses[i].GetExecuteTime();
            }
        }
    }
    if(QuantumOfTime > 4)
    {
        QuantumOfTime = QuantumOfTime/2;
    }
}
double RR::GetAverageWaitingTime() {
    return AverageWaitingTime;
}

void RR::Cout() {
    std::cout << "Quantum of time: " << QuantumOfTime << "\n";
    /*
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetInputTime() << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
     */
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetIfProcessDone() << std::endl;
    }

    std::cout << "------------------" << std::endl;
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetWaitingTime() << std::endl;
    }

    std::cout << "----------------------" << std::endl;
    for(int i = 0; i<VectorOfProcesses.size();i++)
    {
        std::cout << VectorOfProcesses[i].GetExecuteTime() << std::endl;
    }
}

