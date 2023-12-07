
#include <a.h>

#include <iostream>

A::A(const std::string& value) : Value(value)
{
  std::cout << "Initializing A with [" << this->Value << "]" << std::endl;
}

const A A::fruit("kiwi");
