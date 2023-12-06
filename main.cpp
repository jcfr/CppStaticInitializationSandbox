
#include <a.h>

#include<iostream>

int main(int, char*[])
{
  std::cout << "CppStaticInitializationSandbox" << std::endl;
  A a("apple");

  std::cout << "'a' value is [" << a.Value << "]" << std::endl;

  return EXIT_SUCCESS;
}
