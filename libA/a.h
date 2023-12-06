
#include <string>

#include "liba_export.h"

class LIBA_EXPORT A
{
public:
  A(const std::string& value);

  std::string Value;

  static A fruit;
};
