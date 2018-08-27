#pragma once

#include "fmath.h"

namespace Fulvous
{
	namespace math
	{
		struct Matrix4
		{
			union
			{
				float elements[4 * 4];

				struct
				{
					Vector4 columns[4];
				};
			};

			Matrix4();
			Matrix4(const float& diagonal);

			~Matrix4() {};

			static Matrix4 identity();

			static Matrix4 ortographic(float left, float right, float bottom, float top, float near, float far);
			static Matrix4 perspective(float fov, float aspectRation, float near, float far);

			static Matrix4 translation(const Vector3& translation);
			static Matrix4 rotation(float angle, const Vector3& axis);
			static Matrix4 scale(const Vector3& scale);

			Matrix4& multiply(const Matrix4& other);
			friend Matrix4 operator * (Matrix4 first, const Matrix4& second);
			Matrix4& operator *= (const Matrix4& other);
		};
	}
}