#pragma once
#include <stdexcept>

namespace Maths
{
	constexpr float PI = 3.1415927f;
	constexpr float EPSILON = 0.001f;
	constexpr float RAD2DEG = 180.f / PI;
	constexpr float DEG2RAD = PI / 180.f;

	template<typename T>
	T abs(const T& nbr)
	{
		return nbr >= 0 ? nbr : -nbr;
	}

	template<typename T>
	T abs(const T&& nbr)
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

	int factorial(uint nbr)
	{
		int result = 1;
		for (uint i = 2 ; i < nbr; i++)
			result *= i;

		return result;
	}

	int binomialCoefficient(uint n, uint k)
	{
		if (k > n)
			throw std::runtime_error("Binomial Coefficient : k was greater than n");

		int nFact = factorial(n);
		int kFact = factorial(k);

		return nFact / (kFact * factorial(n - k));
	}

	template<typename T>
	T clamp(const T& nbr, const T& min, const T& max)
	{
		return nbr < min ? min : nbr > max ? max : nbr;
	}

	template<typename T>
	T clamp(const T&& nbr, const T&& min, const T&& max)
	{
		return nbr < min ? min : nbr > max ? max : nbr;
	}

	template <typename T>
	T lerp(const T& start, const T& end, float t)
	{
		return start + t * (end - start);
	}

	template <typename T>
	T lerp(const T&& start, const T&& end, float t)
	{
		return start + t * (end - start);
	}
}