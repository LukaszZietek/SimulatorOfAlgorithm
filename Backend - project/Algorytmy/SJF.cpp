//
// Created by Lukasz on 22.12.2019.
//

#include "SJF.h"

void SJF::AddProcessesToVector(Processes &p1) {
    VectorOfProcesses.push_back(p1);
}

void SJF::CountWaitingTime() {
    int ActualTime = 0;
    int WhoHasMinExecute = 0;
    int MinValueOfExecuteTime = 0;
    int Breaking = 0;
    int IfAllDone = 0; // sprawdza czy wszystkie zrobione;
    bool IfInside = false; // Warunek do petli aby dodawalo czas aktualny samo tylko gdy nie znalazlo zadnego innego procesu
    if(! VectorOfProcesses.empty()) {
        ActualTime = VectorOfProcesses[0].GetInputTime();
        while(IfAllDone != VectorOfProcesses.size()) {
            for (int j = 0; VectorOfProcesses[j].GetInputTime() <= ActualTime && j<VectorOfProcesses.size(); j++) {
                if (VectorOfProcesses[j].GetIfProcessDone() == false && Breaking == 0 && VectorOfProcesses[j].GetIfProcessDone() == false) {
                    IfInside = true;
                    MinValueOfExecuteTime = VectorOfProcesses[j].GetExecuteTime();
                    WhoHasMinExecute = j;
                    Breaking = 1;

                }
                if (VectorOfProcesses[j].GetExecuteTime() < MinValueOfExecuteTime && Breaking == 1 && VectorOfProcesses[j].GetIfProcessDone() == false) {

                    MinValueOfExecuteTime = VectorOfProcesses[j].GetExecuteTime();
                    WhoHasMinExecute = j;
                }

            }

            if(VectorOfProcesses[WhoHasMinExecute].GetIfProcessDone() == false && VectorOfProcesses[WhoHasMinExecute].GetInputTime() <= ActualTime) {

                VectorOfProcesses[WhoHasMinExecute].SetWaitingTime(
                        ActualTime - VectorOfProcesses[WhoHasMinExecute].GetInputTime());
                ActualTime += MinValueOfExecuteTime;
                VectorOfProcesses[WhoHasMinExecute].SetIfProcessDone(true);
                IfAllDone++;
                Breaking = 0;
                WhoHasMinExecute = 0;
            }
            if(IfInside == false)
            {
                ActualTime ++;
            }
            IfInside = false;
        }
    }

}




double SJF::GetAverageWaitingTime() {
    return AverageWaitingTime;
}
void SJF::Cout() {
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
}
