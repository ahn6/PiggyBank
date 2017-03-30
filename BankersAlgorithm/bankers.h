#ifndef BANKERS_H
#define BANKERS_H
#pragma once

// Author: Aaron Nguyen 301254559
// Date: March 30 2017
// Bankers Algorithm

class bankers
{
private:
	int allocationMatrix[5][3];
	int maxMatrix[5][3]; 
	int needMatrix[5][3];
	int availableMatrix[5][3];

	int current[3];

	bool P0 = false;
	bool P1 = false;
	bool P2 = false;
	bool P3 = false;
	bool P4 = false;

public:
	//=========================================================================
	// We will intialize All 2D arrays to the number of resources and proccesses
	// [Assumption] We will only deal with the specific case of 5 processes and 3 resources
	bankers(int allocation[][3], int max[][3], int available[][3]);

	//=========================================================================
	// Let's print the current matrices
	void printMatrix();

	//=========================================================================
	// Let's start the algorithm
	void begin();

	//=========================================================================
	// if the current process works then we will add to the available matrix
	void add(int process);

	//=========================================================================
	// Get the current available space
	int* get_currentAvailable()
	{
		return current;
	}


};
#endif