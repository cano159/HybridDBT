/*
 * insertions.h
 *
 *  Created on: 13 janv. 2017
 *      Author: simon
 */

#ifndef INCLUDES_DBT_INSERTIONS_H_
#define INCLUDES_DBT_INSERTIONS_H_

#include <types.h>

//Values for unresolved jumps
#define UNRESOLVED_JUMP_RELATIVE 1
#define UNRESOLVED_JUMP_ABSOLUTE 0


extern int insertionsArray[65536];
extern int unresolvedJumpsArray[65536];
extern int unresolvedJumpsTypeArray[65536];
extern int unresolvedJumpsSourceArray[65536];

void addInsertions(uint32 blockStartAddressInSources, uint32 blockStartAddressInVLIW, uint32* insertionsToInsert, uint32 numberInsertions);
unsigned int solveUnresolvedJump(unsigned int initialDestination);
unsigned int insertCodeForInsertions(ac_int<128, false> *binaries, int start, unsigned int startAddress);
void initializeInsertionsMemory(int sizeSourceCode);

#endif /* INCLUDES_DBT_INSERTIONS_H_ */