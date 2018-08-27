#include "Vector3.h"

namespace Fulvous
{
	namespace math
	{
		Vector3::Vector3()
		{
			this->x = 0;
			this->y = 0;
			this->z = 0;
		}
		Vector3::Vector3(const float & x, const float & y, const float& z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}
		Vector3::~Vector3() {}

		Vector3& Vector3::add(const Vector3 & other)
		{
			x += other.x;
			y += other.y;
			z += other.z;

			return *this;
		}
		Vector3& Vector3::subtract(const Vector3 & other)
		{
			x -= other.x;
			y -= other.y;
			z -= other.z;

			return *this;
		}
		Vector3& Vector3::multiply(const Vector3 & other)
		{
			x *= other.x;
			y *= other.y;
			z *= other.z;

			return *this;
		}
		Vector3& Vector3::divide(const Vector3 & other)
		{
			x /= other.x;
			y /= other.y;
			z /= other.z;

			return *this;
		}

		Vector3 operator + (Vector3 first, const Vector3& second)
		{
			return first.add(second);
		}
		Vector3 operator - (Vector3 first, const Vector3& second)
		{
			return first.subtract(second);
		}
		Vector3 operator * (Vector3 first, const Vector3& second)
		{
			return first.multiply(second);
		}
		Vector3 operator / (Vector3 first, const Vector3& second)
		{
			return first.divide(second);
		}

		Vector3& Vector3::operator += (const Vector3& other)
		{
			return this->add(other);
		}
		Vector3& Vector3::operator -= (const Vector3& other)
		{
			return this->subtract(other);
		}
		Vector3& Vector3::operator *= (const Vector3& other)
		{
			return this->multiply(other);
		}
		Vector3& Vector3::operator /= (const Vector3& other)
		{
			return this->divide(other);
		}

		bool Vector3::operator == (const Vector3& other)
		{
			return x == other.x && y == other.y && z == other.z;
		}
		bool Vector3::operator != (const Vector3& other)
		{
			return x != other.x || y != other.y || z != other.z;
		}

		std::ostream& operator <<(std::ostream& stream, const Vector3& vector)
		{
			stream << "[" << vector.x << ", " << vector.y << ", " << vector.z << "]";
			return stream;
		}
	}
}
