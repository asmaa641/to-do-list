#include <iostream>
#include "task.h"
#include "task_manager.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector <Task> Tasks;

void task_manager::addTask (Task t1){
    Tasks.push_back(t1);
}

void task_manager::deleteTask(Task t1){
    Tasks.erase(
        remove(Tasks.begin(), Tasks.end(), t1), Tasks.end()
    );
}

void task_manager::displayTasks(){
    for (Task& t : Tasks){
        cout << "Task: " << t.getTaskName() << ", description: " << t.getDescription();
        if (t.getIsCompleted()) cout << ", completed";
        else cout << ", not completed";
        cout << endl;
    }
}

