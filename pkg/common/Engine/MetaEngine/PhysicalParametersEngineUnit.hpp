/*************************************************************************
*  Copyright (C) 2004 by Janek Kozicki                                   *
*  cosurgi@berlios.de                                                    *
*                                                                        *
*  This program is free software; it is licensed under the terms of the  *
*  GNU General Public License v2 or later. See file LICENSE for details. *
*************************************************************************/

#pragma once

#include<yade/core/PhysicalParameters.hpp>
#include<yade/core/Body.hpp>
#include<yade/core/EngineUnit1D.hpp>
#include<yade/core/BexContainer.hpp>

/*! \brief
	Abstract interface for all classes that want to do something depending on PhysicalParameters (works like adding external virtual function)

	Currently it is used for LeapFron integration and creating FEM

	\param const shared_ptr<PhysicalParameters>&	PhysicalParameters' index (Indexable) is used to dispatch this call
	\param Body*					Body's pointer
	
*/

class PhysicalParametersEngineUnit :    public EngineUnit1D
					<
		 				void ,
		 				TYPELIST_3(	  const shared_ptr<PhysicalParameters>&
								, Body*, BexContainer&
			   				  )
					>
{
	public: virtual ~PhysicalParametersEngineUnit();	
	REGISTER_CLASS_NAME(PhysicalParametersEngineUnit);
	REGISTER_BASE_CLASS_NAME(EngineUnit1D);
};

REGISTER_SERIALIZABLE(PhysicalParametersEngineUnit);


