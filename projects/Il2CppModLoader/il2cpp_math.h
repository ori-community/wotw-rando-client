#pragma once

namespace modloader::math
{
    inline bool in_rect(app::Vector3 const& a, app::Rect const& b)
    {
        return !(a.x < b.m_XMin ||
            a.y < b.m_YMin ||
            a.x > (b.m_XMin + b.m_Width) ||
            a.y > (b.m_YMin + b.m_Height));
    }

    inline float distance2(app::Vector3 const& a, app::Vector3 const& b)
    {
        const auto x = a.x - b.x;
        const auto y = a.y - b.y;
        const auto z = a.z - b.z;
        return (x * x) + (y * y) + (z * z);
    }
}
