//
// Created by Lukasz on 18.12.2019.
//

#include "Processes.h"

Processes::Processes(int SetInput,int SetExecuteTime, double SetPriority) {
    InputTime = SetInput;
    OutputTime = 0;
    ExecuteTime = SetExecuteTime;
    WaitingTime = 0;
    Priority = SetPriority;
    IfProcessDone = false;
}

void Processes::SetInputTime(int value) {
    InputTime = value;
}

void Processes::SetOutputTime(int value) {
    OutputTime = value;
}

void Processes::SetPriority(double value) {
    Priority = value;
}

void Processes::SetIfProcessDone(bool value) {
    IfProcessDone = value;
}

void Processes::SetWaitingTime(int value) {
    WaitingTime = value;
}

void Processes::SetExecuteTime(int value) {
    ExecuteTime = value;
}

int Processes::GetInputTime() const {
    return InputTime;
}

int Processes::GetExecuteTime() const {
    return ExecuteTime;
}


int Processes::GetWaitingTime() const {
    return WaitingTime;
}

bool Processes::GetIfProcessDone() const {
    return IfProcessDone;
}

int Processes::GetOutputTime() const {
    return OutputTime;
}

double Processes::GetPriority() const {
    return Priority;
}

