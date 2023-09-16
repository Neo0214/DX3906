#ifndef VECTOR2_H
#define VECTOR2_H
#include <math.h>
#include <cmath>
using namespace std;

#define EMPTY 0
#define FULL 1

class Vector2
{
public:
	double x;
	double y;

	Vector2() :x(0), y(0) {};
	Vector2(double x, double y) :x(x), y(y) {};

	Vector2 operator+(Vector2 B) { return Vector2(x + B.x, y + B.y); };
	Vector2 operator-(Vector2 B) { return Vector2(x - B.x, y - B.y); };
	double operator*(Vector2 B){ return x * B.x + y * B.y; };
	Vector2 operator*(double k) { return Vector2(k * x, k * y); };
	double operator%(Vector2 B) { return x * B.y - y * B.x; };

	double getMode() { return sqrt(pow(x, 2)+ pow(y, 2)); };
	double getAngDiff(Vector2 B) { return acos((*this) * B / (getMode() * B.getMode())); };
};

#endif // !VECTOR2_H