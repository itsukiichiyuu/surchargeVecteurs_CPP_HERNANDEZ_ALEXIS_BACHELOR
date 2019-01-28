#include "vect2d.h"

void setVectX(tVect2D * ptrVect, float fltx)
{
	ptrVect->fltx = fltx;
}

void setVectY(tVect2D * ptrVect, float flty)
{
	ptrVect->flty = flty;
}

float getVectX(tVect2D Vecteur)
{
	return Vecteur.fltx;
}

float getVectY(tVect2D Vecteur)
{
	return Vecteur.flty;
}

void moveVect2D(tVect2D * ptrVect, tVect2D tNewVect)
{
	ptrVect->fltx = ptrVect->fltx + tNewVect.fltx;
	ptrVect->flty = ptrVect->flty + tNewVect.flty;
}

float tVect2D::getVectEnX()
{
	return fltx;
}
