// eval.h

#ifndef EVAL_H
#define EVAL_H

const int PawnIsolated = -10;
const int QueenOpenFile = 5;
const int QueenSemiOpenFile = 3;
const int RookOpenFile = 10;
const int RookSemiOpenFile = 5;

// Lyudmil Piece Square Tables
const int Pawn[64] =
{
	0,   0,   0,   0,   0,   0,   0,   0,
	-5,  -2,   4,   5,   5,   4,  -2,  -5,
	-4,  -2,   5,   7,   7,   5,  -2,  -4,
	-2,  -1,   9,  13,  13,   9,  -1,  -2,
	2,   4,  13,  21,  21,  13,   4,   2,
	10,  21,  25,  29,  29,  25,  21,  10,
	1,   2,   5,   9,   9,   5,   2,   1,             // 7th Rank
	0,   0,   0,   0,   0,   0,   0,   0
};

const int Knight[64] =
{
	-31, -23, -20, -16, -16, -20, -23, -31,
	-23, -16, -12,  -8,  -8, -12, -16, -23,
	-8,  -4,   0,   8,   8,   0,  -4,  -8,
	-4,   8,  12,  16,  16,  12,   8,  -4,
	8,  16,  20,  23,  23,  20,  16,   8,
	23,  27,  31,  35,  35,  31,  27,  23,
	4,   8,  12,  16,  16,  12,   8,   4,
	4,   4,   4,   4,   4,   4,   4,   4,
};

const int Bishop[64] =
{
	-31, -23, -20, -16, -16, -20, -23, -31,
	-23, -16, -12,  -8,  -8, -12, -16, -23,
	-8,  -4,   0,   8,   8,   0,  -4,  -8,
	-4,   8,  12,  16,  16,  12,   8,  -4,
	8,  16,  20,  23,  23,  20,  16,   8,
	23,  27,  31,  35,  35,  31,  27,  23,
	4,   8,  12,  16,  16,  12,   8,   4,
	4,   4,   4,   4,   4,   4,   4,   4,
};

const int Rook[64] =
{
	-10,  -8,  -6,  -4,  -4,  -6,  -8, -10,
	-8,  -6,  -4,  -2,  -2,  -4,  -6,  -8,
	-4,  -2,   0,   4,   4,   0,  -2,  -4,
	-2,   2,   4,   8,   8,   4,   2,  -2,
	2,   4,   8,  12,  12,   8,   4,   2,
	4,   8,   12, 16,  16,  12,   8,   4,
	20,  21,   23, 23,  23,  23,  21,  20,
	18,  18,   20, 20,  20,  20,  18,  18,
};

const int Queen[64] =
{
	-23, -20, -16, -12, -12, -16, -20, -23,
	-18, -14, -12,  -8,  -8, -12, -14, -18,
	-16,  -8,   0,   8,   8,   0,  -8, -16,
	-8,   0,  12,  16,  16,  12,   0,  -8,
	4,  12,  16,  23,  23,  16,  12,   4,
	16,  23,  27,  31,  31,  27,  23,  16,
	4,  12,  16,  23,  23,  16,  12,   4,
	2,   8,  12,  12,  12,  12,   8,   2,
};

const int King[64] =
{
	40,  50,  30,  10,  10,  30,  50,  40,
	30,  40,  20,   0,   0,  20,  40,  30,
	10,  20,   0, -20, -20,   0,  20,  10,
	0,  10, -10, -30, -30, -10,  10,   0,
	-10,   0, -20, -40, -40, -20,   0, -10,
	-20, -10, -30, -50, -50, -30, -10, -20,
	-30, -20, -40, -60, -60, -40, -20, -30,
	-40, -30, -50, -70, -70, -50, -30, -40 ,
};

#endif
