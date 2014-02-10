//===--- Mayonnaise.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_VISITOR_MAYONNASIE_HPP_
#define _HFDP_CPP_VISITOR_MAYONNASIE_HPP_

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class Mayonnaise : public Ingredient {

      public:
        explicit Mayonnaise( float amount = 1.0f );
        void accept( Visitor* visitor );
        float getCalories() const;
        float getCarbs() const;
        float getProtien() const;
        float getFat() const;
        float getCholesterol() const;
        float getSodium() const;
        bool isVegetarian() const;
        std::string toString() const;
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HFDP

#endif
