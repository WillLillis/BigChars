#pragma once
#include<stdio.h>
#include<stdarg.h>
#include<malloc.h>
#include<assert.h>
#include<stdbool.h>
#include"BigCharsDef.h"

#define	NUM_LAYERS			11
#define CHARS_PER_LAYER		12
#define MAX_CHARS			65535 // completely arbitrary
#define CHARS_PER_BIG_CHAR	132 // 11 lines times 12 chars per line

// lil helper function guy 
inline fmin(size_t a, size_t b)
{
	return a < b ? a : b;
}

// lil helper function guy 
inline fmax(size_t a, size_t b)
{
	return a > b ? a : b;
}

// - Struct to "wrap" the 13 char arrays in in order to return them from the 
// "getbigCharLayer" function, as C doesn't allow returning the arrays
// directly
typedef struct retWrapper {
	char layer[13];
}retWrapper;

/****************************************************************************
* retWrapperAssign
*
* - Assigns the contents of the char array passed in to the retWrapper's 
* character array (layer)
*
* Parameters :
* - struct_in : the retWrapper struct to have the char array copied to
* - input : 13 char array (including null terminator) whose contents will be 
* copied to the struct
*
* Returns :
* - none
****************************************************************************/
void retWrapperAssign(retWrapper* struct_in, const char input[13])
{
	assert(struct_in != NULL);

	for (int i = 0; i < 13; i++)
	{
		struct_in->layer[i] = input[i];
	}
}

/****************************************************************************
* getbigCharLayer
*
* - Returns a retWrapper struct whose layer data member is specified layer
* of the requested big character
* - Terrible, Horrible, No Good, Very Bad nested switch statement...is there
* a better way?
*
* Parameters :
* - in_char : the ASCII character whose "big char" the caller is requesting
*	- (for now) definitions only cover 32 (SPACE) to 126 (~), although it will
*	return an "empty" 13 char array (first character being \0) for chars 0-31,
*	rather than triggering the assert
*	- extended ASCII characters to be added at a later date
* - layer : the requested layer of in_char's "big char" representation
*
* Returns :
* - retWrapper : struct containing the requested char's "big char" layer
****************************************************************************/
retWrapper getbigCharLayer(char in_char, int layer)
{
	assert(in_char >= 0 && in_char <= 126);
	assert(layer >= 0 && layer < NUM_LAYERS);

	retWrapper wrapper;

	switch (in_char) {
	case 32:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_9);

		case 10:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_10);
			break;
		}
		break;
	case 33:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_10);
			break;
		}
		break;
	case 34:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_10);
			break;
		}
		break;
	case 35:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_10);
			break;
		}
		break;
	case 36:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_10);
			break;
		}
		break;
	case 37:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_10);
			break;
		}
		break;
	case 38:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_10);
			break;
		}
		break;
	case 39:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_10);
			break;
		}
		break;
	case 40:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_10);
			break;
		}
		break;
	case 41:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_10);
			break;
		}
		break;
	case 42:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_10);
			break;
		}
		break;
	case 43:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_10);
			break;
		}
		break;
	case 44:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_10);
			break;
		}
		break;
	case 45:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_10);
			break;
		}
		break;
	case 46:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_10);
			break;
		}
		break;
	case 47:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_10);
			break;
		}
		break;
	case 48:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_10);
			break;
		}
		break;
	case 49:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_10);
			break;
		}
		break;
	case 50:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_10);
			break;
		}
		break;
	case 51:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_10);
			break;
		}
		break;
	case 52:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_10);
			break;
		}
		break;
	case 53:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_10);
			break;
		}
		break;
	case 54:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_10);
			break;
		}
		break;
	case 55:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_10);
			break;
		}
		break;
	case 56:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_10);
			break;
		}
		break;
	case 57:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_10);
			break;
		}
		break;
	case 58:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_10);
			break;
		}
		break;
	case 59:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_10);
			break;
		}
		break;
	case 60:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_10);
			break;
		}
		break;
	case 61:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_10);
			break;
		}
		break;
	case 62:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_10);
			break;
		}
		break;
	case 63:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_10);
			break;
		}
		break;
	case 64:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_10);
			break;
		}
		break;
	case 65:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_10);
			break;
		}
		break;
	case 66:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_10);
			break;
		}
		break;
	case 67:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_10);
			break;
		}
		break;
	case 68:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_10);
			break;
		}
		break;
	case 69:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_10);
			break;
		}
		break;
	case 70:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_10);
			break;
		}
		break;
	case 71:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_10);
			break;
		}
		break;
	case 72:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_10);
			break;
		}
		break;
	case 73:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_10);
			break;
		}
		break;
	case 74:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_10);
			break;
		}
		break;
	case 75:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_10);
			break;
		}
		break;
	case 76:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_10);
			break;
		}
		break;
	case 77:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_10);
			break;
		}
		break;
	case 78:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_10);
			break;
		}
		break;
	case 79:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_10);
			break;
		}
		break;
	case 80:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_10);
			break;
		}
		break;
	case 81:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_10);
			break;
		}
		break;
	case 82:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_10);
			break;
		}
		break;
	case 83:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_10);
			break;
		}
		break;
	case 84:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_10);
			break;
		}
		break;
	case 85:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_10);
			break;
		}
		break;
	case 86:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_10);
			break;
		}
		break;
	case 87:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_10);
		}
		break;
	case 88:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_10);
			break;
		}
		break;
	case 89:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_10);
			break;
		}
		break;
	case 90:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_10);
			break;
		}
		break;
	case 91:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_10);
			break;
		}
		break;
	case 92:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_10);
			break;
		}
		break;
	case 93:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_10);
			break;
		}
		break;
	case 94:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_10);
			break;
		}
		break;
	case 95:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_10);
			break;
		}
		break;
	case 96:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_10);
			break;
		}
		break;
	case 97:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_10);
			break;
		}
		break;
	case 98:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_10);
			break;
		}
		break;
	case 99:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_10);
			break;
		}
		break;
	case 100:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_10);
			break;
		}
		break;
	case 101:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_10);
			break;
		}
		break;
	case 102:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_10);
			break;
		}
		break;
	case 103:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_10);
			break;
		}
		break;
	case 104:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_10);
			break;
		}
		break;
	case 105:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_10);
			break;
		}
		break;
	case 106:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_10);
			break;
		}
		break;
	case 107:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_10);
			break;
		}
		break;
	case 108:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_10);
			break;
		}
		break;
	case 109:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_10);
			break;
		}
		break;
	case 110:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_10);
			break;
		}
		break;
	case 111:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_10);
			break;
		}
		break;
	case 112:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_10);
			break;
		}
		break;
	case 113:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_10);
			break;
		}
		break;
	case 114:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_10);
			break;
		}
		break;
	case 115:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_10);
			break;
		}
		break;
	case 116:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_10);
			break;
		}
		break;
	case 117:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_10);
			break;
		}
		break;
	case 118:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_10);
			break;
		}
		break;
	case 119:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_10);
			break;
		}
		break;
	case 120:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_10);
			break;
		}
		break;
	case 121:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_10);
			break;
		}
		break;
	case 122:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_10);
			break;
		}
		break;
	case 123:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_10);
			break;
		}
		break;
	case 124:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_10);
			break;
		}
		break;
	case 125:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_10);
			break;
		}
		break;
	case 126:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_10);
			break;
		}
		break;
	default:
		retWrapperAssign(&wrapper, "\0            ");
		break;
	}

	return wrapper;
}

