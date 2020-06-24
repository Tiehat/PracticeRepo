void ProjCalc(float PlanePar[4], float PointCor[3], float ProjCor[3]) {

	float t = -(((PlanePar[0] * PointCor[0]) + (PlanePar[1] * PointCor[1]) + (PlanePar[2] * PointCor[2]) + PlanePar[3])) /
		(PlanePar[0] * PlanePar[0] + PlanePar[1] * PlanePar[1] + PlanePar[2] * PlanePar[2]);

	ProjCor[0] = PlanePar[0] * t + PointCor[0];

	ProjCor[1] = PlanePar[1] * t + PointCor[1];

	ProjCor[2] = PlanePar[2] * t + PointCor[2];

}