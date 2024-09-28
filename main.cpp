//
//  main.cpp
//  ClinicManagementSystem
//
//  Created by Navin Maini on 22/09/24.
//

#include <iostream>

using namespace std;
/*
struct Patient{
    int age;
    int phone;
    string name;
    int Criticality;
    string reasonOfVisit;
};

class Doctor{
public:
    int Doctor_id;
    string Dname;
    double experience;
    
    Doctor(int id, string name, double _experience){
        Doctor_id = id;
        Dname = name;
        experience = _experience;
    }
};

class EmergencyDoctor : Doctor {
public:
    float SuccessRate;
    
};

class Hospital{
public:
    int doctors[20];
    Doctor *doctor = new Doctor(1,"Amresh Aggarwal",6);
};
*/
class Truck{
    int id, location_id, capacity;
    // use traveling salesman
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
    string name;
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
