#include <iostream>
#include "./scheduler.h"
#include <vector>
#include "./data.h"


void Scheduler:: addToArrived( Process proc){
    arrived.push(proc);
}
Process Scheduler:: getFromArrived( ){
    Process temp = std::move(arrived.front());
    arrived.pop();
    return  temp;
}   
    // Getter for state

int Scheduler::getLengthArrival()  {
    return arrived.size();
}
    // Getter for arrival_time
Scheduler::Scheduler(){
    std::cout<<"Scheduler is active \n";
}