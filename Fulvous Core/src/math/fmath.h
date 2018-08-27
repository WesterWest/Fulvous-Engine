#pragma once

#define _USE_MATH_DEFINES
#include <math.h>

#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Matrix4.h"


namespace Fulvous
{
	namespace math
	{
		inline float toRadians(float degrees)
		{
			return degrees * M_PI / 180.0f;
		}
	}
}