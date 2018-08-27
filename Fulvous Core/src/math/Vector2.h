#pragma once

#include <iostream>

namespace Fulvous
{
	namespace math
	{
		struct Vector2
		{
			float x, y;

			Vector2();
			Vector2(const float& x, const float& y);

			~Vector2();

			Vector2& add(const Vector2& other);
			Vector2& subtract(const Vector2& other);
			Vector2& multiply(const Vector2& other);
			Vector2& divide(const Vector2& other);

			friend Vector2 operator + (Vector2 first, const Vector2& second);
			friend Vector2 operator - (Vector2 first, const Vector2& second);
			friend Vector2 operator * (Vector2 first, const Vector2& second);
			friend Vector2 operator / (Vector2 first, const Vector2& second);

			Vector2& operator += (const Vector2& other);
			Vector2& operator -= (const Vector2& other);
			Vector2& operator *= (const Vector2& other);
			Vector2& operator /= (const Vector2& other);

			bool operator == (const Vector2& other);
			bool operator != (const Vector2& other);

			friend std::ostream& operator << (std::ostream& stream, const Vector2& vector);
		};
	}
}