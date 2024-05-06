
#include <iostream>


class Figure
{
protected:
    int corners;
public:
    Figure()
    {
        this->corners = 0;
    }
    int GetCorners()
    {
        return corners;
    }
};

class Triangle : public Figure
{
public:
    Triangle()
    {
        this->corners = 3;
    }
};
class Quadrilateral: public Figure
{
public:
    Quadrilateral()
    {
        this->corners = 4;
    }
};

int main()
{
    Figure figure;
    Triangle triangle;
    Quadrilateral quadrilateral;
    std::cout << "Numbers of corners: " << std::endl;
    std::cout << "Figure: " << figure.GetCorners() << std::endl;
    std::cout << "Triangle: " << triangle.GetCorners() << std::endl;
    std::cout << "Quadrilateral: " << quadrilateral.GetCorners() << std::endl;
    

}

