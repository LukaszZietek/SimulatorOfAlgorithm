//
// Created by Lukasz on 18.12.2019.
//

#ifndef STLLEARN_PROCESSES_H
#define STLLEARN_PROCESSES_H


class Processes {
private:
    int InputTime;
    int OutputTime;
    int WaitingTime;
    int ExecuteTime; // Czas wykonywania procesu
    double Priority;
    bool IfProcessDone;


public:
    explicit Processes(int SetInput = 0, int SetExecuteTime = 0, double SetPriority = 0);
    void SetInputTime(int value);
    void SetOutputTime(int value);
    void SetPriority(double value);
    void SetIfProcessDone(bool value);
    void SetWaitingTime(int value);
    void SetExecuteTime(int value);
    int GetInputTime() const;
    int GetExecuteTime() const;
    int GetWaitingTime() const;
    int GetOutputTime() const;
    bool GetIfProcessDone() const;
    double GetPriority() const;


};


#endif //STLLEARN_PROCESSES_H
