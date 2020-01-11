//
// Created by Lukasz on 27.12.2019.
//

#include "SaveAndLoad.h"

void SaveAndLoad::serializeAverageWaitingTime(std::string path) const {

    std::ofstream myfile;
    myfile.open(path);
    myfile << AverageWaitingTime;
    myfile.close();

}

void SaveAndLoad::serializeWaitingTime(std::string path) const {
    std::ofstream myfile;
    myfile.open(path);
    myfile << VectorOfProcesses.size();
    myfile << std::endl;
    for(int i = 0; i<VectorOfProcesses.size(); i++)
    {
        myfile << VectorOfProcesses[i].GetWaitingTime();
        myfile << std::endl;
    }
    myfile.close();
}

/*std::istream & SaveAndLoad::deserialize(std::istream &is) {
    if(is)
    {
        char comma;
        int len = 0;
        int ExecTime = 0;
        int InpTime = 0;
        is >> len;
        is >> comma;
        for(int i = 0; i<len ; i++)
        {
            is >> InpTime;
            is >> comma;
            is >> ExecTime;
            is >> comma;
            VectorOfProcesses.push_back(Processes(InpTime,ExecTime,0));
        }




    }
    return is;
}
 */
void SaveAndLoad::deserialize(std::string path) {
    VectorOfProcesses.clear();
    std::filebuf read;
    read.open(path,std::ios::in);
    std::istream Is(&read);
    if(Is) {
        char comma;
        int len = 0;
        int ExecTime = 0;
        int InpTime = 0;
        Is >> len;
        Is >> comma;
        for (int i = 0; i < len; i++) {
            Is >> InpTime;
            Is >> comma;
            Is >> ExecTime;
            Is >> comma;
            VectorOfProcesses.push_back(Processes(InpTime, ExecTime, 0));
        }
        read.close();
    }
}

void SaveAndLoad::SortByEntryTime()
{
    if(! VectorOfProcesses.empty())
    {
        sort(VectorOfProcesses.begin(), VectorOfProcesses.end(),
             [](const Processes &p1, const Processes &p2) -> bool { return p1.GetInputTime() < p2.GetInputTime(); });
    }
}

void SaveAndLoad::CountAverageWaitingTime() {
    AverageWaitingTime = 0;
    for(int i = 0; i<VectorOfProcesses.size(); i++)
    {
        AverageWaitingTime += VectorOfProcesses[i].GetWaitingTime();
    }
    AverageWaitingTime = AverageWaitingTime/VectorOfProcesses.size();
}

void SaveAndLoad::CountWaitingTime() {

}

void SaveAndLoad::Count() {
    SortByEntryTime();
    CountWaitingTime();
    CountAverageWaitingTime();
}

void SaveAndLoad::PreparePackageToCount(std::string path) {
    std::ofstream myfile;
    myfile.open(path);
    myfile << VectorOfProcesses.size();
    myfile << ",";
    for(int i = 0; i<VectorOfProcesses.size(); i++)
    {
        myfile << VectorOfProcesses[i].GetInputTime();
        myfile << ",";
        myfile << VectorOfProcesses[i].GetExecuteTime();
        myfile << ",";
    }
    myfile.close();
}