/****************************************************************************
* printbigCharLayer
*
* - prints the specified layer of the requested "big char" with a call to 
* printf
* - Terrible, Horrible, No Good, Very Bad nested switch statement...is there
* a better way?
*
* Parameters :
* - in_char : the ASCII character whose "big char" the caller is requesting
*	- (for now) definitions only cover 32 (SPACE) to 126 (~), although it will
*	print nothing for chars 0-31, rather than triggering the assert
*	- extended ASCII characters to be added at a later date
* - layer : the requested layer of in_char's "big char" representation
*
* Returns :
* - none
****************************************************************************/
void printbigCharLayer(char in_char, int layer)
{
	assert(in_char >= 0 && in_char <= 126);
	assert(layer >= 0 && layer < NUM_LAYERS);

	switch (in_char) {
	case 32:
		switch (layer) {
		case 0:
			printf("%s", ASCII_32_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_32_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_32_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_32_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_32_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_32_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_32_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_32_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_32_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_32_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_32_LAYER_10);
			break;
		}
		break;
	case 33:
		switch (layer) {
		case 0:
			printf("%s", ASCII_33_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_33_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_33_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_33_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_33_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_33_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_33_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_33_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_33_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_33_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_33_LAYER_10);
			break;
		}
		break;
	case 34:
		switch (layer) {
		case 0:
			printf("%s", ASCII_34_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_34_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_34_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_34_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_34_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_34_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_34_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_34_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_34_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_34_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_34_LAYER_10);
			break;
		}
		break;
	case 35:
		switch (layer) {
		case 0:
			printf("%s", ASCII_35_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_35_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_35_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_35_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_35_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_35_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_35_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_35_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_35_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_35_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_35_LAYER_10);
			break;
		}
		break;
	case 36:
		switch (layer) {
		case 0:
			printf("%s", ASCII_36_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_36_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_36_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_36_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_36_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_36_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_36_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_36_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_36_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_36_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_36_LAYER_10);
			break;
		}
		break;
	case 37:
		switch (layer) {
		case 0:
			printf("%s", ASCII_37_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_37_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_37_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_37_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_37_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_37_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_37_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_37_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_37_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_37_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_37_LAYER_10);
			break;
		}
		break;
	case 38:
		switch (layer) {
		case 0:
			printf("%s", ASCII_38_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_38_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_38_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_38_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_38_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_38_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_38_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_38_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_38_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_38_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_38_LAYER_10);
			break;
		}
		break;
	case 39:
		switch (layer) {
		case 0:
			printf("%s", ASCII_39_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_39_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_39_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_39_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_39_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_39_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_39_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_39_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_39_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_39_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_39_LAYER_10);
			break;
		}
		break;
	case 40:
		switch (layer) {
		case 0:
			printf("%s", ASCII_40_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_40_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_40_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_40_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_40_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_40_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_40_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_40_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_40_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_40_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_40_LAYER_10);
			break;
		}
		break;
	case 41:
		switch (layer) {
		case 0:
			printf("%s", ASCII_41_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_41_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_41_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_41_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_41_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_41_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_41_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_41_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_41_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_41_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_41_LAYER_10);
			break;
		}
		break;
	case 42:
		switch (layer) {
		case 0:
			printf("%s", ASCII_42_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_42_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_42_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_42_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_42_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_42_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_42_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_42_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_42_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_42_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_42_LAYER_10);
			break;
		}
		break;
	case 43:
		switch (layer) {
		case 0:
			printf("%s", ASCII_43_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_43_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_43_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_43_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_43_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_43_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_43_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_43_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_43_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_43_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_43_LAYER_10);
			break;
		}
		break;
	case 44:
		switch (layer) {
		case 0:
			printf("%s", ASCII_44_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_44_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_44_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_44_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_44_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_44_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_44_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_44_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_44_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_44_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_44_LAYER_10);
			break;
		}
		break;
	case 45:
		switch (layer) {
		case 0:
			printf("%s", ASCII_45_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_45_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_45_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_45_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_45_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_45_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_45_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_45_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_45_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_45_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_45_LAYER_10);
			break;
		}
		break;
	case 46:
		switch (layer) {
		case 0:
			printf("%s", ASCII_46_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_46_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_46_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_46_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_46_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_46_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_46_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_46_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_46_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_46_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_46_LAYER_10);
			break;
		}
		break;
	case 47:
		switch (layer) {
		case 0:
			printf("%s", ASCII_47_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_47_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_47_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_47_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_47_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_47_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_47_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_47_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_47_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_47_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_47_LAYER_10);
			break;
		}
		break;
	case 48:
		switch (layer) {
		case 0:
			printf("%s", ASCII_48_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_48_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_48_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_48_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_48_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_48_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_48_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_48_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_48_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_48_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_48_LAYER_10);
			break;
		}
		break;
	case 49:
		switch (layer) {
		case 0:
			printf("%s", ASCII_49_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_49_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_49_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_49_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_49_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_49_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_49_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_49_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_49_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_49_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_49_LAYER_10);
			break;
		}
		break;
	case 50:
		switch (layer) {
		case 0:
			printf("%s", ASCII_50_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_50_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_50_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_50_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_50_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_50_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_50_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_50_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_50_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_50_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_50_LAYER_10);
			break;
		}
		break;
	case 51:
		switch (layer) {
		case 0:
			printf("%s", ASCII_51_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_51_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_51_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_51_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_51_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_51_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_51_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_51_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_51_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_51_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_51_LAYER_10);
			break;
		}
		break;
	case 52:
		switch (layer) {
		case 0:
			printf("%s", ASCII_52_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_52_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_52_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_52_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_52_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_52_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_52_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_52_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_52_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_52_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_52_LAYER_10);
			break;
		}
		break;
	case 53:
		switch (layer) {
		case 0:
			printf("%s", ASCII_53_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_53_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_53_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_53_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_53_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_53_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_53_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_53_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_53_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_53_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_53_LAYER_10);
			break;
		}
		break;
	case 54:
		switch (layer) {
		case 0:
			printf("%s", ASCII_54_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_54_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_54_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_54_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_54_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_54_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_54_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_54_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_54_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_54_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_54_LAYER_10);
			break;
		}
		break;
	case 55:
		switch (layer) {
		case 0:
			printf("%s", ASCII_55_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_55_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_55_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_55_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_55_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_55_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_55_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_55_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_55_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_55_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_55_LAYER_10);
			break;
		}
		break;
	case 56:
		switch (layer) {
		case 0:
			printf("%s", ASCII_56_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_56_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_56_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_56_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_56_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_56_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_56_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_56_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_56_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_56_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_56_LAYER_10);
			break;
		}
		break;
	case 57:
		switch (layer) {
		case 0:
			printf("%s", ASCII_57_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_57_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_57_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_57_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_57_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_57_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_57_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_57_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_57_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_57_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_57_LAYER_10);
			break;
		}
		break;
	case 58:
		switch (layer) {
		case 0:
			printf("%s", ASCII_58_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_58_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_58_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_58_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_58_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_58_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_58_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_58_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_58_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_58_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_58_LAYER_10);
			break;
		}
		break;
	case 59:
		switch (layer) {
		case 0:
			printf("%s", ASCII_59_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_59_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_59_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_59_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_59_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_59_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_59_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_59_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_59_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_59_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_59_LAYER_10);
			break;
		}
		break;
	case 60:
		switch (layer) {
		case 0:
			printf("%s", ASCII_60_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_60_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_60_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_60_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_60_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_60_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_60_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_60_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_60_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_60_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_60_LAYER_10);
			break;
		}
		break;
	case 61:
		switch (layer) {
		case 0:
			printf("%s", ASCII_61_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_61_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_61_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_61_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_61_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_61_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_61_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_61_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_61_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_61_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_61_LAYER_10);
			break;
		}
		break;
	case 62:
		switch (layer) {
		case 0:
			printf("%s", ASCII_62_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_62_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_62_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_62_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_62_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_62_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_62_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_62_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_62_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_62_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_62_LAYER_10);
			break;
		}
		break;
	case 63:
		switch (layer) {
		case 0:
			printf("%s", ASCII_63_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_63_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_63_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_63_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_63_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_63_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_63_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_63_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_63_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_63_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_63_LAYER_10);
			break;
		}
		break;
	case 64:
		switch (layer) {
		case 0:
			printf("%s", ASCII_64_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_64_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_64_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_64_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_64_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_64_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_64_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_64_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_64_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_64_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_64_LAYER_10);
			break;
		}
		break;
	case 65:
		switch (layer) {
		case 0:
			printf("%s", ASCII_65_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_65_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_65_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_65_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_65_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_65_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_65_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_65_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_65_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_65_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_65_LAYER_10);
			break;
		}
		break;
	case 66:
		switch (layer) {
		case 0:
			printf("%s", ASCII_66_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_66_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_66_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_66_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_66_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_66_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_66_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_66_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_66_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_66_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_66_LAYER_10);
			break;
		}
		break;
	case 67:
		switch (layer) {
		case 0:
			printf("%s", ASCII_67_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_67_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_67_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_67_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_67_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_67_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_67_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_67_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_67_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_67_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_67_LAYER_10);
			break;
		}
		break;
	case 68:
		switch (layer) {
		case 0:
			printf("%s", ASCII_68_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_68_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_68_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_68_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_68_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_68_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_68_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_68_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_68_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_68_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_68_LAYER_10);
			break;
		}
		break;
	case 69:
		switch (layer) {
		case 0:
			printf("%s", ASCII_69_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_69_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_69_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_69_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_69_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_69_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_69_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_69_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_69_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_69_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_69_LAYER_10);
			break;
		}
		break;
	case 70:
		switch (layer) {
		case 0:
			printf("%s", ASCII_70_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_70_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_70_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_70_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_70_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_70_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_70_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_70_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_70_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_70_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_70_LAYER_10);
			break;
		}
		break;
	case 71:
		switch (layer) {
		case 0:
			printf("%s", ASCII_71_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_71_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_71_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_71_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_71_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_71_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_71_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_71_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_71_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_71_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_71_LAYER_10);
			break;
		}
		break;
	case 72:
		switch (layer) {
		case 0:
			printf("%s", ASCII_72_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_72_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_72_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_72_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_72_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_72_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_72_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_72_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_72_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_72_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_72_LAYER_10);
			break;
		}
		break;
	case 73:
		switch (layer) {
		case 0:
			printf("%s", ASCII_73_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_73_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_73_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_73_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_73_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_73_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_73_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_73_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_73_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_73_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_73_LAYER_10);
			break;
		}
		break;
	case 74:
		switch (layer) {
		case 0:
			printf("%s", ASCII_74_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_74_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_74_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_74_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_74_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_74_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_74_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_74_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_74_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_74_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_74_LAYER_10);
			break;
		}
		break;
	case 75:
		switch (layer) {
		case 0:
			printf("%s", ASCII_75_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_75_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_75_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_75_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_75_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_75_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_75_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_75_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_75_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_75_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_75_LAYER_10);
			break;
		}
		break;
	case 76:
		switch (layer) {
		case 0:
			printf("%s", ASCII_76_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_76_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_76_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_76_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_76_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_76_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_76_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_76_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_76_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_76_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_76_LAYER_10);
			break;
		}
		break;
	case 77:
		switch (layer) {
		case 0:
			printf("%s", ASCII_77_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_77_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_77_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_77_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_77_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_77_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_77_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_77_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_77_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_77_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_77_LAYER_10);
			break;
		}
		break;
	case 78:
		switch (layer) {
		case 0:
			printf("%s", ASCII_78_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_78_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_78_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_78_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_78_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_78_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_78_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_78_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_78_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_78_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_78_LAYER_10);
			break;
		}
		break;
	case 79:
		switch (layer) {
		case 0:
			printf("%s", ASCII_79_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_79_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_79_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_79_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_79_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_79_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_79_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_79_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_79_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_79_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_79_LAYER_10);
			break;
		}
		break;
	case 80:
		switch (layer) {
		case 0:
			printf("%s", ASCII_80_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_80_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_80_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_80_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_80_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_80_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_80_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_80_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_80_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_80_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_80_LAYER_10);
			break;
		}
		break;
	case 81:
		switch (layer) {
		case 0:
			printf("%s", ASCII_81_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_81_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_81_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_81_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_81_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_81_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_81_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_81_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_81_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_81_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_81_LAYER_10);
			break;
		}
		break;
	case 82:
		switch (layer) {
		case 0:
			printf("%s", ASCII_82_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_82_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_82_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_82_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_82_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_82_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_82_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_82_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_82_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_82_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_82_LAYER_10);
			break;
		}
		break;
	case 83:
		switch (layer) {
		case 0:
			printf("%s", ASCII_83_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_83_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_83_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_83_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_83_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_83_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_83_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_83_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_83_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_83_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_83_LAYER_10);
			break;
		}
		break;
	case 84:
		switch (layer) {
		case 0:
			printf("%s", ASCII_84_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_84_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_84_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_84_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_84_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_84_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_84_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_84_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_84_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_84_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_84_LAYER_10);
			break;
		}
		break;
	case 85:
		switch (layer) {
		case 0:
			printf("%s", ASCII_85_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_85_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_85_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_85_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_85_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_85_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_85_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_85_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_85_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_85_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_85_LAYER_10);
			break;
		}
		break;
	case 86:
		switch (layer) {
		case 0:
			printf("%s", ASCII_86_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_86_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_86_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_86_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_86_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_86_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_86_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_86_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_86_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_86_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_86_LAYER_10);
			break;
		}
		break;
	case 87:
		switch (layer) {
		case 0:
			printf("%s", ASCII_87_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_87_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_87_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_87_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_87_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_87_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_87_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_87_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_87_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_87_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_87_LAYER_10);
			break;
		}
		break;
	case 88:
		switch (layer) {
		case 0:
			printf("%s", ASCII_88_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_88_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_88_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_88_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_88_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_88_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_88_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_88_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_88_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_88_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_88_LAYER_10);
			break;
		}
		break;
	case 89:
		switch (layer) {
		case 0:
			printf("%s", ASCII_89_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_89_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_89_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_89_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_89_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_89_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_89_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_89_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_89_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_89_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_89_LAYER_10);
			break;
		}
		break;
	case 90:
		switch (layer) {
		case 0:
			printf("%s", ASCII_90_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_90_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_90_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_90_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_90_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_90_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_90_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_90_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_90_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_90_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_90_LAYER_10);
			break;
		}
		break;
	case 91:
		switch (layer) {
		case 0:
			printf("%s", ASCII_91_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_91_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_91_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_91_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_91_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_91_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_91_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_91_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_91_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_91_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_91_LAYER_10);
			break;
		}
		break;
	case 92:
		switch (layer) {
		case 0:
			printf("%s", ASCII_92_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_92_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_92_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_92_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_92_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_92_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_92_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_92_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_92_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_92_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_92_LAYER_10);
			break;
		}
		break;
	case 93:
		switch (layer) {
		case 0:
			printf("%s", ASCII_93_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_93_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_93_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_93_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_93_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_93_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_93_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_93_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_93_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_93_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_93_LAYER_10);
			break;
		}
		break;
	case 94:
		switch (layer) {
		case 0:
			printf("%s", ASCII_94_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_94_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_94_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_94_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_94_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_94_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_94_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_94_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_94_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_94_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_94_LAYER_10);
			break;
		}
		break;
	case 95:
		switch (layer) {
		case 0:
			printf("%s", ASCII_95_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_95_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_95_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_95_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_95_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_95_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_95_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_95_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_95_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_95_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_95_LAYER_10);
			break;
		}
		break;
	case 96:
		switch (layer) {
		case 0:
			printf("%s", ASCII_96_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_96_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_96_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_96_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_96_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_96_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_96_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_96_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_96_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_96_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_96_LAYER_10);
			break;
		}
		break;
	case 97:
		switch (layer) {
		case 0:
			printf("%s", ASCII_97_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_97_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_97_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_97_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_97_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_97_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_97_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_97_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_97_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_97_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_97_LAYER_10);
			break;
		}
		break;
	case 98:
		switch (layer) {
		case 0:
			printf("%s", ASCII_98_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_98_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_98_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_98_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_98_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_98_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_98_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_98_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_98_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_98_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_98_LAYER_10);
			break;
		}
		break;
	case 99:
		switch (layer) {
		case 0:
			printf("%s", ASCII_99_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_99_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_99_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_99_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_99_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_99_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_99_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_99_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_99_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_99_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_99_LAYER_10);
			break;
		}
		break;
	case 100:
		switch (layer) {
		case 0:
			printf("%s", ASCII_100_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_100_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_100_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_100_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_100_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_100_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_100_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_100_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_100_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_100_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_100_LAYER_10);
			break;
		}
		break;
	case 101:
		switch (layer) {
		case 0:
			printf("%s", ASCII_101_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_101_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_101_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_101_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_101_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_101_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_101_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_101_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_101_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_101_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_101_LAYER_10);
			break;
		}
		break;
	case 102:
		switch (layer) {
		case 0:
			printf("%s", ASCII_102_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_102_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_102_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_102_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_102_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_102_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_102_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_102_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_102_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_102_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_102_LAYER_10);
			break;
		}
		break;
	case 103:
		switch (layer) {
		case 0:
			printf("%s", ASCII_103_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_103_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_103_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_103_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_103_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_103_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_103_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_103_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_103_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_103_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_103_LAYER_10);
			break;
		}
		break;
	case 104:
		switch (layer) {
		case 0:
			printf("%s", ASCII_104_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_104_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_104_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_104_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_104_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_104_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_104_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_104_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_104_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_104_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_104_LAYER_10);
			break;
		}
		break;
	case 105:
		switch (layer) {
		case 0:
			printf("%s", ASCII_105_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_105_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_105_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_105_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_105_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_105_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_105_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_105_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_105_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_105_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_105_LAYER_10);
			break;
		}
		break;
	case 106:
		switch (layer) {
		case 0:
			printf("%s", ASCII_106_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_106_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_106_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_106_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_106_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_106_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_106_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_106_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_106_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_106_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_106_LAYER_10);
			break;
		}
		break;
	case 107:
		switch (layer) {
		case 0:
			printf("%s", ASCII_107_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_107_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_107_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_107_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_107_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_107_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_107_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_107_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_107_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_107_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_107_LAYER_10);
			break;
		}
		break;
	case 108:
		switch (layer) {
		case 0:
			printf("%s", ASCII_108_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_108_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_108_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_108_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_108_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_108_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_108_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_108_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_108_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_108_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_108_LAYER_10);
			break;
		}
		break;
	case 109:
		switch (layer) {
		case 0:
			printf("%s", ASCII_109_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_109_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_109_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_109_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_109_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_109_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_109_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_109_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_109_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_109_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_109_LAYER_10);
			break;
		}
		break;
	case 110:
		switch (layer) {
		case 0:
			printf("%s", ASCII_110_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_110_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_110_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_110_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_110_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_110_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_110_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_110_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_110_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_110_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_110_LAYER_10);
			break;
		}
		break;
	case 111:
		switch (layer) {
		case 0:
			printf("%s", ASCII_111_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_111_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_111_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_111_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_111_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_111_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_111_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_111_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_111_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_111_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_111_LAYER_10);
			break;
		}
		break;
	case 112:
		switch (layer) {
		case 0:
			printf("%s", ASCII_112_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_112_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_112_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_112_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_112_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_112_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_112_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_112_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_112_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_112_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_112_LAYER_10);
			break;
		}
		break;
	case 113:
		switch (layer) {
		case 0:
			printf("%s", ASCII_113_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_113_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_113_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_113_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_113_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_113_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_113_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_113_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_113_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_113_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_113_LAYER_10);
			break;
		}
		break;
	case 114:
		switch (layer) {
		case 0:
			printf("%s", ASCII_114_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_114_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_114_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_114_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_114_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_114_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_114_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_114_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_114_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_114_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_114_LAYER_10);
			break;
		}
		break;
	case 115:
		switch (layer) {
		case 0:
			printf("%s", ASCII_115_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_115_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_115_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_115_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_115_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_115_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_115_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_115_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_115_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_115_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_115_LAYER_10);
			break;
		}
		break;
	case 116:
		switch (layer) {
		case 0:
			printf("%s", ASCII_116_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_116_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_116_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_116_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_116_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_116_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_116_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_116_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_116_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_116_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_116_LAYER_10);
			break;
		}
		break;
	case 117:
		switch (layer) {
		case 0:
			printf("%s", ASCII_117_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_117_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_117_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_117_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_117_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_117_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_117_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_117_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_117_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_117_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_117_LAYER_10);
			break;
		}
		break;
	case 118:
		switch (layer) {
		case 0:
			printf("%s", ASCII_118_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_118_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_118_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_118_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_118_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_118_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_118_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_118_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_118_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_118_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_118_LAYER_10);
			break;
		}
		break;
	case 119:
		switch (layer) {
		case 0:
			printf("%s", ASCII_119_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_119_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_119_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_119_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_119_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_119_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_119_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_119_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_119_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_119_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_119_LAYER_10);
			break;
		}
		break;
	case 120:
		switch (layer) {
		case 0:
			printf("%s", ASCII_120_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_120_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_120_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_120_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_120_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_120_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_120_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_120_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_120_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_120_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_120_LAYER_10);
			break;
		}
		break;
	case 121:
		switch (layer) {
		case 0:
			printf("%s", ASCII_121_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_121_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_121_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_121_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_121_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_121_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_121_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_121_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_121_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_121_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_121_LAYER_10);
			break;
		}
		break;
	case 122:
		switch (layer) {
		case 0:
			printf("%s", ASCII_122_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_122_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_122_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_122_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_122_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_122_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_122_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_122_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_122_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_122_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_122_LAYER_10);
			break;
		}
		break;
	case 123:
		switch (layer) {
		case 0:
			printf("%s", ASCII_123_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_123_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_123_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_123_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_123_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_123_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_123_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_123_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_123_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_123_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_123_LAYER_10);
			break;
		}
		break;
	case 124:
		switch (layer) {
		case 0:
			printf("%s", ASCII_124_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_124_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_124_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_124_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_124_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_124_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_124_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_124_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_124_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_124_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_124_LAYER_10);
			break;
		}
		break;
	case 125:
		switch (layer) {
		case 0:
			printf("%s", ASCII_125_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_125_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_125_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_125_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_125_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_125_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_125_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_125_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_125_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_125_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_125_LAYER_10);
			break;
		}
		break;
	case 126:
		switch (layer) {
		case 0:
			printf("%s", ASCII_126_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_126_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_126_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_126_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_126_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_126_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_126_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_126_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_126_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_126_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_126_LAYER_10);
			break;
		}
	default: // default is to print nothing
		break;

		// add cases for extended ASCII chars?
	}
}

