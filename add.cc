#include<iostream>

class Addition
{
    int num1, num2;
    public:
    Addition(int n1, int n2):num1(n1), num2(n2){}

    int add()
    {
        return num1+num2;
    }

    ~Addition(){}

};

int main()
{
    Addition a(45, 67);
    std::cout<<a.add();
    return 0;
}