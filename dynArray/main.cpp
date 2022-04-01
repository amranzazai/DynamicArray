/*
 * main.cpp
 *
 *  Created on: Feb 22, 2021
 *      Author: amranzazai
 */
#include <iostream>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;


int main()
{
	int size = 100000;

    auto start = high_resolution_clock::now();
    int *array = new int[size];

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
             << duration.count() << " microseconds" << endl;

    delete [] array;

	return 0;

}




