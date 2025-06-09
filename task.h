#ifndef TASK_H
#define TASK_H
#include <string>
#include <vector>
using namespace std;

class Task{
private:
string taskName;
string description;
bool isCompleted;


public: 
Task(const string taskName, const string description, bool isCompleted);
string getTaskName();
void setTaskName(string newTaskName);
string getDescription();
void setDescription(string newDescription);
bool getIsCompleted();

bool operator==(const Task& other) const{
    return taskName == other.taskName;
}


};

#endif 