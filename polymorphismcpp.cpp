#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>

class Object
{
public:
    virtual void calc_field() = 0;
    //Clean virtual function/method
};

class Circle :public Object
{
public:
    Circle(float r) { m_r = r; }

    virtual void calc_field()
    {
        std::cout << "Circle field: " << atan(1) * 4 * m_r * m_r << std::endl;
    }
private:
    float m_r;
};

class Square :public Object
{
public:
    Square(float a) { m_a = a; }

    virtual void calc_field()
    {
        std::cout << "Square field: " << m_a*m_a << std::endl;
    }
private:
    float m_a;
};

int main()
{
    system("title Polymorphism in C++");
    Circle c1(1);
    Square s1(2);
    Object* pointer = &c1;
    pointer->calc_field();
    pointer = &s1;
    pointer->calc_field();
    std::getchar();
}

