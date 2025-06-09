#include "task.h"
#include "task_manager.h"
#include <iostream>
using namespace std;

int main(){

    Task t1("Study", "Physics Midterm", false);
    Task t2("Study", "Linear Midterm", false);
    Task t3("Clean", "Organize room", false);
    Task t4("Exercise", "Go For a Run", false);
    task_manager manager;
    manager.addTask(t1);
    manager.addTask(t2);
    manager.addTask(t3);
    manager.addTask(t4);

    manager.displayTasks();




    return 0;
}