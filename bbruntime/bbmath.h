#ifndef BBMATH_H
#define BBMATH_H

float	bbSin(float n);
float	bbCos(float n);
float	bbTan(float n);
float	bbASin(float n);
float	bbACos(float n);
float	bbATan(float n);
float	bbATan2(float n, float t);
float	bbSqr(float n);
float	bbFloor(float n);
float	bbCeil(float n);
float	bbExp(float n);
float	bbLog(float n);
float	bbLog10(float n);
float	bbMin(float n, float m);
float	bbMax(float n, float m);
float	bbClamp(float v, float lo, float hi);
float	bbRnd(float from, float to);
int		bbIsNaN(float n);
void	bbSeedRnd(int seed);

#endif