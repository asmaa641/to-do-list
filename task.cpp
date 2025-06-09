#include <iostream>
#include "task.h"
#include <string>

using namespace std;


    Task::Task(const string task_Name, const string descrip, bool is_Completed) : 
    taskName(task_Name), description(descrip), isCompleted(is_Completed) {}

    string Task::getTaskName(){
        return taskName;
    }

    void Task::setTaskName(string newTaskName){
        taskName = newTaskName;
    }

    string Task::getDescription(){
        return description;
    }
    void Task::setDescription(string newDescription){
        description = newDescription;
    }

    bool Task::getIsCompleted(){
        return isCompleted;
    }