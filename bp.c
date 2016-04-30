/* 046267 Computer Architecture - Spring 2016 - HW #2 */
/* This file should hold your implementation of the predictor simulator */

#include "bp_api.h"

int BP_init(unsigned btbSize, unsigned historySize,
             bool isGlobalHist, bool isGlobalTable, bool isShare){
	return -1;
}

bool BP_predict(uint32_t pc, uint32_t *dst){
	return false;
}

void BP_setBranchAt(uint32_t pc){
	return;
}

void BP_update(uint32_t pc, uint32_t targetPc, bool taken){
	return;
}
