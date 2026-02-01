
template<typename T>
struct Vector2
{
    T x;
    T y;

    Vector2(T x = T(), T y = T())
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

    Vector2 operator*(const T other) const
    {
        return Vector2(x * other, y * other);
    }

    Vector2 operator/(const T other) const
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

    Vector2& operator*=(const T other)
    {
        x *= other;
        y *= other;

        return *this;
    }

    Vector2& operator/=(const T other)
    {
        x /= other;
        y /= other;

        return *this;
    }
};