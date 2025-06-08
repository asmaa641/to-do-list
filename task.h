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
string getTaskName();
void setTaskName(string taskName);
string getDescription();
void setDescription(string description);


};

#endif 