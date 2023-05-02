#ifndef SCHEDULER_H
#define SCHEDULER_H
#include "./data.h"
#include <queue>


#include <string>

class Scheduler { 

    public :

        // settor's
        void addToArrived( Process p);

        Process getFromArrived() ;
        // Getter for state

        int getLengthArrival()  ;
        // Getter for arrival_time



    protected : 

        std::queue<Process> arrived;

    public : 

        Scheduler();
    

}; 



#endif