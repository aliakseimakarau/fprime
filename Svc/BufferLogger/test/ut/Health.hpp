// ====================================================================== 
// \title  Health.hpp
// \author bocchino
// \brief  Interface for BufferLogger health tests
//
// \copyright
// Copyright (C) 2017 California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged. Any commercial use must be negotiated with the Office
// of Technology Transfer at the California Institute of Technology.
// 
// This software may be subject to U.S. export control laws and
// regulations.  By accepting this document, the user agrees to comply
// with all U.S. export laws and regulations.  User has the
// responsibility to obtain export licenses, or other export authority
// as may be required before exporting such information to foreign
// countries or providing access to foreign persons.
// ====================================================================== 

#ifndef ASTERIA_Health_HPP
#define ASTERIA_Health_HPP

#include "Tester.hpp"

namespace ASTERIA {

  namespace Health {

    class Tester :
      public ASTERIA::Tester
    {

      public:

        // ---------------------------------------------------------------------- 
        // Tests
        // ---------------------------------------------------------------------- 

        //! Health ping test
        void Ping(void);

    };

  }

}

#endif