/****************************************************************************
* printbigCharLine
*
* - prints the the "big char" representation of the buffer passed in, from 
* the address "buffer" to address buffer + (offset - 1)
* - should only be called to print a single line of big chars
* 
* - Should I add error checking based off of the return value of the printf
* call in printbigCharLayer?
*
* Parameters :
* - buffer : the char buffer of normal chars to be translated to "big chars",
* buffer specifies the starting address of the buffer
* - offset : specifies how far to go past the buffer address. As each char is
* one byte, this also specifies how many chars we're printing
*
* Returns :
* - none
****************************************************************************/
void printbigCharLine(char* buffer, size_t offset)
{
	assert(buffer != NULL);

	for (int layer = 0; layer < NUM_LAYERS; layer++) // for every layer...
	{
		for (unsigned long curr_char = 0; curr_char < offset; curr_char++) // print the corresponding big char "slice" of each char in the buffer
		{
			printbigCharLayer(buffer[curr_char], layer);
		}
		printf("\n");
	}
}

/****************************************************************************
* fprintbigCharLine
*
* - prints the the "big char" representation of the buffer passed in to the
* specified FILE stream, from the address "buffer" to address 
* buffer + (offset - 1)
* - should only be called to print a single line of big chars
* 
* - Should I add error checking based off of the return value of fprintf?
*
* Parameters :
* - stream : the FILE stream to print the big chars to
* - buffer : the char buffer of normal chars to be translated to "big chars",
* buffer specifies the starting address of the buffer
* - offset : specifies how far to go past the buffer address. As each char is
* one byte, this also specifies how many chars we're printing
*
* Returns :
* - none
****************************************************************************/
void fprintbigCharLine(FILE* stream, char* buffer, size_t offset)
{
	assert(stream != NULL);
	assert(buffer != NULL);

	for (int layer = 0; layer < NUM_LAYERS; layer++) // for every layer...
	{
		for (unsigned long curr_char = 0; curr_char < offset; curr_char++)
		{
			fprintf(stream, "%s", getbigCharLayer(buffer[curr_char], layer).layer); // print the corresponding big char "slice" of each char in the buffer
		}
		fprintf(stream, "\n");
	}
}

