#include <iostream>
#include <vector>
#include <fstream>

class Student
{
  std::string m_first = "First";
  std::string m_last  = "Last";
  int         m_id    = 0;
  float       m_avg   = 0;

public:

  Student() {}

  Student(std::string first, std::string last, int id, float avg)
    // using the initializer list
    : m_first   (first)
    , m_last    (last)
    , m_id      (id)
    , m_avg     (avg)
  {
  }

  /**
   * 'const correctnes'
   * anywhere you declare a function that does not change the class, declare it
   * as constant
   */
  int getAvg() const
  {
    return m_avg;
  }

  int getID() const
  {
    return m_id;
  }

  std::string getFirst() const
  {
    return m_first;
  }

  std::string getLast() const
  {
    return m_last;
  }

  // const function will never ever change the object
  void print() const
  {
    std::cout << m_first << " " << m_last << " " << m_id << " " << m_avg << std::endl;
  }
};


class Course
{
  std::string m_name = "Course";
  std::vector<Student> m_students;

public:

  Course() {}

  /**
   * 1) Strings are big. We don't want to copy them! We're not afraid to copy other
   * ptimitives but not strings. 99% it's bad. We don't want to make a copy of a string,
   * we want to pass a reference to the string.
   * 2) Since it is a reference to the string now, we definitely don't want to change
   * the original string. So, we make the reference to be const.
   */
  Course(const std::string& name)
    : m_name(name)
  {
  }

  void addStudent(const Student& s)
  {
    m_students.push_back(s);
  }

  /**
   * We want the return type to be a vector of students, because the function returns
   * a vector of students. BUT the return type 'std::vector<Student>' will actually
   * return a COPY of the vector. So, it will make a copy and return it.
   * 
   * Since we don't want to make a copy, we must tell that the return type is a
   * REFERENCE to a vector and not the vector itself.
   * 
   * So, we define the return type like this 'std::vector<Student>&'
   * 
   * And since we don't want to allow to change the returned vector, we must mark it
   * as const.
   * 
   * So, the final return type looks like this 'const std::vector<Student>&'
   * 
   * Eventually, we have two const words. The const on the right says that the function
   * will not change the instance of the class. And the const on the left says that
   * the return type is not allowd to be changed (the reference is const and you cannot
   * change the vector by the reference)
   * 
   * 'const correctnes'
   */
  const std::vector<Student>& getStudents() const
  {
    return m_students;
  }

  void loadFromFile(const std::string& filename)
  {
    // input file stream
    std::ifstream fin(filename);
    std::string first, last;
    int id;
    float avg;

    // fin is goint to send its next string token into temp
    while (fin >> first)
    {
      // fin will automatically convert string id into int id
      fin >> last >> id >> avg;

      addStudent(Student(first, last, id, avg));
    }
  }

  void print() const
  {
    // auto tells the compiler to use type inference
    for (const auto& s : m_students)
    {
      s.print();
    }
  }

};



/**
 * this is a real example of const Class usage
 * Here, suppose that the 'd' object is very big. We don't want to copy it, so we use
 * a reference (we could've used a pointer, but a reference is a little bit safer).
 * 
 * So, now using a reference we can actually change the original 'd' object and we
 * certainly don't wanna do that, so we make the reference const.
 */
// void doMachineLearning(const Data& d)
// {
//   d.getValue();
// }

// int main(int argc, char * argv[])
// int main()
// {
//   Student s1;
//   Student s2("Dave", "Churchill", 1, 3.14);
//   // const means I want this student to be constant. I don't want it to ever change
//   const Student s3("Jane", "Doe", 202200001, 99.9);

//   Course comp4300("COMP 4300");
//   comp4300.addStudent(s1);
//   comp4300.addStudent(s2);
//   comp4300.addStudent(s3);
//   comp4300.addStudent(Student("Billy", "Bob", 3, 50.0));

//   comp4300.print();

//   return 0;
// }

// LOAD FROM FILE
int main()
{
  Course c("COMP 4300");
  c.loadFromFile("students.txt");
  c.print();
}