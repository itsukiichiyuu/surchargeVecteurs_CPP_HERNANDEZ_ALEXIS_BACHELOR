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


	//Produit scalaire (multiplication d'un vecteur par un réel)
	void multiReel(float);

	//Calcul de la norme d'un point à un autre
	float normeVect(cVect2d vect);

	//nullité d'un ou plusieurs membres d'un vecteur
	bool const nullVect();

	//---------------surcharge d'opérateurs---------------//

	//surcharge d'opérateur =
	cVect2d &operator =(const cVect2d);

	//surcharge d'opérateur ==
	bool operator ==(const cVect2d &other)const;

	//surcharge d'opérateur +
	cVect2d operator +(const cVect2d &other);

	//surcharge d'opérateur -
	cVect2d operator -(const cVect2d &other);

	//surcharge d'opérateur +=
	cVect2d operator +=(const cVect2d &other);

	//surcharge d'opérateur -=
	cVect2d operator -=(const cVect2d &other);

	//surcharge d'opérateur *
	cVect2d operator *(const cVect2d &other);

	//surcharge d'opérateur /
	cVect2d operator /(const cVect2d &other);


	//--------------------constructeurs--------------------//

	//constructeur sans paramètres
	cVect2d();

	//constructeur avec paramètres
	cVect2d(float fltx,float flty);

	//constructeur avec paramètre par défaut
	cVect2d(float fltzero = 0.0f);

	//constructeur avec vecteur en paramètre
	cVect2d(const cVect2d &other);
	
	//--------------------destructeur--------------------//
	~cVect2d();

};