/****************************************************************************
* snprintbigCharLine
*
* - prints the the "big char" representation of the buffer passed in to the
* specified buffer. 
* - function will determine if all of the big chars can be fit in dest_buff,
* based off of dest_buff_size
*	- If there is insufficient space, the function will print as many chars 
*	as it can while avoiding partially printing a character 
* - should only be called to print a single line of big chars to a buffer
*
* Parameters :
* - dest_buff : pointer to the address where big chars will begin to be stored 
* - dest_buff_size : the size of dest_buff in bytes
* - src_buff : the starting address of normal chars from which the routine will
* translate big chars from to store in dest_buff
* - offset : specifies how far to go past the src_buff address. As each char is
* one byte, this also specifies how many chars we're printing
* - trailing_newline : specifies whether a newline character should be placed 
* at the end of the buffer (after the last layer of the last big char)
* - overrun_flag : boolean passed in by reference, indicates to the caller if
* dest_buff had insufficient space to store the big char representation of the 
* supplied src_buff inside of dest_buff
*
* Returns :
* - size_t : returns the number of regular chars copied to dest_buff
****************************************************************************/
size_t snprintbigCharLine(char* dest_buff, size_t dest_buff_size, char* src_buff, size_t offset, bool trailing_newline, bool* overrun_flag)
{
	assert(dest_buff != NULL);
	assert(src_buff != NULL);

	retWrapper layer_temp;
	size_t dest_buff_index = 0;

	if (bigcharsperbuffer(dest_buff_size) < offset - 1) // if there's not enough space in the destination buffer, just print what characters we can
	{
		size_t temp_offset = bigcharsperbuffer(dest_buff_size);
		if (temp_offset == 0)
		{
			offset = temp_offset;
		}
		else
		{
			offset = temp_offset - 1; 
		}
		assert(overrun_flag != NULL);
		*overrun_flag = true; // if we don't have enough space, better tell the caller
	}

	for (int curr_layer = 0; curr_layer < NUM_LAYERS; curr_layer++) // for each layer in the big char line
	{
		for (size_t curr_offset = 0; curr_offset < offset; curr_offset++) // for all of the characters in the source buffer
		{
			layer_temp = getbigCharLayer(src_buff[curr_offset], curr_layer); // grab the current char's current layer
			for (unsigned int i = 0; i < CHARS_PER_LAYER; i++) // assign the characters one by one to the destination buffer
			{
				dest_buff[dest_buff_index++] = layer_temp.layer[i]; // should I make this a function call? Seems reusable
			}
		}
		if ((curr_layer < NUM_LAYERS - 1) || trailing_newline) // if it's not the last layer, or if it is and we want a newline at the end
		{
			dest_buff[dest_buff_index++] = '\n';
		}
	}
	return dest_buff_index; // number of regular chars copied to dest_buff
}

