#include <iostream>
#include <chrono>
#include <thread>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds

    char lel[1000000] = "";
    char extension[] = "=";

    for(int i=0; i > -1; i++)
    {
        strcat(lel, extension);
        printf(" my cock now is long: %d cm \n", i);
        printf("8%sD \n \n", lel);
        sleep_for(nanoseconds(1000000000));
    }
}
