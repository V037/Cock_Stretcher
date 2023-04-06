#include <iostream>
#include <stdio.h>
#include <string.h>
#include <windows.h>
using namespace std;
//credits: steph404, V037_
int main()
{
    char lel[1000000] = ""; //allocating memory, char stands for 1 character of alphabet in Ascii
    char extension[] = "="; //how the extension looks like
    for(int i=0; i > -1; i++)   //doing a loop
    {
        strcat(lel, extension);                         //doing the big math
        printf(" my cock now is long: %d cm \n", i-1);  //print results
        printf("8%sD \n \n", lel);
        Sleep(0.0001);                                  //cooldown
    }
}
