#include "Vector2.h"

namespace Fulvous
{
	namespace math
	{
		Vector2::Vector2()
		{
			this->x = 0;
			this->y = 0;
		}
		Vector2::Vector2(const float & x, const float & y)
		{
			this->x = x;
			this->y = y;
		}
		Vector2::~Vector2(){}

		Vector2& Vector2::add(const Vector2 & other)
		{
			x += other.x;
			y += other.y;

			return *this;
		}
		Vector2& Vector2::subtract(const Vector2 & other)
		{
			x -= other.x;
			y -= other.y;

			return *this;
		}
		Vector2& Vector2::multiply(const Vector2 & other)
		{
			x *= other.x;
			y *= other.y;

			return *this;
		}
		Vector2& Vector2::divide(const Vector2 & other)
		{
			x /= other.x;
			y /= other.y;

			return *this;
		}

		Vector2 operator + (Vector2 first, const Vector2& second)
		{
			return first.add(second);
		}
		Vector2 operator - (Vector2 first, const Vector2& second)
		{
			return first.subtract(second);
		}
		Vector2 operator * (Vector2 first, const Vector2& second)
		{
			return first.multiply(second);
		}
		Vector2 operator / (Vector2 first, const Vector2& second)
		{
			return first.divide(second);
		}

		Vector2& Vector2::operator += (const Vector2& other)
		{
			return this->add(other);
		}
		Vector2& Vector2::operator -= (const Vector2& other)
		{
			return this->subtract(other);
		}
		Vector2& Vector2::operator *= (const Vector2& other)
		{
			return this->multiply(other);
		}
		Vector2& Vector2::operator /= (const Vector2& other)
		{
			return this->divide(other);
		}

		bool Vector2::operator == (const Vector2& other)
		{
			return x == other.x && y == other.y;
		}
		bool Vector2::operator != (const Vector2& other)
		{
			return x != other.x || y != other.y;
		}

		std::ostream& operator <<(std::ostream& stream, const Vector2& vector)
		{
			stream << "[" << vector.x << ", " << vector.y << "]";
			return stream;
		}
	}
}
