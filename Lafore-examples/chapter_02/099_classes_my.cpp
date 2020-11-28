#include <iostream>
 
// Создайте класс Numbers, который содержит два целых числа. Этот класс должен иметь две переменные-члены для хранения этих двух целых чисел. Вы также должны создать два метода:

//    метод set(), который позволит присваивать значения переменным;

//    метод print(), который будет выводить значения переменных.

class Number
{
  public:
  int m_value_x, m_value_y;
  void set()    { std::cin >> m_value_x >> m_value_y; }
  void print()  { std::cout << m_value_x << " "<< m_value_y << "\n";}
};

int main() {
  //int debug0 = 0;
  Number n5 = {2, 2};
  Number n2 = {3, 4};
  Number n3 = {5, 6};

  n5.set();
  //system("pause");
  n2.set();
  //system("pause");
  n3.set();
  //system("pause");
  n5.print();
  n2.print();
  n3.print();
  system("pause");
  return 0; 
}