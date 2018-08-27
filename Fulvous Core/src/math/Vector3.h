#pragma once

#include <iostream>

namespace Fulvous
{
	namespace math
	{
		struct Vector3
		{
			float x, y, z;

			Vector3();
			Vector3(const float& x, const float& y, const float& z);

			~Vector3();

			Vector3& add(const Vector3& other);
			Vector3& subtract(const Vector3& other);
			Vector3& multiply(const Vector3& other);
			Vector3& divide(const Vector3& other);

			friend Vector3 operator + (Vector3 first, const Vector3& second);
			friend Vector3 operator - (Vector3 first, const Vector3& second);
			friend Vector3 operator * (Vector3 first, const Vector3& second);
			friend Vector3 operator / (Vector3 first, const Vector3& second);

			Vector3& operator += (const Vector3& other);
			Vector3& operator -= (const Vector3& other);
			Vector3& operator *= (const Vector3& other);
			Vector3& operator /= (const Vector3& other);

			bool operator == (const Vector3& other);
			bool operator != (const Vector3& other);

			friend std::ostream& operator << (std::ostream& stream, const Vector3& vector);
		};
	}
}