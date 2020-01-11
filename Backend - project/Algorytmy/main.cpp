#include <iostream>
#include "Processes.h"
#include "FCFS.h"
#include "SJF.h"
#include "RR.h"
#include "HRRN.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool IfExists(const char * path)
{
    FILE* plik;
    plik = fopen(path,"r");
    if(plik)
    {
        fclose(plik);
        return true;
    }
    fclose(plik);
    return false;
}


int main()
{
    if(IfExists(".\\Data\\InputData.bin") == false) {

        SJF SJFResult;
        SJFResult.deserialize(".\\Data\\Dane1.bin");
        SJFResult.Count();
        SJFResult.serializeAverageWaitingTime(".\\Data\\SJFResult1.txt");
        SJFResult.serializeWaitingTime(".\\Data\\SJFWaiting1.txt");


        SJFResult.deserialize(".\\Data\\Dane2.bin");
        SJFResult.Count();
        SJFResult.serializeWaitingTime(".\\Data\\SJFWaiting2.txt");
        SJFResult.serializeAverageWaitingTime(".\\Data\\SJFResult2.txt");

        SJFResult.deserialize(".\\Data\\Dane3.bin");
        SJFResult.Count();
        SJFResult.serializeWaitingTime(".\\Data\\SJFWaiting3.txt");
        SJFResult.serializeAverageWaitingTime(".\\Data\\SJFResult3.txt");

        SJFResult.deserialize(".\\Data\\Dane4.bin");
        SJFResult.Count();
        SJFResult.serializeWaitingTime(".\\Data\\SJFWaiting4.txt");
        SJFResult.serializeAverageWaitingTime(".\\Data\\SJFResult4.txt");

        SJFResult.deserialize(".\\Data\\Dane5.bin");
        SJFResult.Count();
        SJFResult.serializeWaitingTime(".\\Data\\SJFWaiting5.txt");
        SJFResult.serializeAverageWaitingTime(".\\Data\\SJFResult5.txt");

        SJFResult.deserialize(".\\Data\\Dane6.bin");
        SJFResult.Count();
        SJFResult.serializeWaitingTime(".\\Data\\SJFWaiting6.txt");
        SJFResult.serializeAverageWaitingTime(".\\Data\\SJFResult6.txt");


        HRRN HRRNResult;
        HRRNResult.deserialize(".\\Data\\Dane1.bin");
        HRRNResult.Count();
        HRRNResult.serializeAverageWaitingTime(".\\Data\\HRRNResult1.txt");
        HRRNResult.serializeWaitingTime(".\\Data\\HRRNWaiting1.txt");

        HRRNResult.deserialize(".\\Data\\Dane2.bin");
        HRRNResult.Count();
        HRRNResult.serializeAverageWaitingTime(".\\Data\\HRRNResult2.txt");
        HRRNResult.serializeWaitingTime(".\\Data\\HRRNWaiting2.txt");

        HRRNResult.deserialize(".\\Data\\Dane3.bin");
        HRRNResult.Count();
        HRRNResult.serializeAverageWaitingTime(".\\Data\\HRRNResult3.txt");
        HRRNResult.serializeWaitingTime(".\\Data\\HRRNWaiting3.txt");

        HRRNResult.deserialize(".\\Data\\Dane4.bin");
        HRRNResult.Count();
        HRRNResult.serializeAverageWaitingTime(".\\Data\\HRRNResult4.txt");
        HRRNResult.serializeWaitingTime(".\\Data\\HRRNWaiting4.txt");

        HRRNResult.deserialize(".\\Data\\Dane5.bin");
        HRRNResult.Count();
        HRRNResult.serializeAverageWaitingTime(".\\Data\\HRRNResult5.txt");
        HRRNResult.serializeWaitingTime(".\\Data\\HRRNWaiting5.txt");

        HRRNResult.deserialize(".\\Data\\Dane6.bin");
        HRRNResult.Count();
        HRRNResult.serializeAverageWaitingTime(".\\Data\\HRRNResult6.txt");
        HRRNResult.serializeWaitingTime(".\\Data\\HRRNWaiting6.txt");


        RR RRResult;
        RRResult.deserialize(".\\Data\\Dane1.bin");
        RRResult.SetAQuantumOfTime();
        RRResult.Count();
        RRResult.serializeAverageWaitingTime(".\\Data\\RRResult1.txt");
        RRResult.serializeWaitingTime(".\\Data\\RRWaiting1.txt");

        RRResult.deserialize(".\\Data\\Dane2.bin");
        RRResult.Count();
        RRResult.serializeAverageWaitingTime(".\\Data\\RRResult2.txt");
        RRResult.serializeWaitingTime(".\\Data\\RRWaiting2.txt");

        RRResult.deserialize(".\\Data\\Dane3.bin");
        RRResult.Count();
        RRResult.serializeAverageWaitingTime(".\\Data\\RRResult3.txt");
        RRResult.serializeWaitingTime(".\\Data\\RRWaiting3.txt");

        RRResult.deserialize(".\\Data\\Dane4.bin");
        RRResult.Count();
        RRResult.serializeAverageWaitingTime(".\\Data\\RRResult4.txt");
        RRResult.serializeWaitingTime(".\\Data\\RRWaiting4.txt");

        RRResult.deserialize(".\\Data\\Dane5.bin");
        RRResult.Count();
        RRResult.serializeAverageWaitingTime(".\\Data\\RRResult5.txt");
        RRResult.serializeWaitingTime(".\\Data\\RRWaiting5.txt");

        RRResult.deserialize(".\\Data\\Dane6.bin");
        RRResult.Count();
        RRResult.serializeAverageWaitingTime(".\\Data\\RRResult6.txt");
        RRResult.serializeWaitingTime(".\\Data\\RRWaiting6.txt");


        FCFS FCFSResult;
        FCFSResult.deserialize(".\\Data\\Dane1.bin");
        FCFSResult.Count();
        FCFSResult.serializeAverageWaitingTime(".\\Data\\FCFSResult1.txt");
        FCFSResult.serializeWaitingTime(".\\Data\\FCFSWaiting1.txt");

        FCFSResult.deserialize(".\\Data\\Dane2.bin");
        FCFSResult.Count();
        FCFSResult.serializeAverageWaitingTime(".\\Data\\FCFSResult2.txt");
        FCFSResult.serializeWaitingTime(".\\Data\\FCFSWaiting2.txt");

        FCFSResult.deserialize(".\\Data\\Dane3.bin");
        FCFSResult.Count();
        FCFSResult.serializeAverageWaitingTime(".\\Data\\FCFSResult3.txt");
        FCFSResult.serializeWaitingTime(".\\Data\\FCFSWaiting3.txt");

        FCFSResult.deserialize(".\\Data\\Dane4.bin");
        FCFSResult.Count();
        FCFSResult.serializeAverageWaitingTime(".\\Data\\FCFSResult4.txt");
        FCFSResult.serializeWaitingTime(".\\Data\\FCFSWaiting4.txt");

        FCFSResult.deserialize(".\\Data\\Dane5.bin");
        FCFSResult.Count();
        FCFSResult.serializeAverageWaitingTime(".\\Data\\FCFSResult5.txt");
        FCFSResult.serializeWaitingTime(".\\Data\\FCFSWaiting5.txt");

        FCFSResult.deserialize(".\\Data\\Dane6.bin");
        FCFSResult.Count();
        FCFSResult.serializeAverageWaitingTime(".\\Data\\FCFSResult6.txt");
        FCFSResult.serializeWaitingTime(".\\Data\\FCFSWaiting6.txt");

    } else
    {
        SJF SJFResult;
        SJFResult.deserialize(".\\Data\\InputData.bin");
        SJFResult.Count();
        SJFResult.serializeAverageWaitingTime(".\\Data\\SJFInputDataResult.txt");
        SJFResult.serializeWaitingTime(".\\Data\\SJFInputDataWaiting.txt");

        FCFS FCFSResult;
        FCFSResult.deserialize(".\\Data\\InputData.bin");
        FCFSResult.Count();
        FCFSResult.serializeAverageWaitingTime(".\\Data\\FCFSInputDataResult.txt");
        FCFSResult.serializeWaitingTime(".\\Data\\FCFSInputDataWaiting.txt");

        RR RRResult;
        RRResult.deserialize(".\\Data\\InputData.bin");
        RRResult.Count();
        RRResult.serializeAverageWaitingTime(".\\Data\\RRInputDataResult.txt");
        RRResult.serializeWaitingTime(".\\Data\\RRInputDataWaiting.txt");

        HRRN HRRNResult;
        HRRNResult.deserialize(".\\Data\\InputData.bin");
        HRRNResult.Count();
        HRRNResult.serializeAverageWaitingTime(".\\Data\\HRRNInputDataResult.txt");
        HRRNResult.serializeWaitingTime(".\\Data\\HRRNInputDataWaiting.txt");
    }






    return 0;
}