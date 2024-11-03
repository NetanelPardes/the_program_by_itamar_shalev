#include <iostream>
#include <vector>
#include <string>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
{
	int totGas = 0, totCost = 0, gasTank = 0, start = 0;

	for (int i = 0; i < gas.size(); i++)
	{
		totGas += gas[i];
		totCost += cost[i];

		gasTank += gas[i] - cost[i];

		if (gasTank < 0)
		{
			start = i + 1;
			gasTank = 0;
		}
	}
	return (totGas >= totCost) ? start : -1;
}

