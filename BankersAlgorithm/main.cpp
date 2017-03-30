#include <iostream>
#include "bankers.h"

// Author: Aaron Nguyen 301254559
// Date: March 30 2017
// Bankers Algorithm

int main()
{
	int input = 0;
	std::cout << "Bankers Algorithm" << std::endl;
	std::cout << "Enter (1) for Specific Example or (2) for User Input: ";
	std::cin >> input;

	if (input == 1)
	{
		// Test 1: We have a specific example of bankers algorithm in effect
		int allocationb[5][3];
		int maxb[5][3];
		int availableb[5][3];

		allocationb[0][0] = 0;
		allocationb[0][1] = 1;
		allocationb[0][2] = 0;

		allocationb[1][0] = 2;
		allocationb[1][1] = 0;
		allocationb[1][2] = 0;

		allocationb[2][0] = 3;
		allocationb[2][1] = 0;
		allocationb[2][2] = 2;

		allocationb[3][0] = 2;
		allocationb[3][1] = 1;
		allocationb[3][2] = 1;

		allocationb[4][0] = 0;
		allocationb[4][1] = 0;
		allocationb[4][2] = 2;


		maxb[0][0] = 7;
		maxb[0][1] = 5;
		maxb[0][2] = 3;

		maxb[1][0] = 3;
		maxb[1][1] = 2;
		maxb[1][2] = 2;

		maxb[2][0] = 9;
		maxb[2][1] = 0;
		maxb[2][2] = 2;

		maxb[3][0] = 2;
		maxb[3][1] = 2;
		maxb[3][2] = 2;

		maxb[4][0] = 4;
		maxb[4][1] = 3;
		maxb[4][2] = 3;

		availableb[0][0] = 3;
		availableb[0][1] = 3;
		availableb[0][2] = 2;

		bankers test1 = bankers(allocationb, maxb, availableb);
		test1.printMatrix();
		test1.begin();
		int *a = test1.get_currentAvailable();
		std::cout << "The final space available for A, B, C is " << a[0] << " " << a[1] << " " << a[2] << std::endl;
	}
	
	if (input == 2)
	{
		// Test 2: We have users input specific values for all resources and processes
		// [Assumption] We will assume that the user will only enter intergers and never characters 
		// for inputs
		// [Assumption] We will enter the number of values of the resources for A B C
		int allocation[5][3];
		int max[5][3];
		int need[5][3];
		int available[5][3];

		//=========================================================================
		std::cout << "Allocation value of resource A, B, C, respectively for all 5 processes" << std::endl;
		std::cout << "Process 1" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Enter value ";
			std::cin >> allocation[0][i];
		}
		std::cout << "Process 2" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Enter value ";
			std::cin >> allocation[1][i];
		}
		std::cout << "Process 3" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Enter value ";
			std::cin >> allocation[2][i];
		}
		std::cout << "Process 4" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Enter value ";
			std::cin >> allocation[3][i];
		}
		std::cout << "Process 5" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Enter value ";
			std::cin >> allocation[4][i];
		}

		//=========================================================================
		std::cout << "Max value of resource A, B, C, respectively for all 5 processes" << std::endl;
		std::cout << "Process 1" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Enter value ";
			std::cin >> max[0][i];
		}
		std::cout << "Process 2" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Enter value ";
			std::cin >> max[1][i];
		}
		std::cout << "Process 3" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Enter value ";
			std::cin >> max[2][i];
		}
		std::cout << "Process 4" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Enter value ";
			std::cin >> max[3][i];
		}
		std::cout << "Process 5" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Enter value ";
			std::cin >> max[4][i];
		}

		//=========================================================================
		std::cout << "Intial available value of resource A, B, C, respectively for all 5 processes" << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Enter value ";
			std::cin >> available[0][i];
		}

		bankers test2 = bankers(allocation, max, available);
		test2.printMatrix();
		test2.begin();
		int *a1 = test2.get_currentAvailable();
		std::cout << "The final space available for A, B, C is " << a1[0] << " " << a1[1] << " " << a1[2] << std::endl;
	}
	return 0;
}