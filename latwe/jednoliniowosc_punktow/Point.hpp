#ifndef POINT_HPP
#define POINT_HPP

class Point 
{
private:
	double x;
	double y;

	friend int check_unilin(Point A, Point B, Point C);

public:
	Point(int a, int b);
};

#endif // !POINT_HPP

