#pragma once

#include "Const.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MpiFunctions.h"
#include "CudaFunctions.h"
#include "OmpFunctions.h"

point_t* readDataFile(char* fname, int *N, int* K, int* T, float* dT, int* LIMIT, float* QM);
point_t* chooseK(point_t* points, int numberOfPoints, int k);
void interaction(point_t* points, int numberOfPoints, point_t* clusters, int k, float *dt);