#include <iostream>

using namespace std;

class Truck{
private:
    int id, capacity, speed;
public:
    // use traveling salesman
    Truck(int capacity, int id){
        this->capacity = capacity;
        this->id = id;
        this->speed = 1;
    }
    
    int getCapacity(){
        return capacity;
    }
};

class SuperTruck : Truck{
private:
    int id, capacity, speed;
public:
    // use traveling salesman
    SuperTruck(int capacity, int id, int speed) : Truck(int capacity, int id){
        this->speed = speed;
    }
    
    int getCapacity(){
        return capacity;
    }
};

class Schedule{
private:
    int i = 0;
public:
    string *task;
    int *profit, *deadline;
    Schedule(int size){
        task = new string[size];
        profit = new int[size];
        deadline = new int[size];
    }
    
    void addTask(string T, int P, int D){
        task[i] = T;
        profit[i] = P;
        deadline[i] = D;
        
        i++;
    }
    
    void assign_to_machine(){
        // use knapsack algorithm
        
    }
    
};

class Machine{
public:
    string name, work;
    int productionCapacity;
    Machine(string name, string work, int prod){
        this->name = name;
        this->work = work;
        productionCapacity = prod;
    }
    Schedule *s;
    Machine(string name){
        this->name = name;
    }
    
    void createSchedule(){
        s = new Schedule(8);
    }
    void setTask(string T, int P, int D){
        s->addTask(T,P,D);
    }
    void getSchedule(){
        
    }
};

int main() {
    // Create trucks and machines
    Truck truck1, truck2;
    Machine machineA("Machine A"), machineB("Machine B");

    // Assign tasks to machines
    machineA.setTask("Task 1", 10, 3);
    machineA.setTask("Task 2", 5, 2);
    machineB.setTask("Task 3", 8, 4);
    machineB.setTask("Task 4", 7, 3);

    // Assign schedules to trucks (if applicable)
    // truck1.assignSchedule(machineA.schedule);
    // truck2.assignSchedule(machineB.schedule);

    // Print schedules or perform other operations
    machineA.getSchedule();
    machineB.getSchedule();

    return 0;
}
