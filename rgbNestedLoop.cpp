// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 18th, 2023
// This program displays all the possible RGB combinations
#include <iostream>

int main() {
    // Declare variables
    int r, g, b;

    // Using nested loops to display all possible RGB combinations
    for (r = 0; r <= 255; r++) {
        for (g = 0; g <= 255; g++) {
            for (b = 0; b <= 255; b++) {
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)",
                r, g, b, r, g, b);
            }
        }
    }
}
