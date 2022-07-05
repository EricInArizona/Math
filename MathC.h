// Copyright Eric Chauvin 2022



// This is licensed under the GNU General
// Public License (GPL).  It is the
// same license that Linux has.
// https://www.gnu.org/licenses/gpl-3.0.html



#pragma once



#include "../CppBase/BasicTypes.h"

// This class is mainly for things from
// #include <cmath>.  Which is included in the
// .cpp file.


class MathC
  {
  private:

  public:
  static Float64 roundDbl( Float64 x );
  static Int64 round64( Float64 x );
  static Int32 round32( Float64 x );



  };
