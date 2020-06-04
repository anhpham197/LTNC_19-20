Point::Point(): x(0) , y(0) {}

Point::Point (double x_, double y_) : x(x_) , y(y_) {}

Point::Point(const Point&p): x(p.x) , y(p.y) {}

Triangle::Triangle(const Point&p1_ , const Point&p2_ ,  const Point &p3_) 
{
    p1 = {p1_.x , p1_.y};
    p2 = {p2_.x , p2_.y};
    p3 = {p3_.x , p3_.y};
};

double distance(Point p1 , Point p2)
{
    return sqrt(pow(p1.x-p2.x,2) + pow(p1.y-p2.y,2));
}

double Triangle::getPerimeter() const
{
    return distance(p1,p2) + distance(p2,p3) + distance(p1,p3);
}

double Triangle::getArea() const
{
    double p = getPerimeter()/2;
    return sqrt(p * (p-distance(p1,p2)) * (p-distance(p2,p3)) * (p-distance(p1,p3)));
}
