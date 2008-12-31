/*************************************************************************
*  Copyright (C) 2008 by Feng Chen  (fchen3@gmail.com)                   *
*  Department of Civil and Environmental Engineering                     *
*  223 Perkins Hall                                                      *
*  University of Tennessee, Knoxville, 37996                             *
*  http://fchen3.googlepages.com/home                                    *
*                                                                        *
*  This program is free software; it is licensed under the terms of the  *
*  GNU General Public License v2 or later. See file LICENSE for details. *
*************************************************************************/

#ifndef VISCOUS_FORCE_DAMPING_HPP
#define VISCOUS_FORCE_DAMPING_HPP

#include<yade/core/InteractionSolver.hpp>

#include <set>
#include <boost/tuple/tuple.hpp>

class PhysicalAction;

class ViscousForceDamping : public InteractionSolver
{
/// Attributes
	private :
		shared_ptr<PhysicalAction> actionForce;
		shared_ptr<PhysicalAction> actionMomentum;

	public :
		
		Real betaNormal;
		Real betaShear;
		
		int sdecGroupMask;
		bool momentRotationLaw;
	
		ViscousForceDamping();
		void action(Body* body);

	protected :
		void registerAttributes();
	REGISTER_CLASS_NAME(ViscousForceDamping);
	REGISTER_BASE_CLASS_NAME(InteractionSolver);
};

REGISTER_SERIALIZABLE(ViscousForceDamping,false);

#endif // VISCOUS_FORCE_DAMPING_HPP

