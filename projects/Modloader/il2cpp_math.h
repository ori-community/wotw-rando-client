#pragma once

#include <cmath>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>

inline app::Vector2 operator+(app::Vector2 const& a, app::Vector2 const& b) {
    return app::Vector2{
        a.x + b.x,
        a.y + b.y,
    };
}

inline app::Vector2 operator-(app::Vector2 const& a, app::Vector2 const& b) {
    return app::Vector2{
        a.x - b.x,
        a.y - b.y,
    };
}

inline app::Vector2 operator*(app::Vector2 const& a, float const& b) {
    return app::Vector2{
        a.x * b,
        a.y * b,
    };
}

inline app::Vector2 operator/(app::Vector2 const& a, app::Vector2 const& b) {
    return app::Vector2{
        a.x / b.x,
        a.y / b.y,
    };
}

inline app::Vector2 operator/(app::Vector2 const& a, float const& b) {
    return app::Vector2{
        a.x / b,
        a.y / b,
    };
}

inline app::Vector3 operator*(app::Vector3 const& a, float const& b) {
    return app::Vector3{
        a.x * b,
        a.y * b,
        a.z * b,
    };
}

inline app::Vector3 operator+(app::Vector3 const& a, app::Vector3 const& b) {
    return app::Vector3{
        a.x + b.x,
        a.y + b.y,
        a.z + b.z,
    };
}

inline app::Vector3 operator-(app::Vector3 const& a, app::Vector3 const& b) {
    return app::Vector3{
        a.x - b.x,
        a.y - b.y,
        a.z - b.z,
    };
}

inline app::Color operator*(app::Color const& a, app::Color const& b) {
    return app::Color{
        a.r * b.r,
        a.g * b.g,
        a.b * b.b,
        a.a * b.a,
    };
}

namespace modloader::math {
    inline float dot(app::Vector2 const& a, app::Vector2 const& b) {
        return a.x * b.x + a.y * b.y;
    }

    inline bool in_rect(app::Vector3 const& a, app::Rect const& b) {
        return !(a.x < b.m_XMin || a.y < b.m_YMin || a.x > (b.m_XMin + b.m_Width) || a.y > (b.m_YMin + b.m_Height));
    }

    inline bool in_rect(app::Vector2 const& a, app::Rect const& b) {
        return !(a.x < b.m_XMin || a.y < b.m_YMin || a.x > (b.m_XMin + b.m_Width) || a.y > (b.m_YMin + b.m_Height));
    }

    inline bool line_intersects_circle(app::Vector2 const& start, app::Vector2 const& end, app::Vector2 const& circle_origin, float radius) {
        const auto direction = start - end;
        const auto ray_to_circle = start - circle_origin;

        const float a = dot(direction, direction);
        const float b = 2.0f * dot(ray_to_circle, direction);
        const float c = dot(ray_to_circle, ray_to_circle) - radius * radius;

        float discriminant = b * b - 4 * a * c;
        if( discriminant >= 0 )
        {
            // ray didn't totally miss sphere,
            // so there is a solution to
            // the equation.

            discriminant = std::sqrtf(discriminant);

            // either solution may be on or off the ray so need to test both
            // t1 is always the smaller value, because BOTH discriminant and
            // a are non-negative.
            const float t1 = (-b - discriminant) / (2 * a);
            const float t2 = (-b + discriminant) / (2 * a);

            // 3x HIT cases:
            //          -o->             --|-->  |            |  --|->
            // Impale(t1 hit,t2 hit), Poke(t1 hit,t2>1), ExitWound(t1<0, t2 hit),

            // 3x MISS cases:
            //       ->  o                     o ->              | -> |
            // FallShort (t1>1,t2>1), Past (t1<0,t2<0), CompletelyInside(t1<0, t2>1)

            if( t1 >= 0 && t1 <= 1 )
            {
                // t1 is the intersection, and it's closer than t2
                // (since t1 uses -b - discriminant)
                // Impale, Poke
                return true;
            }

            // here t1 didn't intersect so we are either started
            // inside the sphere or completely past it
            if( t2 >= 0 && t2 <= 1 )
            {
                // ExitWound
                return true;
            }
        }

        // no intersection: FallShort, Past, CompletelyInside
        return false;
    }

    inline float magnitude2(app::Vector3 const& a) {
        return (a.x * a.x) + (a.y * a.y) + (a.z * a.z);
    }

    inline float distance2(app::Vector2 const& a, app::Vector2 const& b) {
        const auto x = a.x - b.x;
        const auto y = a.y - b.y;
        return (x * x) + (y * y);
    }

    inline float distance2(app::Vector3 const& a, app::Vector3 const& b) {
        const auto x = a.x - b.x;
        const auto y = a.y - b.y;
        const auto z = a.z - b.z;
        return (x * x) + (y * y) + (z * z);
    }

    inline app::Vector3 normalize(app::Vector3 const& a) {
        const auto mag = std::sqrt(magnitude2(a));
        return app::Vector3{
            a.x / mag,
            a.y / mag,
            a.z / mag
        };
    }

    inline app::Vector3 direction(app::Vector3 a, app::Vector3 b, bool ignore_z = false) {
        auto distance_v = b - a;
        if (ignore_z) {
            distance_v.z = 0;
        }

        return normalize(distance_v);
    }

    inline app::Vector2 lerp(app::Vector2 a, app::Vector2 b, float weight) {
        return a + (b - a) * weight;
    }

    inline app::Vector3 lerp(app::Vector3 a, app::Vector3 b, float weight) {
        return a + (b - a) * weight;
    }

    inline float lerp(float a, float b, float weight) {
        return a * (1 - weight) + b * weight;
    }

    inline app::Vector2 to_vec2(app::Vector3 const& vec) {
        return app::Vector2{ vec.x, vec.y };
    }

    inline app::Vector3 to_vec3(app::Vector2 const& vec) {
        return app::Vector3{ vec.x, vec.y, 0 };
    }
} // namespace modloader::math
