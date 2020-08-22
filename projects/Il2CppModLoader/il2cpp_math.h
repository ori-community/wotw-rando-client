#pragma once

#include <cmath>

inline app::Vector3 operator- (app::Vector3 const& a, app::Vector3 const& b)
{
    return app::Vector3{
        a.x - b.x,
        a.y - b.y,
        a.z - b.z
    };
}

namespace modloader::math
{
    inline bool in_rect(app::Vector3 const& a, app::Rect const& b)
    {
        return !(a.x < b.m_XMin ||
            a.y < b.m_YMin ||
            a.x > (b.m_XMin + b.m_Width) ||
            a.y > (b.m_YMin + b.m_Height));
    }

    inline float magnitude2(app::Vector3 const& a)
    {
        return (a.x * a.x) + (a.y * a.y) + (a.z * a.z);
    }

    inline float distance2(app::Vector3 const& a, app::Vector3 const& b)
    {
        const auto x = a.x - b.x;
        const auto y = a.y - b.y;
        const auto z = a.z - b.z;
        return (x * x) + (y * y) + (z * z);
    }

    inline app::Vector3 normalize(app::Vector3 const& a)
    {
        const auto mag = std::sqrt(magnitude2(a));
        return app::Vector3{
            a.x / mag,
            a.y / mag,
            a.z / mag
        };
    }

    inline app::Vector3 direction(app::Vector3 a, app::Vector3 b, bool ignore_z = false)
    {
        auto distance_v = b - a;
        if (ignore_z)
            distance_v.z = 0;

        return normalize(distance_v);
    }
}
