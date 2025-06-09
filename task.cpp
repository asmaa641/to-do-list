#include <iostream>
#include "task.h"
#include <vector>
#include <string>

using namespace std;


    Task::Task(const string task_Name, const string descrip, bool is_Completed, bool is_Priority) : 
    taskName(task_Name), description(descrip), isCompleted(is_Completed), isPriority(is_Priority) {}

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