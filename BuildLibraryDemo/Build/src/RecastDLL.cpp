#include "RecastDLL.h"
#include<math.h>

int TestAPI()
{
	return 1;
}

float CalcDistance(float fSrcEntityX, float fSrcEntityY, float fDstEntityX, float fDstEntityY)
{
	return sqrt((fSrcEntityX - fDstEntityX) * (fSrcEntityX - fDstEntityX) + (fSrcEntityY - fDstEntityY) * (fSrcEntityY - fDstEntityY));
}