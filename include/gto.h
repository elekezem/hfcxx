/*
 * gto.h
 *
 * hfcxx package <https://github.com/ifilot/hfcxx>
 *
 * Author: Ivo Filot <ivo@zuidstijl.nl>
 * Description: Gaussian Type Orbitals
 */
 
#ifndef _GTO_H
#define _GTO_H

#include<cmath>
#include<iostream>
#include "vec3.h"
#include "factorial.h"

/* 
Gaussian Type Orbital

x^l * y^m * z^n * exp(-alpha * r^2)
*/

class GTO{
	public:
	double c;	/* coefficient */
	unsigned int l,m,n; /* powers */
	double x,y,z;	/* positions */
	double alpha;	/* alpha value in the exponent */
	Vec3 r; /* position vector */
	double norm;

	public:
	GTO(const double c, const Vec3 rr, const double alphaa, const unsigned int ll, const unsigned int mm, const unsigned int nn);
	friend std::ostream& operator <<(std::ostream &os,const GTO &rhs);

	private:
	double calcnorm() const;
};

#endif //_GTO_H
