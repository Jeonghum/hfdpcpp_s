//===--- Spinach.hpp - ------------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_SPINACH_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_SPINACH_HPP_

#include "Veggies.hpp"
#include <string>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class Spinach : public Veggies {

      public:
        std::string toString() const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