/****************************************************************************
* FmtStrtoNumChars
*
* - takes in a printf/fprintf-style format string (and its variable number of 
* optional arguments) and returns the number of bytes required to store the 
* resulting string, had it been printed (including the null terminator)
* 
* Could play around a bit with the common and max buff_size's to optimize things
*
* Parameters :
* - format : printf-style const char format string
* - args : va_list giving the routine access to the variable optional arguments
* specified by the contents of the format string
*
* Returns :
* - size_t : the number of number of bytes required to store the 
* resulting string, had it been printed (including the null terminator)
****************************************************************************/
size_t FmtStrtoNumChars(const char* format, va_list args)
{
	assert(format != NULL); // is this actually needed/ helpful?

	const size_t common_buff_size = 256;
	const size_t max_buff_size = MAX_CHARS + 1; // make this way bigger?
	va_list argptr = args; // need an extra copy of args, since using a va_list modifies it

	char* buffer = (char*)malloc(common_buff_size); 
	assert(buffer != NULL);
	size_t actual_buff_size = vsnprintf(buffer, common_buff_size, format, args);
	free(buffer);

	if (actual_buff_size >= 0 && actual_buff_size <= common_buff_size) // if it fits within the common_buff_size...
	{
		return actual_buff_size + 1; // + 1 for null terminator
	}
	else // ...otherwise try going bigger
	{
		buffer = (char*)malloc(max_buff_size); // no need to do * sizeof(char) because that's just one byte
		assert(buffer != NULL);
		actual_buff_size = vsnprintf(buffer, max_buff_size, format, argptr);
		free(buffer);

		if (actual_buff_size >= 0) // might truncate, but that's ok
		{
			return actual_buff_size + 1; // + 1 for null terminator
		}
		else
		{
			return 0; // encoding error returned from snprintf, we just won't print in that case
		}
	}
}

