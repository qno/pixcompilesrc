#include <iostream>
#include <memory>
#include <string>
#include <vector>

int main(int argc, char** argv)
{
  std::cout << "hello from bob cross compiled!!!" << std::endl;
  auto x = std::make_shared<std::string>("now execute some advanced C++14 stuff ...");
  std::cout << "smstring: " << *x << std::endl;
  std::shared_ptr<std::vector<int>> intVecShPtr(new std::vector<int>());
  intVecShPtr->push_back(1);
  std::cout << "int vec 1: " << std::to_string(intVecShPtr->at(0)) << std::endl;
  return 0;
}
