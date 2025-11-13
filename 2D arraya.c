/*
Name: Sammy kioko Kamne
Reg No: CT100/G/21645/24
Date: 29/10/25
Description: Program uses a 3D array to track room occupancy across 3 branches, each with 5 floors and 10 rooms, and counts total occupied rooms.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10], branch, floor, room, total = 0, occupied;

    srand(time(0));

    printf("=== Hotel Chain Occupancy Tracker ===\n\n");

    for (branch = 0; branch < 3; branch++) {
        printf("Branch %d:\n", branch + 1);

        for (floor = 0; floor < 5; floor++) {
            occupied = 0;

            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    occupied++;
            }

            printf("  Floor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupied, 10 - occupied);
            total += occupied;
        }
        printf("\n");
    }

    printf("Total Occupied Rooms Across All Branches: %d\n", total);

    return 0;
}