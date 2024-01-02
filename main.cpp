#include <stdio.h>
#include "dirent.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
    DIR *dp;
    int i = 0;
    int ta_num = 0;
    int total = 0;
    struct dirent *ep;
    if (argv[2] != 0){
        ta_num = atoi(argv[2]);
    } else
        ta_num = 0;

    dp = opendir (argv[1]);

    if (dp != NULL)
    {
        while (ep = readdir (dp))
            i++;

        (void) closedir (dp);
        total = i-ta_num;
        std::cout << (total);
    }
    else
        perror ("Couldn't open the directory");
    return 0;
}