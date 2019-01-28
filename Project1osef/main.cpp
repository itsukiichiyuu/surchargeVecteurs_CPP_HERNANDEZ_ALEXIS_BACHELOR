#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include "cVect2d.h"

int main() {

	//Constructeurs
	cVect2d cVectMonVect(0.0f,2.1f);
	cVect2d cVectMonVect3(0.0f, 1.0f);

	//constructeur par recopie
	cVect2d cVectMonVect2(cVectMonVect);
	std::cout << "Constructeur par recopie X:"<<cVectMonVect2.getVectEnX() << " Y:" << cVectMonVect2.getVectEnY() << std::endl;

	//surcharge d'opérateur =
	cVectMonVect = cVectMonVect3;
	std::cout << "surcharge d'operateur = X:" << cVectMonVect.getVectEnX() << "Y:" << cVectMonVect.getVectEnY() << std::endl;
	
	//surcharge d'opérateur ==
	if (cVectMonVect == cVectMonVect3)
	{
		std::cout <<"surcharge d'operateur == egalite" << std::endl;
	}
	else
	{
		std::cout << "surcharge d'operateur == inegalite" << std::endl;
	}

	//surcharge d'opérateur + (et = en prime)
	cVectMonVect3 = (cVectMonVect + cVectMonVect);
	std::cout << "surcharge +: X:" << cVectMonVect3.getVectEnX() << " Y:" << cVectMonVect3.getVectEnY() << std::endl;

	//surcharge d'opérateur - (et = en prime)
	cVectMonVect3 = (cVectMonVect - cVectMonVect);
	std::cout << "surcharge -: X:" << cVectMonVect3.getVectEnX() << " Y:" << cVectMonVect3.getVectEnY() << std::endl;

	//surcharge d'opérateur += 
	cVectMonVect += cVectMonVect;
	std::cout << "surcharge +=: X:" << cVectMonVect.getVectEnX() << " Y:" << cVectMonVect.getVectEnY() << std::endl;

	//surcharge d'opérateur -= 
	cVectMonVect -= cVectMonVect;
	std::cout << "surcharge -=: X:" << cVectMonVect.getVectEnX() << " Y:" << cVectMonVect.getVectEnY() << std::endl;

	//surcharge d'opérateur *  (et = en prime)
	cVectMonVect2 = (cVectMonVect2 * cVectMonVect2);
	std::cout << "surcharge *: X:" << cVectMonVect2.getVectEnX() << " Y:" << cVectMonVect2.getVectEnY() << std::endl;

	//surcharge d'opérateur /  (et = en prime) (on prend en compte la division par 0)
	if (!cVectMonVect2.nullVect())
	{
		cVectMonVect2 = (cVectMonVect2 / cVectMonVect2);
		std::cout << "surcharge /: X:" << cVectMonVect2.getVectEnX() << " Y:" << cVectMonVect2.getVectEnY() << std::endl;
	}
	else
	{
		std::cout << "tentative de division par zero!"  << std::endl;
	}

	cVectMonVect.setVectEnX(10);
	cVectMonVect.setVectEnY(10);

	cVectMonVect2.setVectEnX(3);
	cVectMonVect2.setVectEnY(4);

	//multiplication de deux vecteurs avec surcharge d'opérateurs (et = en prime)
	cVectMonVect3=(cVectMonVect * cVectMonVect2);
	std::cout << "multiplication de deux vecteurs X =" << cVectMonVect3.getVectEnX() << " ,Y =" << cVectMonVect3.getVectEnY() << std::endl;

	//division d'un vecteur a par un vecteur b (et = en prime)
	if ((!cVectMonVect2.nullVect())||(!cVectMonVect.nullVect()))
	{
		cVectMonVect3=(cVectMonVect / cVectMonVect2);
		std::cout << "division d'un vecteur par un autre X =" << cVectMonVect3.getVectEnX() << " ,Y =" << cVectMonVect3.getVectEnY() << std::endl;
	}
	else
	{
		std::cout << "tentative de division par zero!" << std::endl;
	}

	//mutateurs
	cVectMonVect.setVectEnX(3.2f);
	cVectMonVect.setVectEnY(4.5f);

	cVectMonVect2.setVectEnX(1.3f);
	cVectMonVect2.setVectEnY(5.2f);

	//assesseurs
	std::cout << "X =" << cVectMonVect.getVectEnX() << " ,Y =" << cVectMonVect.getVectEnY() << std::endl;

	//multiplication avec un Reel
	cVectMonVect.multiReel(2.0f);
	std::cout << "multiplication par un reel X =" << cVectMonVect.getVectEnX() << " ,Y =" << cVectMonVect.getVectEnY() << std::endl;

	//norme d'un vecteur
	std::cout << cVectMonVect.normeVect(cVectMonVect2) << std::endl;

	system("pause");

	return 0;

}