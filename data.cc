#include "./data.h"
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>


    Process::Process(int arrival, int execution, int prio) {
        // Generate random ID
        std::mt19937 rng(std::time(0));
        std::uniform_int_distribution<int> distribution(1000, 9999);
        pid = distribution(rng);

        // Set initial state and state_info
        state = "New";
        state_info = "New process created.";

        // Set arrival_time, execution_time, and priority
        arrival_time = arrival;
        execution_time = execution;
        priority = prio;
    }

    int Process::getPid() const {
        return pid;
    }

    // Getter for state
    std::string Process::getState() const {
        return state;
    }

    // Getter for arrival_time
    int Process::getArrivalTime() const {
        return arrival_time;
    }

    // Getter for execution_time
    int Process::getExecutionTime() const {
        return execution_time;
    }

    // Getter for state_info
    std::string Process::getStateInfo() const {
        return state_info;
    }

    // Getter for priority
    int Process::getPriority() const {
        return priority;
    }