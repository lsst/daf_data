/* 
 * LSST Data Management System
 * Copyright 2008, 2009, 2010 LSST Corporation.
 * 
 * This product includes software developed by the
 * LSST Project (http://www.lsst.org/).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the LSST License Statement and 
 * the GNU General Public License along with this program.  If not, 
 * see <http://www.lsstcorp.org/LegalNotices/>.
 */
 
/**
  * \class ReleaseProcess
  *
  * \ingroup daf
  *
  * \brief Implements the logic needed to prepare an LsstData 
  *  realization for release and then bring it to a released state.
  * 
  * \note OUT OF SCOPE FOR DC2 - stub implementation
  * 
  * \author  $Author::                                                        $
  * \version $Rev::                                                           $
  * \date    $Date::                                                          $
  * 
  * $Id::                                                                     $
  * 
  * Contact: Jeff Bartels (jeffbartels@usa.net)
  * 
  * Created: 03-Apr-2007 5:30:00 PM
  * 
  */

#ifndef LSST_MWI_DATA_RELEASEPROCESS_H
#define LSST_MWI_DATA_RELEASEPROCESS_H

#include <boost/shared_ptr.hpp>

#include "lsst/daf/base/Citizen.h"

namespace lsst {
namespace daf {
namespace data {

class ReleaseProcess : public lsst::daf::base::Citizen {
public:
    /// Default constructor
    ReleaseProcess();
    /// Copy initialization semantics (NIL in this revision)
    ReleaseProcess(const ReleaseProcess&);
    /// Copy assignment semantics (NIL in this revision)
    ReleaseProcess& operator= (const ReleaseProcess&);
    /// Virtual destructor, class may be specialized (see Stroustrup 12.4.2)
    virtual ~ReleaseProcess();

    /// Reference-counted pointer typedef forinstances of this class
    typedef boost::shared_ptr<ReleaseProcess> Ptr;
    
    /// A short string representation of an instance
    std::string toString();
};
    
} // namespace data
} // namespace daf
} // namespace lsst

#endif // LSST_MWI_DATA_RELEASEPROCESS_H

