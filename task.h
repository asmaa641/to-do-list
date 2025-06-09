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
bool isPriority;

public: 
Task(const string taskName, const string description, bool isCompleted, bool isPriority);
string getTaskName();
void setTaskName(string newTaskName);
string getDescription();
void setDescription(string newDescription);


};

#endif 