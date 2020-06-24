/*

*practice task
*"projection of a point on a plane"
*author Bykov Y.B, 515a
*date 23.06.2020

*/

#include <stdio.h>
#include "source.h"


int main(void)
{
	float PlanePar[4], PointCor[3], ProjCor[3];
	/*
	PlanePar - plane parameters

	PointCor - point coordinates

	ProjCor - projection coordinates

	t - parameter
	*/
	printf("Enter given point coordinates:\n");
	scanf_s("%f%f%f", &PointCor[0], &PointCor[1], &PointCor[2]);
	printf("Enter normal equation of a plane parameters (A,B,C,D):\n");
	scanf_s("%f%f%f%f", &PlanePar[0], &PlanePar[1], &PlanePar[2], &PlanePar[3]);

	ProjCalc(PlanePar, PointCor, ProjCor);

	printf("coor:%.2f %.2f %.2f", ProjCor[0], ProjCor[1], ProjCor[2]);
	return 0;
}
