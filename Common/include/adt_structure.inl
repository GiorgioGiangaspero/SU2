/*!
 * \file adt_structure.inl
 * \brief In-Line subroutines of the <i>adt_structure.hpp</i> file.
 * \author E. van der Weide
 * \version 6.2.0 "Falcon"
 *
 * The current SU2 release has been coordinated by the
 * SU2 International Developers Society <www.su2devsociety.org>
 * with selected contributions from the open-source community.
 *
 * The main research teams contributing to the current release are:
 *  - Prof. Juan J. Alonso's group at Stanford University.
 *  - Prof. Piero Colonna's group at Delft University of Technology.
 *  - Prof. Nicolas R. Gauger's group at Kaiserslautern University of Technology.
 *  - Prof. Alberto Guardone's group at Polytechnic University of Milan.
 *  - Prof. Rafael Palacios' group at Imperial College London.
 *  - Prof. Vincent Terrapon's group at the University of Liege.
 *  - Prof. Edwin van der Weide's group at the University of Twente.
 *  - Lab. of New Concepts in Aeronautics at Tech. Institute of Aeronautics.
 *
 * Copyright 2012-2019, Francisco D. Palacios, Thomas D. Economon,
 *                      Tim Albring, and the SU2 contributors.
 *
 * SU2 is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * SU2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with SU2. If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once

inline CADTComparePointClass::~CADTComparePointClass() {}

inline bool CADTComparePointClass::operator()(const unsigned long p0,
                                              const unsigned long p1) const {
  return pointCoor[nDim*p0+splitDirection] < pointCoor[nDim*p1+splitDirection];
}

inline CBBoxTargetClass::CBBoxTargetClass() {}

inline CBBoxTargetClass::~CBBoxTargetClass() {}

inline CBBoxTargetClass::CBBoxTargetClass(const CBBoxTargetClass &other) {Copy(other);}

inline CBBoxTargetClass& CBBoxTargetClass::operator=(const CBBoxTargetClass &other) {Copy(other); return (*this);}

inline CADTNodeClass::CADTNodeClass() {}

inline CADTNodeClass::~CADTNodeClass() {}

inline CADTNodeClass::CADTNodeClass(const CADTNodeClass &other) {Copy(other);}

inline CADTNodeClass& CADTNodeClass::operator=(const CADTNodeClass &other) {Copy(other); return (*this);}

inline CADTBaseClass::CADTBaseClass() {}

inline CADTBaseClass::~CADTBaseClass() {}

inline bool CADTBaseClass::IsEmpty(void) const { return isEmpty;}

inline CADTPointsOnlyClass::~CADTPointsOnlyClass() {}

inline CADTElemClass::~CADTElemClass() {}

