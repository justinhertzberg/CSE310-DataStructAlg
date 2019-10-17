//
//  main.cpp
//  Project2
//
//  Created by Justin Hertzberg on 10/16/19.
//  Copyright © 2019 ASU. All rights reserved.
//

#include <iostream>
#include "defn.h"
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // open csv files
    ifstream details_1950;
    details_1950.open("details-1950.csv");
    if (details_1950.is_open()) {
        cout << "worked\n";
    }
    
    int num_of_years;
    // get num of years thru command line arg
    if ((num_of_years = atoi(argv[1])));
    else return 0;
    // initialize dynamic array to store years from command line args
    int *years = new int[num_of_years];
    for (int i = 0; i < num_of_years; i++) {
        years[i] = atoi(argv[i+2]);
    }
    string temp; // store the csv line, needs updating
    int detail_count = 0;
    while (getline(details_1950, temp)) {
        detail_count++;
    }
    cout << detail_count << "\n";
}
