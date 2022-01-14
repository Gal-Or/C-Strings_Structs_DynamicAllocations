#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "allEquation.h"


void printVectorB(const AllEquations* ae)
{
	printf("Vector B=\n");
		for(int i=0; i< ae->count ; i++)
		{
			printf("		%.3f\n" ,ae->eqArr[i]->B);

		}
}

void convertToSolver(const AllEquations* ae, Solver* solver) //convert all the parameters to solver
{
	solver->count = ae->count;
	convertMatrix(ae, solver);
	copyBvec(ae, solver);
	solver->Detrmin = calcDet(solver->A_Mat, solver->count);

}

void convertMatrix(const AllEquations* ae, Solver* solver)//move the matrix pointers to solver
{
	solver->A_Mat = (float**)malloc(solver->count*sizeof(float*));

	for(int i =0; i< (ae->count) ; i++)
	{
			solver->A_Mat[i] = ae->eqArr[i]->A;

	}

}

void copyBvec(const AllEquations* ae, Solver* solver) // copy vector B to solver
{
	solver->B_Vec = (float*)malloc(solver->count*sizeof(float));

	for(int i=0; i< solver->count ; i++)
	{
		solver->B_Vec[i] = ae->eqArr[i]->B;
	}

}
void freeAllEquation(AllEquations* ae) // free all equations
{
	for (int i = 0; i < ae->count; i++)
	{
		free(ae->eqArr[i]->A);
		free(ae->eqArr[i]);
	}

	free(ae->eqArr);
	free(ae);

}













