/////////////////////////////////////////////////////// 
//  Copyright 2013 Stephan Hage.
//  Copyright 2013 Christopher Kormanyos.
//  Distributed under the Boost 
//  Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt 
//  or copy at http://www.boost.org/LICENSE_1_0.txt ) 
//

#ifndef _MCAL_CPU_2009_02_14_H_
  #define _MCAL_CPU_2009_02_14_H_

  #include <cstdint>

  namespace mcal
  {
    namespace cpu
    {
      typedef void config_type;
      void init(const config_type*);
      inline void nop() { asm volatile("nop"); }

      inline std::uint8_t read_program_memory(volatile std::uint8_t* pointer_to_program_memory)
      {
        return *pointer_to_program_memory;
      }
    }
  }

#endif // _MCAL_CPU_2009_02_14_H_
