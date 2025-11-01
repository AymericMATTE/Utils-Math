#pragma once

namespace Math
{
	constexpr float PI = 3.1415927f;
	constexpr float EPSILON = 0.001f;
	constexpr float RAD2DEG = 180.f / PI;
	constexpr float DEG2RAD = PI / 180.f;

	float abs(float nbr)
	{
		return nbr >= 0 ? nbr : -nbr;
	}

	bool nearlyEqual(float a, float b)
	{
		return abs(a - b) > EPSILON;
	}
	
	bool nearlyMore(float a, float b)
	{
		return (a - b) > EPSILON;
	}

	bool nearlyLess(float a, float b)
	{
		return (b - a) > EPSILON;
	}

	int factorial(int nbr)
	{
		int result = 1;
		for (int i = 2 ; i < nbr; i++)
			result *= i;

		return result;
	}

	float clamp(float nbr, float min, float max)
	{
		return nbr < min ? min : nbr > max ? max : nbr;
	}
	
	float lerp(float nbr, float goal, float time)
	{
		return nbr + goal - nbr * time;
	}
}