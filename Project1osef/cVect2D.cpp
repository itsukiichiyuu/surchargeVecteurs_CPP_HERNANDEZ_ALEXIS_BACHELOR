#include "cVect2d.h"
#include <math.h>

//--------------------assesseurs--------------------//
float cVect2d::getVectEnX()const
{
	return this->m_fltx;
}

float cVect2d::getVectEnY()const
{
	return this->m_flty;
}

//--------------------mutateurs--------------------//
void cVect2d::setVectEnX(float fltx)
{
	m_fltx = fltx;
}

void cVect2d::setVectEnY(float flty)
{
	m_flty = flty;
}

//--------------------constructeurs--------------------//
cVect2d::cVect2d()
{
	m_fltx = 0.0f;
	m_flty = 0.0f;
}

cVect2d::cVect2d(float fltx,float flty)
{
	m_fltx = fltx;
	m_flty = flty;
}

cVect2d::cVect2d(float fltzero)
{
	m_fltx = fltzero;
	m_flty = fltzero;
}

cVect2d::cVect2d(const cVect2d & other)
{
	m_fltx = other.m_fltx;
	m_flty = other.m_flty;
}

//--------------------destructeur--------------------//

cVect2d::~cVect2d()
{
}

//---------------surcharge d'opérateurs---------------//

cVect2d &cVect2d::operator=(const cVect2d other)
{
	if (this != &other)
	{
		m_fltx = other.m_fltx;
		m_flty = other.m_flty;
	}
	return *this;
}

bool cVect2d::operator==(const cVect2d & other) const
{
	if ((this->m_fltx == other.m_fltx) && (this->m_flty == other.m_flty))
	{
		return true;
	}
	else
	{
		return false;
	}
}

cVect2d cVect2d::operator+(const cVect2d & other)
{
	cVect2d temp(0.0f, 0.0f);
	temp.m_fltx = this->m_fltx + other.m_fltx;
	temp.m_flty = this->m_flty + other.m_flty;

	return temp;
}

cVect2d cVect2d::operator-(const cVect2d & other)
{
	cVect2d temp(0.0f, 0.0f);
	temp.m_fltx = this->m_fltx - other.m_fltx;
	temp.m_flty = this->m_flty - other.m_flty;

	return temp;
}

cVect2d cVect2d::operator+=(const cVect2d & other)
{
	m_fltx += other.m_fltx;
	m_flty += other.m_flty;

	return *this;
}

cVect2d cVect2d::operator-=(const cVect2d & other)
{
	m_fltx -= other.m_fltx;
	m_flty -= other.m_flty;

	return *this;
}

cVect2d cVect2d::operator*(const cVect2d & other)
{
	cVect2d temp(0.0f, 0.0f);

	temp.m_fltx = (m_fltx * other.m_fltx);
	temp.m_flty = (m_flty * other.m_flty);

	return temp;
}

cVect2d cVect2d::operator/(const cVect2d & other) 
{
	cVect2d temp(0.0f, 0.0f);

	if ((m_fltx != 0) && (m_flty != 0) && (other.m_fltx != 0) && (other.m_flty != 0))
	{
		temp.m_fltx = (m_fltx / other.m_fltx);
		temp.m_flty = (m_flty / other.m_flty);
	}

	return temp;
}

//----------------------autres fct-----------------------//

//--------------------multiplication de vecteur avec un reel (scalaire)--------------------//
void cVect2d::multiReel(float f)
{
	m_fltx = m_fltx * f;
	m_flty = m_flty * f;
}

//--------------------norme d'un vecteur--------------------//
float cVect2d::normeVect(cVect2d vect)
{
	float norme = 0.0f;

	norme = sqrt(pow(vect.m_fltx-m_fltx,2)+pow(vect.m_flty-m_flty,2));

	return norme;
}

//--------------nullité d'un membre du vecteur--------------//
bool const cVect2d::nullVect()
{
	if ((m_fltx == 0.0) || (m_flty == 0.0))
	{
		return true;
	}
	else
	{
		return false;
	}
}
