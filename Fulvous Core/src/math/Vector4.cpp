#include "Vector4.h"

namespace Fulvous
{
	namespace math
	{
		Vector4::Vector4()
		{
			this->x = 0;
			this->y = 0;
			this->z = 0;
			this->w = 0;
		}
		Vector4::Vector4(const float & x, const float & y, const float& z, const float& w)
		{
			this->x = x;
			this->y = y;
			this->z = z;
			this->w = w;
		}
		Vector4::~Vector4() {}

		Vector4& Vector4::add(const Vector4 & other)
		{
			x += other.x;
			y += other.y;
			z += other.z;
			w += other.w;

			return *this;
		}
		Vector4& Vector4::subtract(const Vector4 & other)
		{
			x -= other.x;
			y -= other.y;
			z -= other.z;
			w -= other.w;

			return *this;
		}
		Vector4& Vector4::multiply(const Vector4 & other)
		{
			x *= other.x;
			y *= other.y;
			z *= other.z;
			w *= other.w;

			return *this;
		}
		Vector4& Vector4::divide(const Vector4 & other)
		{
			x /= other.x;
			y /= other.y;
			z /= other.z;
			w /= other.w;

			return *this;
		}

		Vector4 operator + (Vector4 first, const Vector4& second)
		{
			return first.add(second);
		}
		Vector4 operator - (Vector4 first, const Vector4& second)
		{
			return first.subtract(second);
		}
		Vector4 operator * (Vector4 first, const Vector4& second)
		{
			return first.multiply(second);
		}
		Vector4 operator / (Vector4 first, const Vector4& second)
		{
			return first.divide(second);
		}

		Vector4& Vector4::operator += (const Vector4& other)
		{
			return this->add(other);
		}
		Vector4& Vector4::operator -= (const Vector4& other)
		{
			return this->subtract(other);
		}
		Vector4& Vector4::operator *= (const Vector4& other)
		{
			return this->multiply(other);
		}
		Vector4& Vector4::operator /= (const Vector4& other)
		{
			return this->divide(other);
		}

		bool Vector4::operator == (const Vector4& other)
		{
			return x == other.x && y == other.y && z == other.z && w == other.w;
		}
		bool Vector4::operator != (const Vector4& other)
		{
			return x != other.x || y != other.y || z != other.z;
		}

		std::ostream& operator <<(std::ostream& stream, const Vector4& vector)
		{
			stream << "[" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << "]";
			return stream;
		}
	}
}