#include <stdio.h>

#define MAX 30

const int BOTTOM = 1;
const int LEFT= 2;
const int TOP = 3;
const int RIGHT= 4;


void magic_diag(int m[][MAX], int N, int pos);

void magic_knight(int m[][MAX], int N, int pos);

void reset(int m[][MAX]);

void prchar(char c, int N);

void prmagic(int m[][MAX],int N);

void prmagicSum(int m[][MAX], int N);

void magic(int m[][MAX], int type, int N, int pos);

void compSum(int m[][MAX], int N);
