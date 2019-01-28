#pragma once

class cVect2d {

	//--------------------Donnees membres--------------------//
private:
	float m_fltx;// x du vecteur
	float m_flty;//y du vecteur

	//--------------------fonctions membres--------------------//
public:
	//assesseurs
	float getVectEnX()const;
	float getVectEnY()const;

	//mutateurs
	void setVectEnX(float fltx);
	void setVectEnY(float flty);


	//Produit scalaire (multiplication d'un vecteur par un r�el)
	void multiReel(float);

	//Calcul de la norme d'un point � un autre
	float normeVect(cVect2d vect);

	//nullit� d'un ou plusieurs membres d'un vecteur
	bool const nullVect();

	//---------------surcharge d'op�rateurs---------------//

	//surcharge d'op�rateur =
	cVect2d &operator =(const cVect2d);

	//surcharge d'op�rateur ==
	bool operator ==(const cVect2d &other)const;

	//surcharge d'op�rateur +
	cVect2d operator +(const cVect2d &other);

	//surcharge d'op�rateur -
	cVect2d operator -(const cVect2d &other);

	//surcharge d'op�rateur +=
	cVect2d operator +=(const cVect2d &other);

	//surcharge d'op�rateur -=
	cVect2d operator -=(const cVect2d &other);

	//surcharge d'op�rateur *
	cVect2d operator *(const cVect2d &other);

	//surcharge d'op�rateur /
	cVect2d operator /(const cVect2d &other);


	//--------------------constructeurs--------------------//

	//constructeur sans param�tres
	cVect2d();

	//constructeur avec param�tres
	cVect2d(float fltx,float flty);

	//constructeur avec param�tre par d�faut
	cVect2d(float fltzero = 0.0f);

	//constructeur avec vecteur en param�tre
	cVect2d(const cVect2d &other);
	
	//--------------------destructeur--------------------//
	~cVect2d();

};