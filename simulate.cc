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







int main() {

    std::cout << " Test 4" << std::endl;
    Process p = Process(20, 30, 1);
    std::cout << "Id: " << p.getPid() << "\tPriority: " << p.getPriority() << std::endl;

    return 0; 
}