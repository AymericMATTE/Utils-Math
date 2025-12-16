#include <iostream>
#include <vector>

typedef unsigned int uint;

struct Vector2
{
    float x;
    float y;

    Vector2(float x = 0, float y = 0)
    {
        this->x = x;
        this->y = y;
    }

    Vector2 operator+(const Vector2& other) const
    {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 operator-(const Vector2& other) const
    {
        return Vector2(x - other.x, y - other.y);
    }

    Vector2 operator*(const float other) const
    {
        return Vector2(x * other, y * other);
    }

    Vector2 operator/(const float other) const
    {
        return Vector2(x / other, y / other);
    }

    Vector2& operator+=(const Vector2& other)
    {
        x += other.x;
        y += other.y;

        return *this;
    }

    Vector2& operator-=(const Vector2& other)
    {
        x -= other.x;
        y -= other.y;

        return *this;
    }

    Vector2& operator*=(const float other)
    {
        x *= other;
        y *= other;

        return *this;
    }

    Vector2& operator/=(const float other)
    {
        x /= other;
        y /= other;

        return *this;
    }
};

float pow(float nbr, uint power)
{
    float result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= nbr;
    }
    return result;
}

template <typename T>
T Lerp(const T& start, const T& end, float t)
{
    return start + t * (end - start);
}

int Factorial(uint nbr)
{
    int result = 1;
    for (int i = 2; i <= nbr; ++i)
    {
        result *= i;
    }
    return result;
}


int BinomialCoefficient(uint n, uint k)
{
    if (k > n)
        throw std::runtime_error("Binomial Coefficient : k was greater than n");

    int nFact = Factorial(n);
    int kFact = Factorial(k);

    return nFact / (kFact * Factorial(n - k));
}   

Vector2 Beziers(std::vector<Vector2>& point, float t)
{
    Vector2 result;

    size_t nbrOfPoint = point.size();
    uint n = nbrOfPoint - 1;

    for (int k = 0; k < nbrOfPoint; ++k)
        result += point[k] * pow(t, k) * pow(1 - t, n - k) * BinomialCoefficient(n, k);

    return result;
}