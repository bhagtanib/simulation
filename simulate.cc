// <Nana Boateng> <Amoah> && <Bhavesh> <Bhagtani>
// <04/22/23>
// <Course Code: CS-475W-1>
// <Lab Module # : 7>
// License: Copyright <2023> <Nana Boateng Amoah> && <Bhavesh> <Bhagtani>
// Resources used: <Lecture 7 and 8 from Class slides> 
// Worked with <Bhavesh Bhagtani> 
// <Discrete Event Model Simultion> 

// standard io libraries.
#include <iostream>

#include "../simulation/data.h"
#include "./scheduler.h"
#include <vector>
#include <queue>

std::vector<Process> fel;
//poplate fel

std::queue<Process> queue; //sorted fel
// write logic to sort it by arrival time


int executionTime = 0;

void pushToArrived(int execTime, Scheduler s){
    Process temp = queue.front();
    while (temp.getArrivalTime() < execTime)
    {
        
    }
    
}


std::queue<Process> proceess(){

    std::queue<Process> pList;

    Process p0 = Process(0, 4, 1);
    Process p1 = Process(1, 4, 1);
    Process p2 = Process(3, 4, 12);
    Process p3 = Process(5, 4, 13);
    Process p4 = Process(8, 4, 1);
    Process p5 = Process(11, 4, 12);
    Process p6 = Process(15, 4, 13);

    pList.push(p0);
    pList.push(p1);
    pList.push(p2);
    pList.push(p3);
    pList.push(p4);
    pList.push(p5);
    pList.push(p6);

    return pList;

}

int main() {

    Scheduler s;
    std::queue<Process> nArrived = proceess();

    s.addToArrived(nArrived.front());
    nArrived.pop();

    int counter = 0;

    while (s.getLengthArrival() > 0)
    {
        Process currentProcess = s.getFromArrived();
        std::cout<< "Process " << currentProcess.getPid() << " is being executed. \n";
        counter += currentProcess.getExecutionTime();
        std::cout<<"Current time into system: " << counter << "ms \n";
        // Add the next process to arrived from nArrived
        while(true)
        {
           Process temp = nArrived.front();
           if(temp.getArrivalTime() <= counter){
                s.addToArrived(temp);
                std::cout << "Process " << temp.getPid() << "has been added to the queue. \n";
                nArrived.pop();
           }
           else{
                break;
           }

        }
        
    }
    


    return 0; 
}