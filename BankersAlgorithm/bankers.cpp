#include "bankers.h"
#include <iostream>

// Author: Aaron Nguyen 301254559
// Date: March 30 2017
// Bankers Algorithm

//=========================================================================
bankers::bankers(int allocation[][3], int max[][3], int available[][3])
{
	// We will intialize each matrix
	//[Assumption] Each index will be filled with a given value


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			allocationMatrix[i][j] = allocation[i][j];
			maxMatrix[i][j] = max[i][j];
			
			needMatrix[i][j] = max[i][j] - allocation[i][j];
			availableMatrix[i][j] = 0;
		}
	}
	availableMatrix[0][0] = available[0][0];
	availableMatrix[0][1] = available[0][1];
	availableMatrix[0][2] = available[0][2];

	current[0] = availableMatrix[0][0];
	current[1] = availableMatrix[0][1];
	current[2] = availableMatrix[0][2];

}

//=========================================================================
void bankers::printMatrix()
{
	std::cout << "Process               Allocation Matrix     Max Matrix            Need Matrix           Available Matrix      " << std::endl;
	
	std::cout << "P0";
	std::cout << "                    ";
	//=========================================================================
	for (int j = 0; j < 3; j++)
	{
		std::cout << allocationMatrix[0][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << maxMatrix[0][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << needMatrix[0][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << availableMatrix[0][j] << " ";
	}

	//=========================================================================
	std::cout << std::endl;
	std::cout << "P1";
	std::cout << "                    ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << allocationMatrix[1][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << maxMatrix[1][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << needMatrix[1][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << availableMatrix[1][j] << " ";
	}

	std::cout << std::endl;
	std::cout << "P2";
	std::cout << "                    ";
	//=========================================================================
	for (int j = 0; j < 3; j++)
	{
		std::cout << allocationMatrix[2][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << maxMatrix[2][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << needMatrix[2][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << availableMatrix[2][j] << " ";
	}

	std::cout << std::endl;
	std::cout << "P3";
	std::cout << "                    ";
	//=========================================================================
	for (int j = 0; j < 3; j++)
	{
		std::cout << allocationMatrix[3][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << maxMatrix[3][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << needMatrix[3][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << availableMatrix[3][j] << " ";
	}

	std::cout << std::endl;
	std::cout << "P4";
	std::cout << "                    ";
	//=========================================================================
	for (int j = 0; j < 3; j++)
	{
		std::cout << allocationMatrix[4][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << maxMatrix[4][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << needMatrix[4][j] << " ";
	}
	std::cout << "                ";
	for (int j = 0; j < 3; j++)
	{
		std::cout << availableMatrix[4][j] << " ";
	}
	std::cout << std::endl;
}

//=========================================================================
void bankers::begin()
{
	// We have the first Available Resources..
	// We can compare to the 2nd process
	int whichProcess = 0;

	// if anything of the three Available resources are less than the Need
	// then we will change the control the to next process

	//=========================================================================
	if (!P0)
	{
		whichProcess = 0;
		for (int i = 0; i < 3; i++)
		{
			if (current[i] < needMatrix[0][i])
			{
				P0 = false;
				break;
			}
			else
			{
				P0 = true;
			}
		}
		if (P0)
		{
			add(0);
		}
	}

	//=========================================================================
	if (!P1)
	{
		whichProcess = 1;
		for (int i = 0; i < 3; i++)
		{
			if (current[i] < needMatrix[1][i])
			{
				P1 = false;
				break;
			}
			else
			{
				P1 = true;
			}
		}
		if (P1)
		{
			add(1);
		}
	}

	//=========================================================================
	if (!P2)
	{
		whichProcess = 2;
		for (int i = 0; i < 3; i++)
		{
			if (current[i] < needMatrix[2][i])
			{
				P2 = false;
				break;
			}
			else
			{
				P2 = true;
			}
		}
		if (P2)
		{
			add(2);
		}
	}

	//=========================================================================
	if (!P3)
	{
		whichProcess = 3;
		for (int i = 0; i < 3; i++)
		{
			if (current[i] < needMatrix[3][i])
			{
				P3 = false;
				break;
			}
			else
			{
				P3 = true;
			}
		}
		if (P3)
		{
			add(3);
		}
	}

	//=========================================================================
	if (!P4)
	{
		whichProcess = 4;
		for (int i = 0; i < 3; i++)
		{
			if (current[i] < needMatrix[4][i])
			{
				P4 = false;
				break;
			}
			else
			{
				P4 = true;
			}
		}
		if (P4)
		{
			add(4);
		}
	}

	// We will recompare the values again, if some of the processes are not complete
	if (!P0 || !P1 || !P2 || !P3 || !P4)
	{
		begin();
	}
	else
	{
		std::cout << "COMPLETE" << std::endl;
		printMatrix();
	}
}

//=========================================================================
void bankers::add(int whichProcess)
{
	// We will add the whichProcess resources with its allocation
	// and set that new space as the next index of resources
	current[0] = current[0] + allocationMatrix[whichProcess][0];
	current[1] = current[1] + allocationMatrix[whichProcess][1];
	current[2] = current[2] + allocationMatrix[whichProcess][2];

	availableMatrix[whichProcess][0] = current[0];
	availableMatrix[whichProcess][1] = current[1];
	availableMatrix[whichProcess][2] = current[2];
}
