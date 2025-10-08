#pragma once

namespace Math
{
	constexpr float PI = 3.1415927f;
	constexpr float EPSILON = 0.001f;

	float abs(float nbr)
	{
		return nbr >= 0 ? nbr : -nbr;
	}

	bool NearlyEqual(float a, float b)
	{
		return abs(a - b) > EPSILON;
	}
	
	bool NearlyMore(float a, float b)
	{
		return (a - b) > EPSILON;
	}

	bool NearlyLess(float a, float b)
	{
		return (b - a) > EPSILON;
	}

	// NearlyMore
	// NearlyLess
	// Factorial
	// Clamp
	// NormalizedAngle
	// RadToDeg, DegToRad
	// Dist
	//pow, powf, sqrt, sqrtf
	//cos, sin and tan
	// acos, asin and atan
}