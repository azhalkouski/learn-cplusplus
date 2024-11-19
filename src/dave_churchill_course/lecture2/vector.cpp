#include <iostream>
#include <vector>

// vectore is a data structure

int main()
{
  // int age = 29;
  // std::string first = "Artsiom";
  // std::string last = "Zhalkouski";
  // std::string name = first + " " + last;

  // std::cout << name << std::endl;

  // declaration of a standard vectore of integers
  // std::vector<int> vec;
  // vec.push_back(42);
  // vec.push_back(10);

  // std::cout << vec[0] << std::endl;
  // std::cout << vec[1] << std::endl;
  // /**
  //  * This is really interesting. We don't have nothing at position 2.
  //  * In Java we would get `array out of bound` error. But here we'll get something
  //  * and it's very likely that we'll get zero. Vector is a dynamic array under the hood
  //  * so it's size is more then two even though we have only two elements in it.
  //  * So, why zero? Well because at that location in memory we seem to currently
  //  * have zero.
  //  */
  // std::cout << vec[2] << std::endl;


  std::vector<int> vec;
  vec.push_back(42);
  vec.push_back(10);

  /**
   * size_t is unsigned long
   * if I used int i=0, I wound get a warning which would say
   * comparison of integers of different signs: 'int' and
   * 'size_type' (aka 'unsigned long')
   */
  for (size_t i=0; i<vec.size(); i++)
  {
    std::cout << vec[i] << std::endl;
  }

  /**
   * for everything in the vector assign it the name of 'a' and do something
   */
  for (int a : vec)
  {
    std::cout << a << std::endl;
  }

  return 0;
}