/****************************************************************************
* bigcharsperbuffer
*
* - takes in a size (in bytes) and returns the number of big chars that could 
* be stored in that space, 
* - assumes there's a trailing newline or null terminator character at the 
* end of the last layer
* - only correct if passed in a single line buffer (to be used by printline 
* functions only)
*
* Parameters :
* - buff_size : the size in question
*
* Returns :
* - unsigned long : the number of big chars (in a single big char line) that 
* could be stored in a buffer of buff_size size
****************************************************************************/
unsigned long bigcharsperbuffer(size_t buff_size)
{
	if (buff_size < 11) // edge case, seems best to handle it explicitly
	{
		return 0;
	}
	// think this is correct now, but not 100% certain 
	buff_size -= (size_t)11; // take newline characters at the end of each layer into account
	
	return buff_size / CHARS_PER_BIG_CHAR; // then see how many big chars fit in the remaining space
}

/****************************************************************************
* buff_to_big_buff_size
*
* - takes in a buffer of regular chars, and retuns the required size for a 
* buffer to store the big char representation of the original buffer
* - only checks through first MAX_CHARS chars of the source buffer, in order 
* to mitigate against some stupid inputs without null terminators
* 
*- what are some other security measures that could be taken here?
*
* Parameters :
* - src_buff : address of the input buffer of regular chars
*
* Returns :
* - size_t : size in bytes for a buffer to store the big char representation 
* of the original buffer
****************************************************************************/
size_t buff_to_big_buff_size(const char* src_buff)
{
	assert(src_buff != NULL);

	unsigned long curr_char = 0;
	unsigned long num_lines = 1;
	size_t accum = 0;

	while (src_buff[curr_char] != '\0' && curr_char < MAX_CHARS)
	{
		if (src_buff[curr_char] == '\n') // newline chars need to be treated a little differently...
		{
			num_lines++;
		}
		else // ...otherwise we'll assume it's a printable character, and thus needs CHARS_PER_BIG_CHAR bytes of space
		{
			accum += CHARS_PER_BIG_CHAR;
		}
		curr_char++;
	}

	accum += (size_t)num_lines * (size_t)NUM_LAYERS; // a big char newline means 11 new line characters (one for each layer)
	
	return accum; 
}

/****************************************************************************
* format_str_to_buff_size
*
* - takes in a printf/fprintf-style format string (and its variable number of 
* optional arguments) and returns the number of bytes required to store the 
* big char representation of the resulting string, had it been printed 
* (including the null terminator)
*
* Parameters :
* - format : printf style format string
* - ... (additional arguments) : variable number of optional arguments to be 
* passed in depending on the contents of format
*
* Returns :
* - size_t : size in bytes for a buffer to store the big char representation
* of the string specified by format and its zero or more optional arguments
****************************************************************************/
size_t format_str_to_buff_size(const char* format, ...)
{
	assert(format != NULL); // is this actually needed/ helpful?

	va_list argptr;

	va_start(argptr, format);
	size_t temp_buff_size = FmtStrtoNumChars(format, argptr);
	va_end(argptr);
	if (temp_buff_size == 0) // encoding error, we won't print
	{
		return 0;
	}

	char* temp_buff = (char*)malloc(temp_buff_size);
	assert(temp_buff != NULL);

	va_start(argptr, format);
	vsnprintf(temp_buff, temp_buff_size, format, argptr);
	va_end(argptr);

	size_t big_buff_size = buff_to_big_buff_size(temp_buff);

	if (temp_buff != NULL) // is this needed since we already assert'd above?
	{
		free(temp_buff);
	}

	return big_buff_size;
}

/****************************************************************************
* bigprintf
*
* - takes in a printf/fprintf-style format string (and its variable number of
* optional arguments) and prints the big char representation of the resulting
* string
* 
* - Do we want to add automatic window resizing based off of the width of the
* printed big chars?
*
* Parameters
* - format : printf style format string
* - ... (additional arguments) : variable number of optional arguments to be
* passed in depending on the contents of format
*
* Returns
* - int : matching the style of normal printf, this will return the number of 
* big chars printed
*	- in the case of an error, a negative number will be returned
****************************************************************************/
int bigprintf(const char* format, ...)
{
	assert(format != NULL); // is this actually needed/ helpful?

	size_t offset = 0;
	char stop_char = 2; // 2 is Start of text (STX) character, starting value doesn't really matter, just can't be '\0'
	va_list argptr; 

	va_start(argptr, format); // argptr should now point to first unnamed argument (and not format?)
	size_t buff_size = FmtStrtoNumChars(format, argptr);
	va_end(argptr);
	if (buff_size == 0) // encoding error, we won't print
	{
		return -1;
	}
	char* buffer = (char*)malloc(buff_size); // no need to do * sizeof(char) because that's just one byte
	assert(buffer != NULL);
	char* work_buffer = buffer; // want to preserver buffer's original address so we can free it later, work_buffer will be incremented as we iterate through the buffer

	va_start(argptr, format); // do we need to restart the argument list thingy?
	vsnprintf(buffer, buff_size, format, argptr); // might want to eliminate this call but we'll optimize later
	// could eliminate call by having function pass out pointer to buffer by reference, return size of it
	// we can optimize later
	va_end(argptr);

	// iterate through buffer until a newline or null terminator char is found, 
	// pass the starting point and the number of chars to go out past that to printbigCharLine
	while (stop_char != '\0')
	{	
		if (work_buffer[offset] == '\n' || work_buffer[offset] == '\0')
		{
			stop_char = work_buffer[offset];
			printbigCharLine(work_buffer, offset); // print all the chars from current char pointed to by buffer to buffer[offset]
			work_buffer += offset + (size_t)1; // set the starting point for the next line, we won't access this address if we reached the null terminator so incrementing this too much by 1 shouldn't be an issue
			offset = 0;
			continue;
		}
		offset++;
	}

	if (buffer != NULL) // still checking even tho we assert'd up above
	{
		free(buffer);
	}
	
	return (int)(buff_size - 1); // printed everything but the null terminator
}

/****************************************************************************
* bigfprintf
*
* - takes in a printf/fprintf-style format string (and its variable number of
* optional arguments) and prints the big char representation of the resulting
* string to the specified FILE stream
*
* - Do we want to add error checking based off of the calls to fprintf in 
* fprintbigCharLine?
*
* Parameters
* - stream : the FILE stream to print the big chars to
* - format : printf style format string
* - ... (additional arguments) : variable number of optional arguments to be
* passed in depending on the contents of format
*
* Returns
* - int : matching the style of normal fprintf, this will return the number of
* big chars printed
*	- in the case of an error, a negative number will be returned
****************************************************************************/
int bigfprintf(FILE* stream, const char* format, ...)
{
	assert(stream != NULL);
	assert(format != NULL); // is this actually needed/ helpful?
	
	size_t offset = 0;
	char stop_char = 2; // 2 is Start of text (STX) character, starting value doesn't really matter, just can't be '\0'
	va_list argptr;

	va_start(argptr, format); // argptr should now point to first unnamed argument (and not format?)
	size_t buff_size = FmtStrtoNumChars(format, argptr);
	va_end(argptr);
	if (buff_size == 0) // encoding error, we won't print
	{
		return -1;
	}
	char* buffer = (char*)malloc(buff_size); // no need to do * sizeof(char) because that's just one byte
	assert(buffer != NULL);
	char* work_buffer = buffer; // want to preserver buffer's original address so we can free it later, work_buffer will be incremented as we iterate through the buffer

	va_start(argptr, format); // do we need to restart the argument list thingy?
	vsnprintf(buffer, buff_size, format, argptr); // might want to eliminate this call but we'll optimize later
	// could eliminate call by having function pass out pointer to buffer by reference, return size of it
	// we can optimize later
	va_end(argptr);

	// iterate through buffer until a newline or null terminator char is found, 
	// pass the starting point and the number of chars to go out past that to printbigCharLine
	while (stop_char != '\0')
	{
		if (work_buffer[offset] == '\n' || work_buffer[offset] == '\0')
		{
			stop_char = work_buffer[offset];
			fprintbigCharLine(stream, work_buffer, offset);
			work_buffer += offset + (size_t)1; // set the starting point for the next line, we won't access this address if we reached the null terminator so incrementing this too much by 1 shouldn't be an issue
			offset = 0;
			continue;
		}
		offset++;
	}

	if (buffer != NULL) // still checking even tho we assert'd up above
	{
		free(buffer);
	}

	return (int)(buff_size - 1); // printed everything but the null terminator
}

/****************************************************************************
* bigsnprintf
*
* - takes in a printf/fprintf-style format string (and its variable number of
* optional arguments) and prints the big char representation of the resulting
* string to the specified buffer, within the size constraints given by 
* dest_buff_size
*
* - Do we want to add error checking based off of the calls to fprintf in
* snprintbigCharLine?
*
* Parameters
* - dest_buff : address of the start of the buffer to print the big chars to
* - dest_buff_size : size in bytes of dest_buff
* - format : printf style format string
* - ... (additional arguments) : variable number of optional arguments to be
* passed in depending on the contents of format
*
* Returns
* - int : matching the style of normal snprintf, this will return the number of
* big chars printed
*	- in the case of an error, a negative number will be returned
****************************************************************************/
int bigsnprintf(char* dest_buff, size_t dest_buff_size, const char* format, ...)
{
	assert(dest_buff != NULL);
	assert(format != NULL); // is this actually needed/ helpful?

	size_t offset = 0;
	char stop_char = (char)2; // 2 is Start of text (STX) character, starting value doesn't really matter, just can't be '\0'
	size_t chars_placed;
	int total_chars = 0;
	va_list argptr;
	bool overrun_flag = false;
	
	va_start(argptr, format); // argptr should now point to first unnamed argument (and not format?)
	size_t buff_size = FmtStrtoNumChars(format, argptr); 
	va_end(argptr);
	if (buff_size == 0) // encoding error, we won't print
	{
		return -1;
	}

	char* buffer = (char*)malloc(buff_size); // no need to do * sizeof(char) because that's just one byte
	assert(buffer != NULL);
	char* work_buffer = buffer; // want to preserver buffer's original address so we can free it later, work_buffer will be incremented as we iterate through the buffer

	va_start(argptr, format); // do we need to restart the argument list thingy?
	vsnprintf(buffer, buff_size, format, argptr); // might want to eliminate this call but we'll optimize later
	// could eliminate call by having function pass out pointer to buffer by reference, return size of it
	// we can optimize later
	va_end(argptr);

	// iterate through buffer until a newline or null terminator char is found, 
	// pass the starting point and the number of chars to go out past that to printbigCharLine
	while (stop_char != '\0' && !overrun_flag)
	{
		if (work_buffer[offset] == '\n' || work_buffer[offset] == '\0')
		{
			// clean this up 
			stop_char = work_buffer[offset];
			chars_placed = snprintbigCharLine(dest_buff, dest_buff_size, work_buffer, offset, stop_char == '\n', &overrun_flag);
			work_buffer += offset + (size_t)1; // set the starting point for the next line, we won't access this address if we reached the null terminator so incrementing this too much by 1 shouldn't be an issue
			dest_buff += chars_placed; // have to update where we are in dest_buff 
			dest_buff_size -= chars_placed; // as well as how much space is still in there...
			if (stop_char == '\n')
			{
				total_chars += (chars_placed - 11) / CHARS_PER_BIG_CHAR; // not counting the newline chars placed at the end of the big char line
				total_chars++; // still need to count the big newline character that was printed
			}
			else
			{
				total_chars += (chars_placed - 10) / CHARS_PER_BIG_CHAR; // same thing, but there isn't a newline at the end, space left for null terminator
			}
			offset = 0;
			continue;
		}
		offset++;
	}

	*dest_buff = '\0'; // place null terminator at next available spot

	if (buffer != NULL) // still checking even tho we assert'd up above
	{
		free(buffer);
	}

	return total_chars; // printed everything but the null terminator
}
